// This file is preprocessed by gcc and fed to cffi. Its not essential for
// corefreq functioning. Feel free to disable in case of problems.

#define __attribute__(...)  /* */
#define __inline
#define __restrict
#define __extension__
#define _BITS_BYTESWAP_H 1 // ignore complicated byteswap defs
#define _SYS_SELECT_H 1 // ignore complicated select defs
#include <time.h>
#include <sys/types.h>


#include "bitasm.h"
#include "amdmsr.h"
#include "intelmsr.h"
#include "coretypes.h"
#include "corefreq.h"
#include "corefreqm.h"
#include "corefreq-api.h"