import json
import os
import sys

if "DEBUG" in os.environ and ":" in os.environ["DEBUG"]:
    import pydevd

    pydevd.settrace(os.environ["DEBUG"].split(":")[0],
                    port=int(os.environ["DEBUG"].split(":")[1]), stdoutToServer=True, stderrToServer=True)
from cffi import FFI


def read_file(name):
    with open(os.path.join(os.path.dirname(__file__), name), 'r') as myfile:
        return myfile.read()


# Copied from https://gist.github.com/inactivist/4ef7058c2132fa16759d
def __convert_struct_field(ffi, s, fields):
    for field, fieldtype in fields:
        if fieldtype.type.kind == 'primitive':
            yield (field, getattr(s, field))
        elif fieldtype.type.kind == 'enum':
            yield (field, fieldtype.type.elements[getattr(s, field)])
        else:
            yield (field, ffi_struct_to_py(ffi, getattr(s, field)))


def ffi_struct_to_py(ffi, s):
    type = ffi.typeof(s)
    if type.kind == 'struct':
        return dict(__convert_struct_field(ffi, s, type.fields))
    elif type.kind == 'pointer':
        return dict(__convert_struct_field(ffi, s, type.item.fields))
    elif type.kind == 'array':
        if type.item.kind == 'primitive':
            if type.item.cname == 'char':
                return ffi.string(s)
            else:
                return [s[i] for i in range(type.length)]
        else:
            if type.length is None:
                return []
            else:
                return [ffi_struct_to_py(ffi, s[i]) for i in range(type.length)]
    elif type.kind == 'primitive':
        return int(s)


def fd_to_ffi_struct(fd, ffi, struct_type):
    shm_struct = ffi.new(struct_type)
    f = os.fdopen(fd, "rb")
    bu = ffi.buffer(shm_struct)
    f.readinto(bu)
    f.close()
    return shm_struct


def main():
    ffi = FFI()
    ffi.cdef(read_file("corefreq-cffi-out.h"))
    try:
        import posix_ipc
        shm_fd = posix_ipc.SharedMemory("corefreq-shm", flags=0, mode=0666, read_only=True).fd
    except ImportError:
        sys.stderr.write(
            "posix_ipc module is not installed. we'll use /dev/shm directly. if it fails, try pip install posix_ipc\n")
        shm_fd = os.open("/dev/shm/corefreq-shm", 0, 0666)
    try:
        shm_struct = fd_to_ffi_struct(shm_fd, ffi, "SHM_STRUCT*")
        shm_dict = ffi_struct_to_py(ffi, shm_struct)
        print json.dumps(shm_dict)
    finally:
        pass
    

main()
