import mmap
import re
import sys
import os
import posix_ipc

if "DEBUG" in os.environ and ":" in os.environ["DEBUG"]:
    import pydevd

    pydevd.settrace(os.environ["DEBUG"].split(":")[0],
                    port=int(os.environ["DEBUG"].split(":")[1]), stdoutToServer=True, stderrToServer=True)

from cffi import FFI


def read_file(name):
    with open(os.path.join(os.path.dirname(__file__), name), 'r') as myfile:
        return myfile.read()

def hex(slice):
    return "".join("%02x" % ord(b) for b in slice)

ffi = FFI()
ffi.cdef(read_file("corefreq-cffi-out.h"))
shm = posix_ipc.SharedMemory("test1", flags=0, mode=0666, read_only=True)
try:
    #struct_sz = ffi.sizeof("SHM_STRUCT")
    shm_struct = ffi.new("SHM_STRUCT*")
    #arg = ffi.new("char[]", 6)

    #ffi.buffer(shm_struct, struct_sz)[:] = mms
    f = os.fdopen(shm.fd,"rb")
    #ba = bytearray(struct_sz)  # all zero bytes
    #bamv = memoryview(ba)
    #f.readinto(ba)
    bu = ffi.buffer(shm_struct)
    f.readinto(bu)
    f.close()
    print dir(shm_struct)
finally:
    pass
