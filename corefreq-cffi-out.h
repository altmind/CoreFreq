# 1 "corefreq-cffi.h"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "corefreq-cffi.h"
# 10 "corefreq-cffi.h"
# 1 "/usr/include/time.h" 1 3 4
# 27 "/usr/include/time.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 375 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 392 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 393 "/usr/include/sys/cdefs.h" 2 3 4
# 376 "/usr/include/features.h" 2 3 4
# 399 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4
# 10 "/usr/include/gnu/stubs.h" 3 4
# 1 "/usr/include/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/gnu/stubs.h" 2 3 4
# 400 "/usr/include/features.h" 2 3 4
# 28 "/usr/include/time.h" 2 3 4









# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stddef.h" 1 3 4
# 212 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 38 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/bits/time.h" 1 3 4
# 42 "/usr/include/time.h" 2 3 4
# 55 "/usr/include/time.h" 3 4
# 1 "/usr/include/bits/types.h" 1 3 4
# 27 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 28 "/usr/include/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 130 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 131 "/usr/include/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 56 "/usr/include/time.h" 2 3 4



typedef __clock_t clock_t;



# 73 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };








struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;




};








struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;





typedef __pid_t pid_t;
# 186 "/usr/include/time.h" 3 4



extern clock_t clock (void) ;


extern time_t time (time_t *__timer) ;


extern double difftime (time_t __time1, time_t __time0)
     ;


extern time_t mktime (struct tm *__tp) ;





extern size_t strftime (char * __s, size_t __maxsize,
   const char * __format,
   const struct tm * __tp) ;

# 221 "/usr/include/time.h" 3 4
# 1 "/usr/include/xlocale.h" 1 3 4
# 27 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 222 "/usr/include/time.h" 2 3 4

extern size_t strftime_l (char * __s, size_t __maxsize,
     const char * __format,
     const struct tm * __tp,
     __locale_t __loc) ;
# 236 "/usr/include/time.h" 3 4



extern struct tm *gmtime (const time_t *__timer) ;



extern struct tm *localtime (const time_t *__timer) ;





extern struct tm *gmtime_r (const time_t * __timer,
       struct tm * __tp) ;



extern struct tm *localtime_r (const time_t * __timer,
          struct tm * __tp) ;





extern char *asctime (const struct tm *__tp) ;


extern char *ctime (const time_t *__timer) ;







extern char *asctime_r (const struct tm * __tp,
   char * __buf) ;


extern char *ctime_r (const time_t * __timer,
        char * __buf) ;




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) ;



extern int daylight;
extern long int timezone;





extern int stime (const time_t *__when) ;
# 319 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) ;


extern time_t timelocal (struct tm *__tp) ;


extern int dysize (int __year) ;
# 334 "/usr/include/time.h" 3 4
extern int nanosleep (const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) ;


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) ;


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     ;






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) ;




extern int timer_create (clockid_t __clock_id,
    struct sigevent * __evp,
    timer_t * __timerid) ;


extern int timer_delete (timer_t __timerid) ;


extern int timer_settime (timer_t __timerid, int __flags,
     const struct itimerspec * __value,
     struct itimerspec * __ovalue) ;


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     ;


extern int timer_getoverrun (timer_t __timerid) ;
# 430 "/usr/include/time.h" 3 4

# 11 "corefreq-cffi.h" 2
# 1 "/usr/include/sys/types.h" 1 3 4
# 27 "/usr/include/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 60 "/usr/include/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
# 104 "/usr/include/sys/types.h" 3 4
typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 146 "/usr/include/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stddef.h" 1 3 4
# 147 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 194 "/usr/include/sys/types.h" 3 4
typedef int int8_t ;
typedef int int16_t ;
typedef int int32_t ;
typedef int int64_t ;


typedef unsigned int u_int8_t ;
typedef unsigned int u_int16_t ;
typedef unsigned int u_int32_t ;
typedef unsigned int u_int64_t ;

typedef int register_t ;
# 216 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 61 "/usr/include/endian.h" 2 3 4
# 217 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/select.h" 1 3 4
# 220 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 29 "/usr/include/sys/sysmacros.h" 3 4



extern unsigned int gnu_dev_major (unsigned long long int __dev)
     ;

extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     ;

extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     ;
# 63 "/usr/include/sys/sysmacros.h" 3 4

# 223 "/usr/include/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 270 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 21 "/usr/include/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 22 "/usr/include/bits/pthreadtypes.h" 2 3 4
# 60 "/usr/include/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;





typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 90 "/usr/include/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    int __spins;
    __pthread_list_t __list;
# 115 "/usr/include/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    unsigned long long int __total_seq;
    unsigned long long int __wakeup_seq;
    unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;


    unsigned int __flags;

  } __data;
# 202 "/usr/include/bits/pthreadtypes.h" 3 4
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 271 "/usr/include/sys/types.h" 2 3 4



# 12 "corefreq-cffi.h" 2


# 1 "bitasm.h" 1
# 10 "bitasm.h"
typedef unsigned long long int Bit64;
typedef unsigned int Bit32;
# 15 "corefreq-cffi.h" 2
# 1 "amdmsr.h" 1
# 66 "amdmsr.h"
const struct {
 unsigned int MCF,
   PCF[5];
} VCO[8] = {

              { 8, { 0, 0, 16, 17, 18}},
              { 9, {16, 17, 18, 19, 20}},
              {10, {18, 19, 20, 21, 22}},
              {11, {20, 21, 22, 23, 24}},
              {12, {22, 23, 24, 25, 26}},
              {13, {24, 25, 26, 27, 28}},
              {14, {26, 27, 28, 29, 30}},
              {15, {28, 29, 30, 31, 32}},
};

typedef union
{
 unsigned long long value;
    struct
    {
 unsigned long long
 SmmLock : 1-0,
 Reserved1 : 3-1,
 TlbCacheDis : 4-3,
 INVDWBINVD : 5-4,
 Reserved2 : 7-5,
 AllowFerrOnNe : 8-7,
 IgnneEm : 9-8,
 MonMwaitDis : 10-9,
 MonMwaitUserEn : 11-10,
 Reserved3 : 12-11,
 HltXSpCycEn : 13-12,
 SmiSpCycDis : 14-13,
 RsmSpCycDis : 15-14,
 Reserved4 : 17-15,
 Wrap32Dis : 18-17,
 McStatusWrEn : 19-18,
 Reserved5 : 20-19,
 IoCfgGpFault : 21-20,
 Reserved6 : 23-21,
 ForceRdWrSzPrb : 24-23,
 TscFreqSel : 25-24,
 CpbDis : 26-25,
 EffFreqCntMwait : 27-26,

 EffFreqROLock : 28-27,
 SmuLock : 29-28,
 CSEnable : 30-29,
 Reserved7 : 32-30,
 Reserved : 64-32;
    } Family_12h;
    struct
    {
 unsigned long long
 SmmLock : 1-0,
 Reserved1 : 3-1,
 TlbCacheDis : 4-3,
 INVDWBINVD : 5-4,
 Reserved2 : 7-5,
 AllowFerrOnNe : 8-7,
 IgnneEm : 9-8,
 MonMwaitDis : 10-9,
 MonMwaitUserEn : 11-10,
 Reserved3 : 13-11,
 SmiSpCycDis : 14-13,
 RsmSpCycDis : 15-14,
 Reserved4 : 17-15,
 Wrap32Dis : 18-17,
 McStatusWrEn : 19-18,
 Reserved5 : 20-19,
 IoCfgGpFault : 21-20,
 LockTscToCurrP0 : 22-21,
 Reserved6 : 24-22,
 TscFreqSel : 25-24,
 CpbDis : 26-25,
 EffFreqCntMwait : 27-26,
 EffFreqROLock : 28-27,
 Reserved7 : 29-28,
 CSEnable : 30-29,
 IRPerfEn : 31-30,
 Reserved : 64-31;
    } Family_17h;
    struct
    {
 unsigned long long
 SmmLock : 1-0,
 SLOWFENCE : 2-1,
 Reserved1 : 3-2,
 TlbCacheDis : 4-3,
 INVDWBINVD : 5-4,
 Reserved2 : 6-5,
 FFDIS : 7-6,
 DISLOCK : 8-7,
 IgnneEm : 9-8,
 Reserved3 : 12-9,
 HltXSpCycEn : 13-12,
 SmiSpCycDis : 14-13,
 RsmSpCycDis : 15-14,
 SSEDIS : 16-15,
 Reserved4 : 17-16,
 Wrap32Dis : 18-17,
 McStatusWrEn : 19-18,
 Reserved5 : 24-19,
 StartFID : 30-24,
 Reserved6 : 32-30,
 Reserved : 64-32;
    } Family_0Fh;
} HWCR;

typedef union
{
 unsigned long long value;
    struct
    {
 unsigned long long
 NewFID : 6-0,
 Reserved1 : 8-6,
 NewVID : 14-8,
 Reserved2 : 16-14,
 InitFidVid : 17-16,
 Reserved3 : 32-17,
 StpGntTOCnt : 52-32,
 Reserved4 : 64-52;
    };
} FIDVID_CONTROL;

typedef union
{
 unsigned long long value;
    struct
    {
 unsigned long long
 CurrFID : 6-0,
 Reserved1 : 8-6,
 StartFID : 14-8,
 Reserved2 : 16-14,
 MaxFID : 22-16,
 Reserved3 : 24-22,
 MaxRampVID : 30-24,
 Reserved4 : 31-30,
 FidVidPending : 32-31,
 CurrVID : 38-32,
 Reserved5 : 40-38,
 StartVID : 46-40,
 Reserved6 : 48-46,
 MaxVID : 54-48,
 Reserved7 : 56-54,
 PstateStep : 57-56,
 AltVidOffset : 60-57,
 Reserved8 : 61-60,
 IntPstateSup : 62-61,
 Reserved9 : 64-62;
    };
} FIDVID_STATUS;

typedef union
{
 unsigned long long value;
    struct
    {
 unsigned long long
 CpuFid : 6-0,
 CpuDid : 9-6,
 CpuVid : 16-9,
 Reserved1 : 22-16,
 NbDid : 23-22,
 Reserved2 : 25-23,
 NbVid : 32-25,
 IddValue : 40-32,
 IddDiv : 42-40,
 Reserved3 : 63-42,
 PstateEn : 64-63;
    } Family_10h;
    struct
    {
 unsigned long long
 CpuDid : 4-0,
 CpuFid : 9-4,
 CpuVid : 16-9,
 Reserved1 : 32-16,
 IddValue : 40-32,
 IddDiv : 42-40,
 Reserved2 : 63-42,
 PstateEn : 64-63;
    } Family_12h;
    struct
    {
 unsigned long long
 CpuDidLSD : 4-0,
 CpuDidMSD : 9-4,
 CpuVid : 16-9,
 Reserved1 : 32-16,
 IddValue : 40-32,
 IddDiv : 42-40,
 Reserved2 : 63-42,
 PstateEn : 64-63;
    } Family_14h;
    struct
    {
 unsigned long long
 CpuFid : 6-0,
 CpuDid : 9-6,
 CpuVid : 16-9,
 CpuVid_bit : 17-16,
 Reserved1 : 22-17,
 NbPstate : 23-22,
 Reserved2 : 32-23,
 IddValue : 40-32,
 IddDiv : 42-40,
 Reserved3 : 63-42,
 PstateEn : 64-63;
    } Family_15h;
    struct
    {
 unsigned long long
 CpuFid : 8-0,
 CpuDfsId : 14-8,
 CpuVid : 22-14,
 IddValue : 30-22,
 IddDiv : 32-30,
 Reserved : 63-32,
 PstateEn : 64-63;
    } Family_17h;
} PSTATEDEF;

typedef union
{
 unsigned long long value;
    struct
    {
 unsigned long long
 Current : 3-0,
 Reserved : 64-3;
    };
} PSTATESTAT;

typedef union
{
 unsigned long long value;
    struct
    {
 unsigned long long
 CurCpuFid : 6-0,
 CurCpuDid : 9-6,
 CurCpuVid : 16-9,
 CurPstate : 19-16,
 Reserved1 : 20-19,
 CurCpuVid_bit : 21-20,
 Reserved2 : 23-21,
 NbPstateDis : 24-23,
 CurNbVid : 32-24,
 StartupPstate : 35-32,
 Reserved3 : 49-35,
 MaxCpuCof : 55-49,
 Reserved4 : 56-55,
 CurPstateLimit : 59-56,
 MaxNbCof : 64-59;
    } Arch_COF;
    struct
    {
 unsigned long long
 CurCpuDidLSD : 4-0,
 CurCpuDidMSD : 9-4,
 CurCpuVid : 16-9,
 CurPstate : 19-16,
 Reserved1 : 20-19,
 PstateInProgress: 21-20,
 Reserved2 : 25-21,
 CurNbVid : 32-25,
 StartupPstate : 35-32,
 MaxVid : 42-35,
 MinVid : 49-42,
 MainPllOpFidMax : 55-49,
 Reserved3 : 56-55,
 CurPstateLimit : 59-56,
 Reserved4 : 64-59;
    } Arch_Pll;
} COFVID;

typedef union
{
 unsigned long long value;
    struct
    {
 unsigned long long
 IOMsgAddr : 16-0,
 IOMsgData : 24-16,
 IntrPndMsgDis : 25-24,
 IntrPndMsg : 26-25,
 IORd : 27-26,
 SmiOnCmpHalt : 28-27,
 C1eOnCmpHalt : 29-28,
 Reserved1 : 32-29,
 Reserved2 : 64-32;
    };
} INT_PENDING_MSG;

typedef union
{
 unsigned long long value;
    struct
    {
 unsigned long long
 DPD : 1-0,
 InterceptInit : 2-1,
 DisA20m : 3-2,
 SVM_Lock : 4-3,
 SVME_Disable : 5-4,
 Reserved1 : 32-5,
 Reserved2 : 64-32;
    };
} VM_CR;

typedef union
{
 unsigned long long value;
    struct
    {
 unsigned long long
 SvmLockKey : 64-0;
    };
} SVM_LOCK_KEY;

typedef struct
{
 unsigned int
 Reserved1 : 1-0,
 SensorTrip : 2-1,
 SensorCoreSelect: 3-2,
 Sensor0Trip : 4-3,
 Sensor1Trip : 5-4,
 SensorTripEnable: 6-5,
 SelectSensorCPU : 7-6,
 Reserved2 : 8-7,
 DiodeOffset : 14-8,
 Reserved3 : 16-14,
 CurrentTemp : 24-16,
 TjOffset : 29-24,
 Reserved4 : 31-29,
 SwThermTrip : 32-31;
} THERMTRIP_STATUS;

typedef union {
 unsigned int value;
 struct {
  unsigned int
  CSEnable : 1-0,
  Spare : 2-1,
  MemTestFailed : 3-2,
  ReservedBits1 : 5-3,
  BaseAddrLo : 14-5,
  ReservedBits2 : 19-14,
  BaseAddrHi : 29-19,
  ReservedBits3 : 32-29;
 };
} AMD_0F_DRAM_CS_BASE_ADDR;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
   CS10 : 4-0,
   CS32 : 8-4,
   CS54 : 12-8,
   CS76 : 16-12,
  ReservedBits : 32-16;
 };
} AMD_0F_DRAM_CS_MAPPING;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  tCL : 3-0,
  ReservedBits1 : 4-3,
  tRCD : 6-4,
  ReservedBits2 : 8-6,
  tRP : 10-8,
  ReservedBits3 : 11-10,
  tRTPr : 12-11,
  tRAS : 16-12,
  tRC : 20-16,
  tWR : 22-20,
  tRRD : 24-22,
  MemClkDis : 32-24;
 };
} AMD_0F_DRAM_TIMING_LOW;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  InitializeDRAM : 1-0,
  ExitSelfRefresh : 2-1,
  ReservedBits1 : 4-2,
  DRAM_Term : 6-4,
  ReservedBits2 : 7-6,
  DRAM_DrvWeak : 8-7,
  Parity_Enable : 9-8,
  SelfRefRateEn : 10-9,
  BurstLength32 : 11-10,
  Width128 : 12-11,
  X4_DIMMS : 16-12,
  UnbufferedDIMM : 17-16,
  ReservedBits3 : 19-17,
  ECC_DIMM_Enable : 20-19,
  ReservedBits4 : 32-20;
 };
} AMD_0F_DRAM_CONFIG_LOW;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  MemClkFreq : 3-0,
  MemClkFreqValid : 4-3,
  MaxAsyncLatency : 8-4,
  ReservedBits1 : 12-8,
  ReadDQS_Enable : 13-12,
  ReservedBits2 : 14-13,
  DisDRAMInterface: 15-14,
  PowerDown_Enable: 16-15,
  PowerDownMode : 17-16,
  FourRankSODimm : 18-17,
  FourRankRDimm : 19-18,
  ReservedBits3 : 20-19,
  SlowAccessMode : 21-20,
  ReservedBits4 : 22-21,
  BankSwizzleMode : 24-22,
  DcqBypassMax : 28-24,
  tFAW : 32-28;
 };
} AMD_0F_DRAM_CONFIG_HIGH;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  C0Unit : 2-0,
  C1Unit : 4-2,
  McUnit : 6-4,
  HbUnit : 8-6,
  SbLink : 10-8,
  ReservedBits : 32-10;
 };
} AMD_0F_HTT_UNIT_ID;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  MinRev : 5-0,
  MajRev : 8-5,
  LinkFreqMax : 12-8,
  Error : 16-12,
  LinkFreqCap : 32-16;
 };
} AMD_0F_HTT_FREQUENCY;
# 16 "corefreq-cffi.h" 2
# 1 "intelmsr.h" 1
# 183 "intelmsr.h"
typedef union
{
 unsigned long long value;
 struct
 {
  unsigned long long
  ReservedBits1 : 8-0,
  BSP : 9-8,
  ReservedBits2 : 10-9,
  EXTD : 11-10,
  EN : 12-11,
  Addr : 64-12;
 };
} LOCAL_APIC;

typedef union
{
 unsigned long long value;
 struct
 {
  unsigned long long
  ReservedBits : 32-0,
  Signature : 64-32;
 };
} MICROCODE_ID;

typedef union
{
 unsigned long long value;
 struct
 {
  unsigned long long
  ReservedBits1 : 8-0,
  MaxBusRatio : 13-8,
  ReservedBits2 : 50-13,
  PlatformId : 53-50,
  ReservedBits3 : 64-53;
 };
} PLATFORM_ID;

typedef union
{
 unsigned long long value;
 struct
 {
  unsigned long long
  Bus_Speed : 3-0,
  ReservedBits : 64-3;
 };
} FSB_FREQ;

typedef union
{
 unsigned long long value;
 struct
 {
  unsigned long long
  CurrVID : 8-0,
  CurrFID : 16-8,
  ReservedBits1 : 31-16,
  XE_Enable : 32-31,
  ReservedBits2 : 40-32,
  MaxBusRatio : 45-40,
  ReservedBits3 : 46-45,
  NonInt_BusRatio : 47-46,
  ReservedBits4 : 64-47;
 } CORE;
 struct
 {
  unsigned long long
  CurrentRatio : 16-0,
  ReservedBits : 64-16;
 } NHM;
 struct
 {
  unsigned long long
  CurrentRatio : 16-0,
  ReservedBits1 : 32-16,
  CurrVID : 48-32,
  ReservedBits2 : 64-48;
 } SNB;
} PERF_STATUS;

typedef union
{
 unsigned long long value;
 struct
 {
  unsigned long long
  EIST_Target : 16-0,
  ReservedBits1 : 32-16,
  Turbo_IDA : 33-32,
  ReservedBits2 : 64-33;
 };
} PERF_CONTROL;

typedef union
{
 unsigned long long value;
 struct
 {
  unsigned long long
  ReservedBits1 : 8-0,
  MaxNonTurboRatio: 16-8,
  ReservedBits2 : 28-16,
  Ratio_Limited : 29-28,
  TDP_Limited : 30-29,
  ReservedBits3 : 32-30,
  LowPowerMode : 33-32,
  ConfigTDPlevels : 35-33,
  ReservedBits4 : 40-35,
  MinimumRatio : 48-40,
  MinOperatRatio : 56-48,
  ReservedBits5 : 64-56;
 };
} PLATFORM_INFO;

typedef union
{
 unsigned long long value;
 struct
 {
  unsigned long long
  Pkg_CStateLimit : 4-0,
  ReservedBits1 : 10-4,
  IO_MWAIT_Redir : 11-10,
  ReservedBits2 : 15-11,
  CFG_Lock : 16-15,
  ReservedBits3 : 24-16,
  Int_Filtering : 25-24,
  C3autoDemotion : 26-25,
  C1autoDemotion : 27-26,
  C3undemotion : 28-27,
  C1undemotion : 29-28,
  ReservedBits4 : 64-29;
 };
} CSTATE_CONFIG;

typedef union
{
 unsigned long long value;
 struct
 {
  unsigned long long
  LVL2_BaseAddr : 16-0,
  CStateRange : 19-16,
  ReservedBits : 64-19;
 };
} CSTATE_IO_MWAIT;
# 355 "intelmsr.h"
typedef union
{
# 368 "intelmsr.h"
 unsigned long long value;
 struct
 {
  unsigned long long
  MaxRatio_1C : 8-0,
  MaxRatio_2C : 16-8,
  MaxRatio_3C : 24-16,
  MaxRatio_4C : 32-24,
  MaxRatio_5C : 40-32,
  MaxRatio_6C : 48-40,
  MaxRatio_7C : 56-48,
  MaxRatio_8C : 64-56;
 };
} TURBO_RATIO_CONFIG0;

typedef union
{
 unsigned long long value;
 struct
 {
  unsigned long long
  MaxRatio_9C : 8-0,
  MaxRatio_10C : 16-8,
  MaxRatio_11C : 24-16,
  MaxRatio_12C : 32-24,
  MaxRatio_13C : 40-32,
  MaxRatio_14C : 48-40,
  MaxRatio_15C : 56-48,
  MaxRatio_16C : 64-56;
 } HSW_EP;
 struct
 {
  unsigned long long
  MaxRatio_9C : 8-0,
  MaxRatio_10C : 16-8,
  MaxRatio_11C : 24-16,
  MaxRatio_12C : 32-24,
  MaxRatio_13C : 40-32,
  MaxRatio_14C : 48-40,
  MaxRatio_15C : 56-48,
  ReservedBits : 63-56,
  Semaphore : 64-63;
 } IVB_EP;
 struct
 {
  unsigned long long
  NUMCORE_0 : 8-0,
  NUMCORE_1 : 16-8,
  NUMCORE_2 : 24-16,
  NUMCORE_3 : 32-24,
  NUMCORE_4 : 40-32,
  NUMCORE_5 : 48-40,
  NUMCORE_6 : 56-48,
  NUMCORE_7 : 64-56;
 } SKL_X;
} TURBO_RATIO_CONFIG1;

typedef union
{
 unsigned long long value;
 struct
 {
  unsigned long long
  MaxRatio_17C : 8-0,
  MaxRatio_18C : 16-8,
  ReservedBits : 63-16,
  Semaphore : 64-63;
 };
} TURBO_RATIO_CONFIG2;


typedef union
{
 unsigned long long value;
 struct
 {
  unsigned int
  Ratio : 8-0,
  ReservedBits : 32-8;
  unsigned int : 32-0;
 };
} CONFIG_TDP_NOMINAL;

typedef union
{
 unsigned long long value;
 struct
 {
  unsigned long long
  Power : 15-0,
  ReservedBits1 : 16-15,
  Ratio : 24-16,
  ReservedBits2 : 32-24,
  MaxPower : 47-32,
  ReservedBits3 : 48-47,
  MinPower : 64-48;
 };
} CONFIG_TDP_LEVEL;

typedef union
{
 unsigned long long value;
 struct
 {
  unsigned int
  Level : 2-0,
  ReservedBits : 31-2,
  Lock : 32-31;
  unsigned int : 32-0;
 };
} CONFIG_TDP_CONTROL;

typedef union
{
 unsigned long long value;
 struct
 {
  unsigned int
  MaxRatio : 8-0,
  ReservedBits1 : 31-8,
  Ratio_Lock : 32-31;
  unsigned int : 32-0;
 };
} TURBO_ACTIVATION;

typedef union
{
 unsigned long long value;
 struct
 {
  unsigned long long
  FastStrings : 1-0,
  ReservedBits1 : 2-1,
  x87Compat_Enable: 3-2,
  TCC : 4-3,
  SplitLockDisable: 5-4,
  ReservedBits2 : 6-5,
  L3Cache_Disable : 7-6,
  PerfMonitoring : 8-7,
  SupprLock_Enable: 9-8,
  PrefetchQueueDis: 10-9,
  Int_FERR_Enable : 11-10,
  BTS : 12-11,
  PEBS : 13-12,
  TM2_Enable : 14-13,
  ReservedBits3 : 16-14,
  EIST : 17-16,
  ReservedBits4 : 18-17,
  FSM : 19-18,
  PrefetchCacheDis: 20-19,
  ReservedBits5 : 22-20,
  CPUID_MaxVal : 23-22,
  xTPR : 24-23,
  L1DataCacheMode : 25-24,
  ReservedBits6 : 34-25,
  XD_Bit_Disable : 35-34,
  ReservedBits7 : 37-35,
  DCU_Prefetcher : 38-37,
  Turbo_IDA : 39-38,
  IP_Prefetcher : 40-39,
  ReservedBits8 : 64-40;
 };
} MISC_PROC_FEATURES;

typedef union
{
 unsigned long long value;
 struct
 {
  unsigned long long int
  ReservedBits1 : 1-0,
  C1E : 2-1,
  ReservedBits2 : 64-2;
 };
} POWER_CONTROL;

typedef union
{
 unsigned long long value;
 struct
 {
  unsigned long long
  DutyCycle : 4-0,
  ODCM_Enable : 5-4,
  ReservedBits : 63-5,
  ECMD : 64-63;
 };
} CLOCK_MODULATION;

typedef union
{
 unsigned long long value;
 struct
 {
  unsigned long long
  PowerPolicy : 4-0,
  ReservedBits : 64-4;
 };
} ENERGY_PERF_BIAS;
# 581 "intelmsr.h"
typedef union
{
 unsigned long long value;
 struct
 {
  unsigned long long
  HW_Coord_EIST : 1-0,
  Perf_BIAS_Enable: 2-1,
  ReservedBits1 : 22-2,
  Therm_Intr_Coord: 23-22,
  ReservedBits2 : 64-23;
 };
} MISC_PWR_MGMT;
# 602 "intelmsr.h"
typedef union
{
 unsigned long long value;
 struct
 {
  unsigned long long
  Overflow_PMC0 : 1-0,
  Overflow_PMC1 : 2-1,
  Overflow_PMC2 : 3-2,
  Overflow_PMC3 : 4-3,
  Overflow_PMCn : 32-4,
  Overflow_CTR0 : 33-32,
  Overflow_CTR1 : 34-33,
  Overflow_CTR2 : 35-34,
  ReservedBits1 : 55-35,
  TraceToPAPMI : 56-55,
  ReservedBits2 : 58-56,
  LBR_Frz : 59-58,
  CTR_Frz : 60-59,
  ASCI : 61-60,
  Overflow_UNC : 62-61,
  Overflow_Buf : 63-62,
  Ovf_CondChg : 64-63;
 };
} CORE_GLOBAL_PERF_STATUS;

typedef union
{
 unsigned long long value;
 struct
 {
  unsigned long long
  Clear_Ovf_PMC0 : 1-0,
  Clear_Ovf_PMC1 : 2-1,
  Clear_Ovf_PMC2 : 3-2,
  Clear_Ovf_PMC3 : 4-3,
  Clear_Ovf_PMCn : 32-4,
  Clear_Ovf_CTR0 : 33-32,
  Clear_Ovf_CTR1 : 34-33,
  Clear_Ovf_CTR2 : 35-34,
  ReservedBits1 : 55-35,
  ClrTraceToPA_PMI: 56-55,
  ReservedBits2 : 61-56,
  Clear_Ovf_UNC : 62-61,
  Clear_Ovf_Buf : 63-62,
  Clear_CondChg : 64-63;
 };
} CORE_GLOBAL_PERF_OVF_CTRL;

typedef union
{
 unsigned long long value;
 struct
 {
  unsigned long long
  EN_PMC0 : 1-0,
  EN_PMC1 : 2-1,
  EN_PMC2 : 3-2,
  EN_PMC3 : 4-3,
  EN_PMCn : 32-4,
  EN_FIXED_CTR0 : 33-32,
  EN_FIXED_CTR1 : 34-33,
  EN_FIXED_CTR2 : 35-34,
  ReservedBits : 64-35;
 };
} CORE_GLOBAL_PERF_CONTROL;

typedef union
{
 unsigned long long value;
 struct
 {
  unsigned long long
  EN0_OS : 1-0,
  EN0_Usr : 2-1,
  AnyThread_EN0 : 3-2,
  EN0_PMI : 4-3,
  EN1_OS : 5-4,
  EN1_Usr : 6-5,
  AnyThread_EN1 : 7-6,
  EN1_PMI : 8-7,
  EN2_OS : 9-8,
  EN2_Usr : 10-9,
  AnyThread_EN2 : 11-10,
  EN2_PMI : 12-11,
  ReservedBits : 64-12;
 };
} CORE_FIXED_PERF_CONTROL;

typedef union
{
 unsigned long long value;
 struct
 {
  unsigned long long
  StatusBit : 1-0,
  StatusLog : 2-1,
  PROCHOT : 3-2,
  PROCHOTLog : 4-3,
  CriticalTemp : 5-4,
  CriticalTempLog : 6-5,
  Threshold1 : 7-6,
  Threshold1Log : 8-7,
  Threshold2 : 9-8,
  Threshold2Log : 10-9,
  PwrLimitStatus : 11-10,
  PwrLimitLog : 12-11,
  CurLimitStatus : 13-12,
  CurLimitLog : 14-13,
  CrDomLimitStatus: 15-14,
  CrDomLimitLog : 16-15,
  DTS : 23-16,
  ReservedBits1 : 27-23,
  Resolution : 31-27,
  ReadingValid : 32-31,
  ReservedBits2 : 64-32;
 };
} THERM_STATUS;

typedef union
{
 unsigned long long value;
 struct
 {
  unsigned long long
  ReservedBits1 : 16-0,
  TM_SELECT : 17-16,
  ReservedBits2 : 64-17;
 };
} THERM2_CONTROL;

typedef union
{
 unsigned long long value;
 struct
 {
  unsigned long long
  ReservedBits1 : 16-0,
  Target : 24-16,
  ReservedBits2 : 64-24;
 };
} TJMAX;

typedef union
{
 unsigned long long value;
 struct
 {
  unsigned long long
  MaxRatio : 7-0,
  ReservedBits1 : 8-7,
  MinRatio : 15-8,
  ReservedBits2 : 64-15;
 };
} UNCORE_RATIO_LIMIT;

typedef union
{
 unsigned long long value;
 struct
 {
  unsigned long long
  Overflow_PMC0 : 1-0,
  Overflow_PMC1 : 2-1,
  Overflow_PMC2 : 3-2,
  Overflow_PMC3 : 4-3,
  Overflow_PMC4 : 5-4,
  Overflow_PMC5 : 6-5,
  Overflow_PMC6 : 7-6,
  Overflow_PMC7 : 8-7,
  ReservedBits1 : 32-8,
  Overflow_CTR0 : 33-32,
  ReservedBits2 : 61-33,
  Overflow_PMI : 62-61,
  Ovf_DSBuffer : 63-62,
  Ovf_CondChg : 64-63;
 } NHM;
 struct
 {
  unsigned long long
  Overflow_CTR0 : 1-0,
  Overflow_ARB : 2-1,
  ReservedBits1 : 3-2,
  Overflow_PMC0 : 4-3,
  ReservedBits2 : 64-4;
 } SNB;
 struct
 {
  unsigned long long
  Overflow_CTR0 : 1-0,
  Overflow_ARB : 2-1,
  ReservedBits1 : 3-2,
  Overflow_PMC0 : 4-3,
  ReservedBits2 : 64-4;
 } SKL;
} UNCORE_GLOBAL_PERF_STATUS;

typedef union
{
 unsigned long long value;
 struct
 {
  unsigned long long
  Clear_Ovf_PMC0 : 1-0,
  Clear_Ovf_PMC1 : 2-1,
  Clear_Ovf_PMC2 : 3-2,
  Clear_Ovf_PMC3 : 4-3,
  Clear_Ovf_PMC4 : 5-4,
  Clear_Ovf_PMC5 : 6-5,
  Clear_Ovf_PMC6 : 7-6,
  Clear_Ovf_PMC7 : 8-7,
  ReservedBits1 : 32-8,
  Clear_Ovf_CTR0 : 33-32,
  ReservedBits2 : 61-33,
  Clear_Ovf_PMI : 62-61,
  Clear_Ovf_DSBuf : 63-62,
  Clear_CondChg : 64-63;
 };
} UNCORE_GLOBAL_PERF_OVF_CTRL;

typedef union
{
 unsigned long long value;
 struct
 {
  unsigned long long
  EN_PMC0 : 1-0,
  EN_PMC1 : 2-1,
  EN_PMC2 : 3-2,
  EN_PMC3 : 4-3,
  EN_PMC4 : 5-4,
  EN_PMC5 : 6-5,
  EN_PMC6 : 7-6,
  EN_PMC7 : 8-7,
  ReservedBits1 : 32-8,
  EN_FIXED_CTR0 : 33-32,
  ReservedBits2 : 48-33,
  EN_PMI_CORE0 : 49-48,
  EN_PMI_CORE1 : 50-49,
  EN_PMI_CORE2 : 51-50,
  EN_PMI_CORE3 : 52-51,
  ReservedBits3 : 63-52,
  PMI_FRZ : 64-63;
 } NHM;
 struct
 {
  unsigned long long
  EN_PMI_CORE0 : 1-0,
  EN_PMI_CORE1 : 2-1,
  EN_PMI_CORE2 : 3-2,
  EN_PMI_CORE3 : 4-3,
  ReservedBits1 : 29-4,
  EN_FIXED_CTR0 : 30-29,
  EN_WakeOn_PMI : 31-30,
  PMI_FRZ : 32-31,
  ReservedBits2 : 64-32;
 } SNB;
 struct
 {
  unsigned long long
  EN_PMI_CORE0 : 1-0,
  EN_PMI_CORE1 : 2-1,
  EN_PMI_CORE2 : 3-2,
  EN_PMI_CORE3 : 4-3,
  ReservedBits1 : 29-4,
  EN_FIXED_CTR0 : 30-29,
  EN_WakeOn_PMI : 31-30,
  PMI_FRZ : 32-31,
  ReservedBits2 : 64-32;
 } SKL;
} UNCORE_GLOBAL_PERF_CONTROL;



typedef union
{
 unsigned long long value;
 struct
 {
  unsigned long long
  EN_CTR0 : 1-0,
  ReservedBits1 : 2-1,
  EN_PMI : 3-2,
  ReservedBits2 : 64-3;
 } NHM;
 struct
 {
  unsigned long long
  ReservedBits1 : 20-0,
  EN_Overflow : 21-20,
  ReservedBits2 : 22-21,
  EN_CTR0 : 23-22,
  ReservedBits3 : 64-23;
 } SNB;
 struct
 {
  unsigned long long
  ReservedBits1 : 20-0,
  EN_Overflow : 21-20,
  ReservedBits2 : 22-21,
  EN_CTR0 : 23-22,
  ReservedBits3 : 64-23;
 } SKL;
 struct
 {
  unsigned long long
  ReservedBits1 : 20-0,
  EN_Overflow : 21-20,
  ReservedBits2 : 22-21,
  EN_CTR0 : 23-22,
  ReservedBits3 : 64-23;
 } HSW_EP;
} UNCORE_FIXED_PERF_CONTROL;

typedef union
{
 unsigned long long value;
 struct {
  unsigned long long
  PU : 4-0,
  ReservedBits1 : 8-4,
  ESU : 13-8,
  ReservedBits2 : 16-13,
  TU : 20-16,
  ReservedBits3 : 64-20;
 };
} RAPL_POWER_UNIT;
# 948 "intelmsr.h"
typedef union
{
 unsigned long long value;
 struct {
  unsigned long long
  VMCS_RevId : 31-0,
  ReservedBits1 : 32-31,
  VMCS_Size : 48-32,
  PhysAddrWidth : 49-48,
  SMM_DualMon : 50-49,
  VMCS_Type : 54-50,
  ReservedBits2 : 64-54;
 };
} VMX_BASIC;


typedef union
{
 unsigned int value;
 struct {
  unsigned int
  BtoB_RdRd : 4-0,
  BtoB_WrRd : 9-4,
  ReservedBits1 : 11-9,
  tRD : 16-11,
  BtoB_RdRd_DR : 17-16,
  ReservedBits2 : 18-17,
  BtoB_WrWr_DR : 20-18,
  BtoB_RdWr : 22-20,
  BtoB_WrRd_DR : 24-22,
  tWTR : 28-24,
  tWR : 32-28;
 };
} P945_MC_DRAM_TIMING_R0;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  tRP : 3-0,
  ReservedBits1 : 4-3,
  tRCD : 7-4,
  ReservedBits2 : 8-7,
  tCL : 10-8,
  tRFC : 16-10,
  tRPALL : 17-16,
  ReservedBits3 : 18-17,
  tRRD : 19-18,
  tRAS : 24-19,
  ReservedBits4 : 28-24,
  tRTPr : 30-28,
  ReservedBits5 : 32-30;
 };
} P945_MC_DRAM_TIMING_R1;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  ReservedBits1 : 8-0,
  ReservedBits2 : 11-8,
  ReservedBits3 : 16-11,
  ReservedBits4 : 18-16,
  ReservedBits5 : 30-18,
  tCKE : 32-30;
 };
} P945_MC_DRAM_TIMING_R2;

typedef union
{
 unsigned char value;
 struct {
  unsigned char
  Zeroed : 2-0,
  Boundary : 7-2,
  DRAM_4GB : 8-7;
 };
} P945_MC_DRAM_RANK_BOUND;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  EvenRank_R0 : 3-0,
  ReservedBits1 : 4-3,
  OddRank_R1 : 7-4,
  ReservedBits2 : 8-7,
  EvenRank_R2 : 11-8,
  ReservedBits3 : 12-11,
  OddRank_R3 : 15-12,
  ReservedBits4 : 16-15;
 };
} P945_MC_DRAM_RANK_ATTRIB;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  Rank0 : 2-0,
  Rank1 : 4-2,
  Rank2 : 6-4,
  Rank3 : 8-6,
  ReservedBits : 16-8;
 };
} P945_MC_DRAM_BANK_ARCH;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  DAMC : 2-0,
  SCS : 3-2,
  ReservedBits1 : 9-3,
  Channel_XOR : 10-9,
  Cha_XOR_Random : 11-10,
  ReservedBits2 : 14-11,
  ReservedBits3 : 16-14,
  SMS : 19-16,
  IC : 20-19,
  IC_SMS_Ctrl : 21-20,
  EMRS : 23-21,
  ReservedBits4 : 24-23,
  ReservedBits5 : 29-24,
  ReservedBits6 : 32-29;
 };
} P945_MC_DCC;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  Rank0 : 2-0,
  Rank1 : 4-2,
  Rank2 : 6-4,
  Rank3 : 8-6,
  ReservedBits : 16-8;
 };
} P945_MC_DRAM_RANK_WIDTH;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  tRP : 3-0,
  ReservedBits1 : 4-3,
  tRCD : 7-4,
  ReservedBits2 : 8-7,
  tCL : 10-8,
  ReservedBits3 : 20-10,
  tRAS : 24-20,
  ReservedBits4 : 32-24;
 };
} P955_MC_DRAM_TIMING_R1;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  BtoB_RdRd : 3-0,
  ReservedBits1 : 5-3,
  BtoB_WrWr : 8-5,
  ReservedBits2 : 10-8,
  BtoB_RdWr : 14-10,
  ReservedBits3 : 15-14,
  BtoB_WrRd_DR : 18-15,
  ReservedBits4 : 20-18,
  tWTR : 24-20,
  ReservedBits5 : 26-24,
  tWR : 31-26,
  ReservedBits6 : 32-31;
 };
} G965_MC_DRAM_TIMING_R0;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  tRP : 3-0,
  ReservedBits1 : 5-3,
  tRCD : 8-5,
  ReservedBits2 : 10-8,
  tRRD : 13-10,
  ReservedBits3 : 15-13,
  tRPALL : 16-15,
  ReservedBits4 : 18-16,
  tRP_DR_SR : 19-18,
  ReservedBits5 : 21-19,
  tRAS : 26-21,
  ReservedBits6 : 28-26,
  tRTPr : 30-28,
  ReservedBits7 : 32-30;
 };
} G965_MC_DRAM_TIMING_R1;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  ReservedBits1 : 6-0,
  tXPDLL : 10-6,
  ReservedBits2 : 12-10,
  tXP : 15-10,
  ReservedBits3 : 17-15,
  tFAW : 22-17,
  ReservedBits4 : 24-22,
  tCKE : 27-24,
  ReservedBits5 : 32-27;
 };
} G965_MC_DRAM_TIMING_R2;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  tCWL : 3-0,
  ReservedBits1 : 13-3,
  tRFC : 21-13,
  ReservedBits2 : 23-21,
  tCL : 26-23,
  tXS : 28-26,
  ReservedBits3 : 32-28;
 };
} G965_MC_DRAM_TIMING_R3;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  Rank0Addr : 9-0,
  ReservedBits1 : 16-9,
  Rank1Addr : 25-16,
  ReservedBits2 : 32-25;
 };
} G965_MC_DRB_0_1;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  EvenRank0 : 3-0,
  ReservedBits1 : 4-3,
  OddRank1 : 7-4,
  ReservedBits2 : 16-7,
  Rank0Bank : 18-16,
  ReservedBits3 : 19-18,
  Rank1Bank : 21-19,
  ReservedBits4 : 32-21;
 };
} G965_MC_DRAM_RANK_ATTRIB;

typedef union
{
 unsigned short value;
 struct {
  unsigned short
  tPCHG : 1-0,
  tRD : 6-2,
  tWR : 11-6,
  tRAS : 16-11;
 };
} P965_MC_CYCTRK_PCHG;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  tRFC : 9-0,
  tRPALL : 13-9,
  tRP : 17-13,
  tRRD : 21-17,
  ACT_Disable : 22-21,
  ACT_Count : 28-22,
  ReservedBits : 32-28;
 };
} P965_MC_CYCTRK_ACT;

typedef union
{
 unsigned short value;
 struct {
  unsigned short
  tRD_WR : 4-0,
  tWR_WR_DR : 8-4,
  tWR_WR_SR : 12-8,
  tRCD_WR : 16-12;
 };
} P965_MC_CYCTRK_WR;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  tRD_RD_DR : 4-0,
  tRD_RD_SR : 8-4,
  tWR_RD : 11-8,
  tWTR : 16-11,
  tRCD_RD : 20-16,
  ReservedBits : 24-20,
  tREF : 32-24;
 };
} P965_MC_CYCTRK_RD;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  ReservedBits1 : 17-0,
  tCL : 20-17,
  MCH_ODT_Latency : 24-20,
  ReservedBits2 : 32-24;
 };
} P965_MC_ODTCTRL;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  SingleDimmPop : 1-0,
  tXSNR : 10-1,
  tXP : 14-10,
  WrODT_Safe : 15-14,
  RdODT_Safe : 16-15,
  EN_PDN : 17-16,
  tCKE_Low : 20-17,
  RankPop0 : 21-20,
  RankPop1 : 22-21,
  RankPop2 : 23-22,
  RankPop3 : 24-23,
  tCKE_High : 27-24,
  SRC_START : 28-27,
  CLK_WrODT_Safe : 30-28,
  CLK_RdODT_Safe : 32-30;
 };
} P965_MC_CKECTRL;


typedef union
{
 unsigned short value;
 struct {
  unsigned short
  tPCHG : 1-0,
  tRD : 6-2,
  tWR : 11-6,
  ReservedBits : 16-11;
 };
} P35_MC_CYCTRK_PCHG;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  tRFC : 9-0,
  tRPALL : 13-9,
  tRP : 17-13,
  tRRD : 21-17,
  ACT_Disable : 22-21,
  ACT_Count : 28-22,
  ReservedBits : 32-28;
 };
} P35_MC_CYCTRK_ACT;

typedef union
{
 unsigned short value;
 struct {
  unsigned short
  tRD_WR : 4-0,
  tWR_WR_DR : 8-4,
  tWR_WR_SR : 12-8,
  tRCD_WR : 16-12;
 };
} P35_MC_CYCTRK_WR;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  tRD_RD_DR : 4-0,
  tRD_RD_SR : 8-4,
  tWR_RD : 12-8,
  tWTR : 17-12,
  tRCD_RD : 21-17,
  ReservedBits : 24-21,
  tREF : 32-24;
 };
} P35_MC_CYCTRK_RD;

typedef union
{
 unsigned short value;
 struct {
  unsigned short
  UnknownBits1 : 8-0,
  tCL : 14-8,
  UnknownBits2 : 16-14;
 };
} P35_MC_UNKNOWN_R0;

typedef union
{
 unsigned short value;
 struct {
  unsigned short
  tRAS : 6-0,
  UnknownBits : 16-6;
 };
} P35_MC_UNKNOWN_R1;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  SingleDimmPop : 1-0,
  tXSNR : 10-1,
  tXP : 14-10,
  ReservedBits1 : 16-14,
  EN_PDN : 17-16,
  tCKE_Low : 20-17,
  RankPop0 : 21-20,
  RankPop1 : 22-21,
  RankPop2 : 23-22,
  RankPop3 : 24-23,
  tCKE_High : 27-24,
  SRC_START : 28-27,
  ReservedBits2 : 32-28;
 };
} P35_MC_CKECTRL;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  FSB_Select : 3-0,
  ReservedBits1 : 4-3,
  RAM_Select : 7-4,
  VHCLK_Polarity : 8-7,
  ReservedBits2 : 14-8,
  EN_DynamicFSB : 15-14,
  ReservedBits3 : 32-15;
 };
} MCH_CLKCFG;


typedef union
{
 unsigned int value;
 struct {
  unsigned int
  BL : 2-0,
  ReservedBits1 : 3-2,
  BT : 4-3,
  tCL : 7-4,
  ReservedBits2 : 8-7,
  DLL : 9-8,
  tWR : 12-9,
  Pchg_PD : 13-12,
  MR0 : 16-13,
  MR1 : 32-16;
 };
} NHM_IMC_MRS_VALUE_0_1;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  ReservedBits1 : 3-0,
  tCWL : 6-3,
  ASR : 7-6,
  SRT : 8-7,
  ReservedBits2 : 9-8,
  ODT_Rtt_Wr : 11-9,
  ReservedBits3 : 16-11,
  RC0 : 20-16,
  RC2 : 24-20,
  MR3 : 32-24;
 };
} NHM_IMC_MRS_VALUE_2_3;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  tsrRdTRd : 1-0,
  tdrRdTRd : 4-1,
  tddRdTRd : 7-4,
  tsrRdTWr : 11-7,
  tdrRdTWr : 15-11,
  tddRdTWr : 19-15,
  tsrWrTRd : 23-19,
  tdrWrTRd : 26-23,
  tddWrTRd : 29-26,
  ReservedBits : 32-29;
 };
} NHM_IMC_RANK_TIMING_A;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  tFAW : 6-0,
  tRRD : 9-6,
  tsrWrTWr : 10-9,
  tdrWrTWr : 13-10,
  tddWrTWr : 16-13,
  B2B : 21-16,
  ReservedBits : 32-21;
 };
} NHM_IMC_RANK_TIMING_B;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  tRP : 4-0,
  tRAS : 9-4,
  tRCD : 13-9,
  tRTPr : 17-13,
  tWTPr : 22-17,
  ReservedBits : 32-22;
 };
} NHM_IMC_BANK_TIMING;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  tRFC : 9-0,
  tREFI_8 : 19-9,
  tTHROT_OPPREF : 30-19,
  ReservedBits : 32-30;
 };
} NHM_IMC_REFRESH_TIMING;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  CLOSED_PAGE : 1-0,
  EN_ECC : 2-1,
  AUTOPRECHARGE : 3-2,
  CHANNELRESET0 : 4-3,
  CHANNELRESET1 : 5-4,
  CHANNELRESET2 : 6-5,
  DIVBY3EN : 7-6,
  INIT_DONE : 8-7,
  CHANNEL0_ACTIVE : 9-8,
  CHANNEL1_ACTIVE : 10-9,
  CHANNEL2_ACTIVE : 11-10,
  ReservedBits : 32-11;
 };
} NHM_IMC_CONTROL;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  CHANNEL0_DISABLE: 1-0,
  CHANNEL1_DISABLE: 2-1,
  CHANNEL2_DISABLE: 3-2,
  ReservedBits : 4-3,
  ECC_ENABLED : 5-4;
 };
} NHM_IMC_STATUS;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  MAXNUMDIMMS : 2-0,
  MAXNUMRANK : 4-2,
  MAXNUMBANK : 6-4,
  MAXNUMROW : 9-6,
  MAXNUMCOL : 11-9,
  ReservedBits : 32-11;
 };
} NHM_IMC_MAX_DOD;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  QCLK_RATIO : 5-0,
  ReservedBits1 : 24-5,
  MAX_RATIO : 29-24,
  ReservedBits2 : 32-29;
 };
} NHM_IMC_CLK_RATIO_STATUS;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  PRIORITY_CNT : 3-0,
  ENABLE_2N_3N : 5-3,
  DIS_ISOC_RBC : 6-5,
  PRE_CAS_THRSHLD : 11-6,
  FLOAT_EN : 12-11,
  CS_FOR_CKE_TRANS: 13-12,
  DDR_CLK_TRISTATE: 14-13,
  ReservedBits : 32-14;
 };
} NHM_IMC_SCHEDULER_PARAMS;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  NUMCOL : 2-0,
  NUMROW : 5-2,
  NUMRANK : 7-5,
  NUMBANK : 9-7,
  DIMMPRESENT : 10-9,
  RANKOFFSET : 13-10,
  ReservedBits : 32-13;
 };
} NHM_IMC_DOD_CHANNEL;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  UCLK : 7-0,
  ReservedBits1 : 8-7,
  MinRatio : 15-8,
  ReservedBits2 : 32-15;
 };
} NHM_CURRENT_UCLK_RATIO;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  QPIFREQSEL : 2-0,
  ReservedBits : 31-2,
  VT_d : 32-31;
 };
} X58_QPI_FREQUENCY;


typedef union
{
 unsigned int value;
 struct {
  unsigned int
  tRCD : 4-0,
  tRP : 8-4,
  tCL : 12-8,
  tCWL : 16-12,
  tRAS : 24-16,
  ReservedBits : 32-24;
 };
} SNB_IMC_TC_DBP;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  tRRD : 4-0,
  tRTPr : 8-4,
  tCKE : 12-8,
  tWTPr : 16-12,
  tFAW : 24-16,
  tWR : 29-24,
  CMD_3ST : 30-29,
  CMD_Stretch : 32-30;
 };
} SNB_IMC_TC_RAP;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  tREFI : 16-0,
  tRFC : 25-16,
  tREFIx9 : 32-25;
 };
} SNB_IMC_TC_RFTP;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  Dimm_A_Size : 8-0,
  Dimm_B_Size : 16-8,
  DAS : 17-16,
  DANOR : 18-17,
  DBNOR : 19-18,
  DAW : 20-19,
  DBW : 21-20,
  RI : 22-21,
  ENH_IM : 23-22,
  ReservedBits1 : 24-23,
  ECC : 26-24,
  ReservedBits2 : 32-26;
 };
} SNB_IMC_MAD_CHANNEL;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  DMFC : 3-0,
  ReservedBits1 : 14-3,
  DDPCD : 15-14,
  ReservedBits2 : 23-15,
  VT_d : 24-23,
  ReservedBits3 : 32-24;
 };
} SNB_CAPID;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  ReservedBits1 : 4-0,
  DMFC : 7-4,
  ReservedBits2 : 17-7,
  ADDGFXCAP : 18-17,
  ADDGFXEN : 19-18,
  ReservedBits3 : 20-19,
  PEGG3_DIS : 21-20,
  PLL_REF100_CFG : 24-21,
  ReservedBits4 : 25-24,
  CACHESZ : 28-25,
  SMTCAP : 29-28,
  ReservedBits5 : 32-29;
 };
} IVB_CAPID;


typedef union
{
 unsigned int value;
 struct {
  unsigned int
  ReservedBits1 : 12-0,
  tsrRdTRd : 15-12,
  tdrRdTRd : 19-15,
  tddRdTRd : 23-19,
  ReservedBits2 : 30-23,
  CMD_Stretch : 32-30;
 };
} HSW_DDR_TIMING;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  tsrWrTRd : 6-0,
  tdrWrTRd : 10-6,
  tddWrTRd : 14-10,
  tsrWrTWr : 17-14,
  tdrWrTWr : 21-17,
  tddWrTWr : 25-21,
  ReservedBits : 32-25;
 };
} HSW_DDR_RANK_TIMING_A;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  ReservedBits1 : 14-0,
  tsrRdTWr : 19-14,
  tdrRdTWr : 24-19,
  tddRdTWr : 29-24,
  ReservedBits2 : 32-29;
 };
} HSW_DDR_RANK_TIMING_B;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  tCL : 5-0,
  tCWL : 10-5,
  ReservedBits : 32-10;
 };
} HSW_DDR_RANK_TIMING;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  tREFI : 16-0,
  tRFC : 25-16,
  tREFIx9 : 32-25;
 };
} HSW_TC_REFRESH_TIMING;


typedef union
{
 unsigned int value;
 struct {
  unsigned int
  tRP : 6-0,
  tRPab_ext : 8-6,
  tRAS : 15-8,
  ReservedBits1 : 16-15,
  tRDPRE : 20-16,
  ReservedBits2 : 24-20,
  tWRPRE : 31-24,
  ReservedBits3 : 32-31;
 };
} SKL_IMC_CR_TC_PRE;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  DRAM_Tech : 2-0,
  CMD_Stretch : 4-2,
  N_to_1_ratio : 7-4,
  ReservedBits : 8-7,
  Addr_Mirroring : 10-8,
  Dimm_x8 : 12-11,
  tCPDED : 15-12,
  LPDDR_2N_CS : 16-15,
  Reset_OnCmd : 20-16,
  Reset_Delay : 23-20,
  CMD_3st : 24-23,
  tCKE : 27-24,
  EN_ODT_Matrix : 28-27,
  ProbelessLowFreq: 29-28,
  tCAL : 32-29;
 };
} SKL_IMC_CR_SC_CFG;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  Read_Duration : 3-0,
  ReservedBits1 : 4-3,
  Read_Delay : 7-4,
  ReservedBits2 : 8-7,
  Write_Duration : 11-8,
  ReservedBits3 : 12-11,
  Write_Delay : 15-12,
  Write_Early : 16-15,
  tCL : 21-16,
  tCWL : 26-21,
  tAONPD : 31-26,
  Always_Rank0 : 32-31;
 };
} SKL_IMC_CR_TC_ODT;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  tREFI : 16-0,
  tRFC : 26-16,
  ReservedBits : 32-26;
 };
} SKL_IMC_REFRESH_TC;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  Dimm_L_Map : 1-0,
  ReservedBits1 : 4-1,
  RI : 5-4,
  ReservedBits2 : 8-5,
  EIM : 9-8,
  ReservedBits3 : 12-9,
  ECC : 14-12,
  ReservedBits4 : 24-14,
  HORI : 25-24,
  ReservedBits5 : 28-25,
  HORI_ADDR : 31-28,
  ReservedBits6 : 32-31;
 };
} SKL_IMC_MAD_CHANNEL;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  Dimm_L_Size : 6-0,
  ReservedBits1 : 8-6,
  DLW : 10-8,
  DLNOR : 11-10,
  DL8Gb : 12-11,
  ReservedBits2 : 16-12,
  Dimm_S_Size : 22-16,
  ReservedBits3 : 24-22,
  DSW : 26-24,
  DSNOR : 27-26,
  DS8Gb : 28-27,
  ReservedBits4 : 32-28;
 };
} SKL_IMC_MAD_DIMM;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  QCLK : 7-0,
  QCLK_REF : 8-7,
  FCLK : 16-8,
  ICLK : 24-16,
  UCLK : 32-24;
 };
} SKL_SA_PLL_RATIOS;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  ReservedBits1 : 12-0,
  PDCD : 13-12,
  X2APIC_EN : 14-13,
  DDPCD : 15-14,
  ReservedBits2 : 23-15,
  VT_d : 24-23,
  ReservedBits3 : 25-24,
  ECCDIS : 26-25,
  ReservedBits4 : 32-26;
 };
} SKL_CAPID_A;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  ReservedBits1 : 2-0,
  LPDDR3_EN : 3-2,
  ReservedBits2 : 4-3,
  DMFC_DDR3 : 7-4,
  ReservedBits3 : 8-7,
  GMM_DIS : 9-8,
  ReservedBits4 : 15-9,
  DMIG3DIS : 16-15,
  ReservedBits5 : 17-16,
  ADDGFXCAP : 18-17,
  ADDGFXEN : 19-18,
  ReservedBits6 : 20-19,
  PEGG3_DIS : 21-20,
  PLL_REF100_CFG : 24-21,
  ReservedBits7 : 25-24,
  CACHESZ : 28-25,
  SMTCAP : 29-28,
  ReservedBits8 : 31-29,
  IMGU_DIS : 32-31;
 };
} SKL_CAPID_B;

typedef union
{
 unsigned int value;
 struct {
  unsigned int
  ReservedBits1 : 14-0,
  DMFC_LPDDR3 : 17-14,
  DMFC_DDR4 : 20-17,
  ReservedBits2 : 32-20;
 };
} SKL_CAPID_C;
# 17 "corefreq-cffi.h" 2
# 1 "coretypes.h" 1
# 9 "coretypes.h"
enum { GenuineIntel,
 Core_Yonah,
 Core_Conroe,
 Core_Kentsfield,
 Core_Conroe_616,
 Core_Yorkfield,
 Core_Dunnington,
 Atom_Bonnell,
 Atom_Silvermont,
 Atom_Lincroft,
 Atom_Clovertrail,
 Atom_Saltwell,
 Silvermont_637,
 Atom_Avoton,
 Atom_Airmont,
 Atom_Goldmont,
 Atom_Sofia,
 Atom_Merrifield,
 Atom_Moorefield,
 Nehalem_Bloomfield,
 Nehalem_Lynnfield,
 Nehalem_MB,
 Nehalem_EX,
 Westmere,
 Westmere_EP,
 Westmere_EX,
 SandyBridge,
 SandyBridge_EP,
 IvyBridge,
 IvyBridge_EP,
 Haswell_DT,
 Haswell_EP,
 Haswell_ULT,
 Haswell_ULX,
 Broadwell,
 Broadwell_D,
 Broadwell_H,
 Broadwell_EP,
 Skylake_UY,
 Skylake_S,
 Skylake_X,
 Xeon_Phi,
 Kabylake,
 Kabylake_UY,
 Cannonlake,
 Geminilake,
 Icelake_UY,
 AMD_Family_0Fh,
 AMD_Family_10h,
 AMD_Family_11h,
 AMD_Family_12h,
 AMD_Family_14h,
 AMD_Family_15h,
 AMD_Family_16h,
 AMD_Family_17h,
 ARCHITECTURES
};

enum SYS_REG {
 RFLAG_TF = 8,
 RFLAG_IF = 9,
 RFLAG_IOPL = 12,
 RFLAG_NT = 14,
 RFLAG_RF = 16,
 RFLAG_VM = 17,
 RFLAG_AC = 18,
 RFLAG_VIF = 19,
 RFLAG_VIP = 20,
 RFLAG_ID = 21,

 CR0_PE = 0,
 CR0_MP = 1,
 CR0_EM = 2,
 CR0_TS = 3,
 CR0_ET = 4,
 CR0_NE = 5,
 CR0_WP = 16,
 CR0_AM = 18,
 CR0_NW = 29,
 CR0_CD = 30,
 CR0_PG = 31,

 CR3_PWT = 3,
 CR3_PCD = 4,

 CR4_VME = 0,
 CR4_PVI = 1,
 CR4_TSD = 2,
 CR4_DE = 3,
 CR4_PSE = 4,
 CR4_PAE = 5,
 CR4_MCE = 6,
 CR4_PGE = 7,
 CR4_PCE = 8,
 CR4_OSFXSR = 9,
 CR4_OSXMMEXCPT = 10,
 CR4_UMIP = 11,
 CR4_VMXE = 13,
 CR4_SMXE = 14,
 CR4_FSGSBASE = 16,
 CR4_PCIDE = 17,
 CR4_OSXSAVE = 18,
 CR4_SMEP = 20,
 CR4_SMAP = 21,
 CR4_PKE = 22,

 EXFCR_LOCK = 0,
 EXFCR_VMX_IN_SMX= 1,
 EXFCR_VMXOUT_SMX= 2,
 EXFCR_SENTER_LEN= 8,
 EXFCR_SENTER_GEN= 15,
 EXFCR_SGX_LCE = 17,
 EXFCR_SGX_GEN = 18,
 EXFCR_LMCE = 20,

 EXFER_SCE = 0,
 EXFER_LME = 8,
 EXFER_LMA = 10,
 EXFER_NXE = 11,
 EXFER_SVME = 12,
 EXFER_LMSLE = 13,
 EXFER_FFXSE = 14
};
# 202 "coretypes.h"
enum RATIO_BOOST {
 RATIO_MIN,
 RATIO_MAX,
 RATIO_ACT,
 RATIO_TDP,
 RATIO_TDP1,
 RATIO_TDP2,
 RATIO_18C,
 RATIO_17C,
 RATIO_16C,
 RATIO_15C,
 RATIO_14C,
 RATIO_13C,
 RATIO_12C,
 RATIO_11C,
 RATIO_10C,
 RATIO_9C,
 RATIO_8C,
 RATIO_7C,
 RATIO_6C,
 RATIO_5C,
 RATIO_4C,
 RATIO_3C,
 RATIO_2C,
 RATIO_1C,
 RATIO_SIZE
};



enum UNCORE_BOOST {
 UNCORE_RATIO_MIN,
 UNCORE_RATIO_MAX,
 UNCORE_RATIO_SIZE
};



enum PWR_DOMAIN {
 DOMAIN_PKG,
 DOMAIN_CORES,
 DOMAIN_UNCORE,
 DOMAIN_RAM,
 DOMAIN_SIZE
};
# 257 "coretypes.h"
enum OFFLINE
{
 HW,
 OS
};

typedef struct
{
 unsigned int Q;
 unsigned long long R;
 unsigned long long Hz;
} CLOCK;





typedef union
{
 signed long long Proc;
 struct {
  unsigned int Core;
  signed int Thread;
 };
} SERVICE_PROC;
# 290 "coretypes.h"
typedef struct
{
 unsigned int func,
   sub,
   reg[4];
} CPUID_STRUCT;

static const CPUID_STRUCT CpuIDforVendor[60]={

 {.func=0x00000001, .sub=0x00000000},

 {.func=0x00000002, .sub=0x00000000},
 {.func=0x00000003, .sub=0x00000000},
 {.func=0x00000004, .sub=0x00000000},
 {.func=0x00000004, .sub=0x00000001},
 {.func=0x00000004, .sub=0x00000002},
 {.func=0x00000004, .sub=0x00000003},

 {.func=0x00000005, .sub=0x00000000},
 {.func=0x00000006, .sub=0x00000000},
 {.func=0x00000007, .sub=0x00000000},

 {.func=0x00000009, .sub=0x00000000},
 {.func=0x0000000a, .sub=0x00000000},

 {.func=0x0000000b, .sub=0x00000000},
 {.func=0x0000000d, .sub=0x00000000},
 {.func=0x0000000d, .sub=0x00000001},

 {.func=0x0000000d, .sub=0x00000002},

 {.func=0x0000000d, .sub=0x0000003e},

 {.func=0x0000000f, .sub=0x00000000},
 {.func=0x0000000f, .sub=0x00000001},
 {.func=0x00000010, .sub=0x00000000},
 {.func=0x00000010, .sub=0x00000001},
 {.func=0x00000010, .sub=0x00000002},
 {.func=0x00000010, .sub=0x00000003},
 {.func=0x00000012, .sub=0x00000000},
 {.func=0x00000012, .sub=0x00000001},
 {.func=0x00000012, .sub=0x00000002},
 {.func=0x00000014, .sub=0x00000000},
 {.func=0x00000014, .sub=0x00000001},
 {.func=0x00000015, .sub=0x00000000},
 {.func=0x00000016, .sub=0x00000000},
 {.func=0x00000017, .sub=0x00000000},
 {.func=0x00000017, .sub=0x00000001},
 {.func=0x00000017, .sub=0x00000002},
 {.func=0x00000017, .sub=0x00000003},

 {.func=0x80000001, .sub=0x00000000},
 {.func=0x80000002, .sub=0x00000000},
 {.func=0x80000003, .sub=0x00000000},
 {.func=0x80000004, .sub=0x00000000},

 {.func=0x80000005, .sub=0x00000000},

 {.func=0x80000006, .sub=0x00000000},
 {.func=0x80000007, .sub=0x00000000},
 {.func=0x80000008, .sub=0x00000000},

 {.func=0x8000000a, .sub=0x00000000},
 {.func=0x80000019, .sub=0x00000000},
 {.func=0x8000001a, .sub=0x00000000},
 {.func=0x8000001b, .sub=0x00000000},
 {.func=0x8000001c, .sub=0x00000000},
 {.func=0x8000001d, .sub=0x00000000},
 {.func=0x8000001d, .sub=0x00000001},
 {.func=0x8000001d, .sub=0x00000002},
 {.func=0x8000001d, .sub=0x00000003},
 {.func=0x8000001e, .sub=0x00000000},

 {.func=0x40000000, .sub=0x00000000},
 {.func=0x40000001, .sub=0x00000000},
 {.func=0x40000002, .sub=0x00000000},
 {.func=0x40000003, .sub=0x00000000},
 {.func=0x40000004, .sub=0x00000000},
 {.func=0x40000005, .sub=0x00000000},
 {.func=0x40000006, .sub=0x00000000},
 {.func=0x00000000, .sub=0x00000000},
};

typedef struct
{
 unsigned int LargestStdFunc,
    LargestExtFunc;
 struct {
  unsigned int CRC;
  char ID[12 + 4];
 } Vendor;
 char Brand[48 + 4];
} CPUID_FUNCTION;

typedef struct
{
  unsigned int LargestStdFunc, BX, CX, DX;
} CPUID_0x00000000;

typedef struct
{
 union
 {
     struct SIGNATURE
     {
  unsigned int
  Stepping : 4-0,
  Model : 8-4,
  Family : 12-8,
  ProcType : 14-12,
  Unused1 : 16-14,
  ExtModel : 20-16,
  ExtFamily : 28-20,
  Unused2 : 32-28;
     } EAX;
  unsigned int Signature;
 };
 struct CPUID_0x00000001_EBX
 {
  unsigned int
  Brand_ID : 8-0,
  CLFSH_Size : 16-8,
  Max_SMT_ID : 24-16,
  Init_APIC_ID : 32-24;
 } EBX;
 struct
 {
  unsigned int
  SSE3 : 1-0,
  PCLMULDQ: 2-1,
  DTES64 : 3-2,
  MONITOR : 4-3,
  DS_CPL : 5-4,
  VMX : 6-5,
  SMX : 7-6,
  EIST : 8-7,
  TM2 : 9-8,
  SSSE3 : 10-9,
  CNXT_ID : 11-10,
  Unused1 : 12-11,
  FMA : 13-12,
  CMPXCH16: 14-13,
  xTPR : 15-14,
  PDCM : 16-15,
  Unused2 : 17-16,
  PCID : 18-17,
  DCA : 19-18,
  SSE41 : 20-19,
  SSE42 : 21-20,
  x2APIC : 22-21,
  MOVBE : 23-22,
  POPCNT : 24-23,
  TSCDEAD : 25-24,
  AES : 26-25,
  XSAVE : 27-26,
  OSXSAVE : 28-27,
  AVX : 29-28,
  F16C : 30-29,
  RDRAND : 31-30,
  Hyperv : 32-31;
 } ECX;
 struct
 {
  unsigned int
  FPU : 1-0,
  VME : 2-1,
  DE : 3-2,
  PSE : 4-3,
  TSC : 5-4,
  MSR : 6-5,
  PAE : 7-6,
  MCE : 8-7,
  CMPXCH8 : 9-8,
  APIC : 10-9,
  Unused1 : 11-10,
  SEP : 12-11,
  MTRR : 13-12,
  PGE : 14-13,
  MCA : 15-14,
  CMOV : 16-15,
  PAT : 17-16,
  PSE36 : 18-17,
  PSN : 19-18,
  CLFSH : 20-19,
  Unused2 : 21-20,
  DS_PEBS : 22-21,
  ACPI : 23-22,
  MMX : 24-23,
  FXSR : 25-24,
  SSE : 26-25,
  SSE2 : 27-26,
  SS : 28-27,
  HTT : 29-28,
  TM1 : 30-29,
  Unused3 : 31-30,
  PBE : 32-31;
 } EDX;
} CPUID_0x00000001;

typedef struct
{
 struct
 {
  unsigned int
  SmallestSize : 16-0,
  ReservedBits : 32-16;
 } EAX;
 struct
 {
  unsigned int
  LargestSize : 16-0,
  ReservedBits : 32-16;
 } EBX;
 struct
 {
  unsigned int
  EMX_MWAIT : 1-0,
  IBE_MWAIT : 2-1,
  ReservedBits : 32-2;
 } ECX;
 struct
 {
  unsigned int
  Num_C0_MWAIT : 4-0,
  Num_C1_MWAIT : 8-4,
  Num_C2_MWAIT : 12-8,
  Num_C3_MWAIT : 16-12,
  Num_C4_MWAIT : 20-16,
  ReservedBits : 32-20;
 } EDX;
} CPUID_0x00000005;

typedef struct THERMAL_POWER_LEAF
{
 struct
 {
  unsigned int
  DTS : 1-0,
  TurboIDA: 2-1,
  ARAT : 3-2,
  Unused1 : 4-3,
  PLN : 5-4,
  ECMD : 6-5,
  PTM : 7-6,
  HWP_Reg : 8-7,
  HWP_Int : 9-8,
  HWP_Act : 10-9,
  HWP_Prf : 11-10,
  HWP_Lvl : 12-11,
  Unused2 : 13-12,
  HDC_Reg : 15-13,
  Unused3 : 32-15;
 } EAX;
 struct
 {
  unsigned int
  Threshld: 4-0,
  Unused1 : 32-4;
 } EBX;
    union
    {
 struct
 {
  unsigned int
  HCF_Cap : 1-0,
  ACNT_Cap: 2-1,
  Unused1 : 3-2,
  SETBH : 4-3,
  Unused2 : 32-4;
 };
 struct
 {
  unsigned int
  EffFreq : 1-0,
  NotUsed : 32-1;
 };
    } ECX;
 struct
 {
  unsigned int
  Unused1 : 32-0;
 } EDX;
} CPUID_0x00000006;

typedef struct
{
 struct
 {
  unsigned int
  MaxSubLeaf : 32-0;
 } EAX;
 struct
 {
  unsigned int
  FSGSBASE : 1-0,
  TSC_ADJUST : 2-1,
  SGX : 3-2,
  BMI1 : 4-3,
  HLE : 5-4,
  AVX2 : 6-5,
  Unused1 : 7-6,
  SMEP : 8-7,
  BMI2 : 9-8,
  FastStrings : 10-9,
  INVPCID : 11-10,
  RTM : 12-11,
  PQM : 13-12,
  FPU_CS_DS : 14-13,
  MPX : 15-14,
  PQE : 16-15,
  Unused2 : 18-16,
  RDSEED : 19-18,
  ADX : 20-19,
  SMAP : 21-20,
  Unused3 : 25-21,
  ProcessorTrace : 26-25,
  Unused4 : 32-26;
 } EBX;
 struct
 {
  unsigned int
  PREFETCHWT1 : 1-0,
  Unused1 : 3-1,
  PKU : 4-3,
  OSPKE : 5-4,
  Unused2 : 32-5;
 } ECX;
  unsigned int
 EDX : 32-0;
} CPUID_0x00000007;

typedef struct
{
 struct
 {
  unsigned int
  Version : 8-0,
  MonCtrs : 16-8,
  MonWidth: 24-16,
  VectorSz: 32-24;
 } EAX;
 struct
 {
  unsigned int
  CoreCycles : 1-0,
  InstrRetired : 2-1,
  RefCycles : 3-2,
  LLC_Ref : 4-3,
  LLC_Misses : 5-4,
  BranchRetired : 6-5,
  BranchMispred : 7-6,
  ReservedBits : 32-7;
 } EBX;
 struct
 {
  unsigned int
  Unused1 : 32-0;
 } ECX;
 struct
 {
  unsigned int
  FixCtrs : 5-0,
  FixWidth: 13-5,
  Unused1 : 32-13;
 } EDX;
} CPUID_0x0000000a;

typedef struct
{
  unsigned int LargestExtFunc, EBX, ECX, EDX;
} CPUID_0x80000000;

typedef struct
{
    union
    {
 struct {
  unsigned int
  LAHFSAHF: 1-0,
  Unused1 : 32-1;
 };
 struct {
  unsigned int

  LahfSahf: 1-0,
  MP_Mode : 2-1,
  SVM : 3-2,
  Ext_APIC: 4-3,
  AltMov : 5-4,
  ABM : 6-5,
  SSE4A : 7-6,
  AlignSSE: 8-7,
  PREFETCH: 9-8,

  OSVW : 10-9,
  IBS : 11-10,
  XOP : 12-11,
  SKINIT : 13-12,
  WDT : 14-13,
  NotUsed1: 15-14,
  LWP : 16-15,
  FMA4 : 17-16,
  TCE : 18-17,
  NotUsed2: 21-18,
  TBM : 22-21,
  TopoExt : 23-22,
  PerfCore: 24-23,
  PerfNB : 25-24,
  NotUsed3: 26-25,
  Data_BP : 27-26,
  PerfTSC : 28-27,
  PerfL2I : 29-28,
  MWaitExt: 30-29,
  NotUsed4: 32-30;
 };
    } ECX;
    union
    {
 struct {
  unsigned int
  Unused1 : 11-0,
  SYSCALL : 12-11,
  Unused2 : 20-12,
  XD_Bit : 21-20,
  Unused3 : 26-21,
  PG_1GB : 27-26,
  RdTSCP : 28-27,
  Unused4 : 29-28,
  IA64 : 30-29,
  Unused5 : 32-30;
 };
 struct {
  unsigned int
  FPU : 1-0,
  VME : 2-1,
  DE : 3-2,
  PSE : 4-3,
  TSC : 5-4,
  MSR : 6-5,
  PAE : 7-6,
  MCE : 8-7,
  CMPXCH8 : 9-8,
  APIC : 10-9,
  NotUsed1: 11-10,
  SEP : 12-11,
  MTRR : 13-12,
  PGE : 14-13,
  MCA : 15-14,
  CMOV : 16-15,
  PAT : 17-16,
  PSE36 : 18-17,
  NotUsed2: 20-18,
  NX : 21-20,
  NotUsed3: 22-21,
  MMX_Ext : 23-22,
  MMX : 24-23,
  FXSR : 25-24,
  FFXSR : 26-25,
  Page1GB : 27-26,
  RDTSCP : 28-27,
  NotUsed4: 29-28,
  LM : 30-29,
  _3DNowEx: 31-30,
  _3DNow : 32-31;
 };
    } EDX;
} CPUID_0x80000001;

typedef struct
{
 struct
 {
  unsigned int
  Unused1 : 32-0;
 } EAX, EBX, ECX;
    union
    {
 struct {
  unsigned int
  Unused1 : 8-0,
  Inv_TSC : 9-8,
  Unused2 : 32-9;
 };
      union
      {
 struct {
  unsigned int
  TS : 1-0,
  FID : 2-1,
  VID : 3-2,
  TTP : 4-3,
  TM : 5-4,
  STC : 6-5,
  _100MHz : 7-6,
  NotUsed : 32-7;
 };
 struct {
  unsigned int
  Fam_0Fh : 7-0,
  HwPstate: 8-7,
  TscInv : 9-8,
  CPB : 10-9,
  EffFrqRO: 11-10,
  ProcFb : 12-11,
  ProcPwr : 13-12,
  Reserved: 32-13;
 };
      };
    } EDX;
} CPUID_0x80000007;

typedef struct
{
 struct {
  unsigned int
  MaxPhysicalAddr : 8-0,
  MaxLinearAddr : 16-8,
  MaxGuestPhysAddr: 24-16,
  Reserved : 32-24;
 } EAX;
 struct
 {
  unsigned int
  CLZERO : 1-0,
  IRPerf : 2-1,
  XSaveErPtr : 3-2,
  Reserved : 32-3;
 } EBX;
 struct {
  unsigned int
  NC : 8-0,
  Reserved1 : 12-8,
  ApicIdCoreIdSize: 16-12,
  PerfTscSize : 18-16,
  Reserved2 : 32-18;
 } ECX;
 struct
 {
  unsigned int
  Reserved : 32-0;
 } EDX;
} CPUID_0x80000008;

typedef struct
{
 struct {
  unsigned int
  ExtApicId : 32-0;
 } EAX;
 struct
 {
  unsigned int
  CoreId : 8-0,
  ThreadsPerCore : 16-8,
  Reserved : 32-16;
 } EBX;
 struct {
  unsigned int
  NodeId : 8-0,
  NodesPerProc : 11-8,
  Reserved : 32-11;
 } ECX;
 struct
 {
  unsigned int
  Reserved : 32-0;
 } EDX;
} CPUID_0x8000001e;

typedef struct
{
 CPUID_FUNCTION Info;

 CPUID_0x00000001 Std;
 CPUID_0x00000005 MWait;
 CPUID_0x00000006 Power;
 CPUID_0x00000007 ExtFeature;
 CPUID_0x0000000a PerfMon;
 CPUID_0x80000001 ExtInfo;
 CPUID_0x80000007 AdvPower;
 CPUID_0x80000008 leaf80000008;

 unsigned int FactoryFreq;

 struct {
  Bit32 InvariantTSC : 8-0,
   HyperThreading : 9-8,
   HTT_Enable : 10-9,
   Ratio_Unlock : 11-10,
   TDP_Unlock : 12-11,
   TDP_Levels : 14-12,
   TDP_Cfg_Lock : 15-14,
   TDP_Cfg_Level : 17-15,
   TurboRatio_Lock : 18-17,
   UnusedBits : 24-18,
   SpecTurboRatio : 32-24;
 };
} FEATURES;
# 1109 "coretypes.h"
typedef struct
{
 struct {
  unsigned int
  tCL,
  tRCD,
  tRP,
  tRAS,
  tRRD,
  tRFC,
  tWR,
  tRTPr,
  tWTPr,
  tFAW,
  B2B,
  tCWL,
  CMD_Rate,
  tsrRdTRd,
  tdrRdTRd,
  tddRdTRd,
  tsrRdTWr,
  tdrRdTWr,
  tddRdTWr,
  tsrWrTRd,
  tdrWrTRd,
  tddWrTRd,
  tsrWrTWr,
  tdrWrTWr,
  tddWrTWr,
  ECC;
 };
} RAM_TIMING;

typedef struct
{
 struct {
  unsigned int Size,
    Rows,
    Cols;
  unsigned short Banks,
    Ranks;
 };
} RAM_GEOMETRY;
# 1166 "coretypes.h"
typedef struct {
 int stateCount;
 struct {
  unsigned int exitLatency;
   int powerUsage;
  unsigned int targetResidency;
   char Name[16];
 } State[10];
 char Name[16],
    Governor[16];
} IDLEDRIVER;





enum SORTBYFIELD {F_STATE, F_RTIME, F_UTIME, F_STIME, F_PID, F_COMM};


typedef struct {
 unsigned long long runtime,
    usertime,
    systime;
 pid_t pid,
    tgid,
    ppid;
 short int state;
 short int wake_cpu;
 char comm[16];
} TASK_MCB;

typedef struct {
 unsigned long totalram,
    sharedram,
    freeram,
    bufferram,
    totalhigh,
    freehigh;
} MEM_MCB;
# 1265 "coretypes.h"
enum PATTERN {
 RESET_CSP,
 ALL_SMT,
 RAND_SMT,
 RR_SMT
};

enum {
 CONIC_ELLIPSOID,
 CONIC_HYPERBOLOID_ONE_SHEET,
 CONIC_HYPERBOLOID_TWO_SHEETS,
 CONIC_ELLIPTICAL_CYLINDER,
 CONIC_HYPERBOLIC_CYLINDER,
 CONIC_TWO_PARALLEL_PLANES,
 CONIC_VARIATIONS
};
# 18 "corefreq-cffi.h" 2
# 1 "corefreq.h" 1
# 9 "corefreq.h"
typedef struct
{
 Bit64 OffLine ;

 CLOCK Clock;

 unsigned int Toggle;

 struct
 {
  CPUID_0x00000000 StdFunc;
  CPUID_0x80000000 ExtFunc;

  unsigned int Microcode;

  struct {
  unsigned short int CfgLock : 1-0,
     IORedir : 2-1,
     Unused : 16-2;
  };
  unsigned short int CStateLimit,
     CStateInclude;
 } Query;

 struct {
  signed int ApicID,
     CoreID,
     ThreadID,
     PackageID;
  struct {
   Bit32 BSP,
     x2APIC;
  } MP;
  struct {
  unsigned int Set,
     Size;
  unsigned short LineSz,
     Part,
     Way;
      struct {
      unsigned short WriteBack: 1-0,
     Inclusive: 2-1,
     _pad16 : 16-2;
      } Feature;
  } Cache[(3 + 1)];
 } Topology;

 struct {
  unsigned int TM1,
     TM2,
     Target,
     Limit[2];
  struct {
   unsigned int ClockMod : 16-0,
     Extended : 32-16;
   } DutyCycle;
  unsigned int PowerPolicy;
 } PowerThermal;

 struct FLIP_FLOP {

  struct
  {
  unsigned long long
     INST;
   struct {
  unsigned long long
    UCC,
    URC;
   } C0;
  unsigned long long
     C3,
     C6,
     C7,
     TSC,
     C1;
  } Delta;

  struct {
   double IPS,
     IPC,
     CPI,
     Turbo,
     C0,
     C3,
     C6,
     C7,
     C1;
  } State;

  struct {
   double Ratio,
     Freq;
  } Relative;

  struct {
  unsigned int Sensor,
     Temp,
     Trip;
  } Thermal;

  struct {
   int VID;
   double Vcore;
  } Voltage;

  struct {
  unsigned int SMI;
   struct {
   unsigned int LOCAL,
     UNKNOWN,
     PCISERR,
     IOCHECK;
   } NMI;
  } Counter;
 } FlipFlop[2];

 struct {
  Bit64 RFLAGS,
     CR0,
     CR3,
     CR4,
     EFCR,
     EFER;
 } SystemRegister;

 CPUID_STRUCT CpuID[60];

 struct SLICE_STRUCT {
  struct
  {
  unsigned long long TSC,
     INST;
  } Delta;

  struct {
  unsigned long long TSC,
     INST;
  } Counter[3];
 } Slice;
} CPU_STRUCT;

typedef struct
{
 volatile unsigned long long Sync;

 FEATURES Features;

 Bit64 PowerNow ;

 struct {
  unsigned long long
    PowerNow : 1-0,
    ODCM : 2-1,
    PowerMgmt : 3-2,
    EIST : 4-3,
    Turbo : 5-4,
    C1E : 6-5,
    C3A : 7-6,
    C1A : 8-7,
    C3U : 9-8,
    C1U : 10-9,
    CC6 : 11-10,
    PC6 : 12-11,
    SMM : 13-12,
    VM : 14-13,
    IOMMU : 15-14,
    _pad64 : 64-15;
 } Technology;

 struct {
  unsigned int Count,
     OnLine;
 } CPU;

 SERVICE_PROC Service;

 unsigned int Boost[RATIO_SIZE],
     PM_version;

 unsigned int Top;

 unsigned int Toggle;

 struct PKG_FLIP_FLOP {
  struct {
  unsigned long long PTSC,
     PC02,
     PC03,
     PC06,
     PC07,
     PC08,
     PC09,
     PC10,
     ACCU[DOMAIN_SIZE];
  } Delta;

  struct {
  unsigned long long FC0;
  } Uncore;
 } FlipFlop[2];

 struct {
  double PC02,
     PC03,
     PC06,
     PC07,
     PC08,
     PC09,
     PC10,
     Energy[DOMAIN_SIZE],
     Power[DOMAIN_SIZE];
 } State;

 struct {
  double Turbo,
     C0,
     C3,
     C6,
     C7,
     C1;
 } Avg;

 struct {
  struct {
   double Watts,
     Joules,
     Times;
  } Unit;
 } Power;

 char Brand[64],
     Architecture[32];
} PROC_STRUCT;

typedef struct
{
 struct {
  signed int Experimental,
    hotplug,
    pci,
    nmi;
 } Registration;

 struct {
  Bit64 Operation ;

  IDLEDRIVER IdleDriver;

  unsigned int tickReset,
    tickStep;

  pid_t trackTask;
  enum SORTBYFIELD sortByField;
  int reverseOrder,
    taskCount;
  TASK_MCB taskList[2329];

  MEM_MCB memInfo;

  struct {
  unsigned short version,
    major,
    minor;
  } kernel;

  char sysname[64],
    release[64],
    version[64],
    machine[64];
 } SysGate;

 struct {
  unsigned int Interval;
  struct timespec pollingWait,
    ringWaiting,
    childWaiting,
    sliceWaiting;
 } Sleep;

 struct {
  struct RING_CTRL {
   unsigned long arg;
   unsigned int cmd;
  } buffer[16];
  unsigned int head, tail;
 } Ring[2];

 char ShmName[16];
 pid_t AppSvr,
     AppCli;

 struct {
  unsigned int Boost[UNCORE_RATIO_SIZE];
     struct
     {
  unsigned long long Speed;
  unsigned int Rate;
     } Bus;

     struct {
  struct {
   RAM_TIMING Timing;
   RAM_GEOMETRY DIMM[4];
  } Channel[4];
  unsigned short SlotCount, ChannelCount;
     } MC[2];

 unsigned long long CtrlSpeed;
 unsigned short CtrlCount;

     struct {
  unsigned char
     Bus_Rate: 2-0,
     BusSpeed: 4-2,
     DDR_Rate: 6-4,
     DDRSpeed: 8-6;
     } Unit;
 } Uncore;

 PROC_STRUCT Proc;
 CPU_STRUCT Cpu[];
} SHM_STRUCT;
# 19 "corefreq-cffi.h" 2
# 1 "corefreqm.h" 1






typedef void (*SLICE_FUNC)(SHM_STRUCT*, unsigned int, unsigned long);

void Slice_NOP(SHM_STRUCT*, unsigned int, unsigned long);

void Slice_Atomic(SHM_STRUCT*, unsigned int, unsigned long);

void Slice_CRC32(SHM_STRUCT*, unsigned int, unsigned long);

void Slice_Conic(SHM_STRUCT*, unsigned int, unsigned long);

void Slice_Turbo(SHM_STRUCT*, unsigned int, unsigned long);

typedef struct {
 struct RING_CTRL ctrl;
  SLICE_FUNC func;
 enum PATTERN pattern;
} RING_SLICE;

extern RING_SLICE order_list[];

typedef void (*CALL_FUNC)(SHM_STRUCT*, unsigned int, SLICE_FUNC, unsigned long);

void CallWith_RDTSCP_RDPMC( SHM_STRUCT*,
    unsigned int,
    SLICE_FUNC,
    unsigned long);

void CallWith_RDTSC_RDPMC( SHM_STRUCT*,
    unsigned int,
    SLICE_FUNC,
    unsigned long);

void CallWith_RDTSCP_No_RDPMC( SHM_STRUCT*,
    unsigned int,
    SLICE_FUNC,
    unsigned long);

void CallWith_RDTSC_No_RDPMC( SHM_STRUCT*,
    unsigned int,
    SLICE_FUNC,
    unsigned long);
# 20 "corefreq-cffi.h" 2
# 1 "corefreq-api.h" 1






typedef struct
{
 struct
 {
  unsigned char Chr[4];
 } AX, BX, CX, DX;
} BRAND;





typedef struct {
 union {
  struct
  {
   unsigned int
   SHRbits : 5-0,
   Unused1 : 32-5;
  };
  unsigned int Register;
 } AX;
 union {
  struct
  {
   unsigned int
   Threads : 16-0,
   Unused1 : 32-16;
  };
  unsigned int Register;
 } BX;
 union {
  struct
  {
   unsigned int
   Level : 8-0,
   Type : 16-8,
   Unused1 : 32-16;
  };
  unsigned int Register;
 } CX;
 union {
  struct
  {
   unsigned int
   x2ApicID: 32-0;
  };
  unsigned int Register;
 } DX;
} CPUID_TOPOLOGY_LEAF;

typedef struct
{
 LOCAL_APIC Base;
 signed int ApicID,
   CoreID,
   ThreadID,
   PackageID;

 struct CACHE_INFO
 {
  union
  {
   struct
   {
    unsigned int
    Type : 5-0,
    Level : 8-5,
    Init : 9-8,
    Assoc : 10-9,
    Unused : 14-10,
    MxThrdID: 26-14,
    MxCoreID: 32-26;
   };
   struct
   {
    unsigned int
    ISize : 8-0,
    IAssoc : 16-8,
    DSize : 24-16,
    DAssoc : 32-24;
   } CPUID_0x80000005_L1Tlb2and4M;
   struct
   {
    unsigned int
    ISize : 12-0,
    IAssoc : 16-12,
    DSize : 28-16,
    DAssoc : 32-28;
   } CPUID_0x80000006_L2ITlb2and4M;
   unsigned int AX;
  };
  union
  {
   struct
   {
    unsigned int
    LineSz : 12-0,
    Part : 22-12,
    Way : 32-22;
   };
   struct
   {
    unsigned int
    ISize : 8-0,
    IAssoc : 16-8,
    DSize : 24-16,
    DAssoc : 32-24;
   } CPUID_0x80000005_L1Tlb4K;
   struct
   {
    unsigned int
    ISize : 12-0,
    IAssoc : 16-12,
    DSize : 28-16,
    DAssoc : 32-28;
   } CPUID_0x80000006_L2Tlb4K;
   unsigned int BX;
  };
  union
  {
   unsigned int Set;
   struct
   {
    unsigned int
    LineSz : 8-0,
    ClPerTag: 16-8,
    Assoc : 24-16,
    Size : 32-24;
   } CPUID_0x80000005_L1D;
   struct
   {
    unsigned int
    LineSz : 8-0,
    ClPerTag: 12-8,
    Assoc : 16-12,
    Size : 32-16;
   } CPUID_0x80000006_L2;
   unsigned int CX;
  };
  union
  {
   struct
   {
    unsigned int
    WrBack : 1-0,
    Inclus : 2-1,
    Direct : 3-2,
    Resrvd : 32-3;
   };
   struct
   {
    unsigned int
    LineSz : 8-0,
    ClPerTag: 16-8,
    Assoc : 24-16,
    Size : 32-24;
   } CPUID_0x80000005_L1I;
   struct
   {
    unsigned int
    LineSz : 8-0,
    ClPerTag: 12-8,
    Assoc : 16-12,
    Reserved: 18-16,
    Size : 32-18;
   } CPUID_0x80000006_L3;
   unsigned int DX;
  };
  unsigned int Size;
 } Cache[(3 + 1)];
} CACHE_TOPOLOGY;
# 237 "corefreq-api.h"
typedef struct
{
 unsigned int Sensor,
    Target;
 struct {
  unsigned int
    TCC_Enable: 1-0,
    TM2_Enable: 2-1,
    TM_Select : 3-2,
    Trip : 4-3,
    Unused : 32-4;
 };
 CLOCK_MODULATION ClockModulation;
 ENERGY_PERF_BIAS PerfEnergyBias;
 MISC_PWR_MGMT PwrManagement;
} POWER_THERMAL;

typedef struct
{
 struct
 {
  unsigned long long V,
     _pad[7];
 } Sync;

 Bit64 OffLine ;

 struct
 {
  unsigned long long INST;
  struct
  {
  unsigned long long
    UCC,
    URC;
  } C0;
  unsigned long long
     C3,
     C6,
     C7,
     TSC;

  unsigned long long C1;

  int VID;
 } Counter[2];

 struct
 {
  unsigned long long
     INST;
  struct
  {
  unsigned long long
    UCC,
    URC;
  } C0;
  unsigned long long
     C3,
     C6,
     C7,
     TSC,
     C1;

  unsigned int SMI;
 } Delta;

 POWER_THERMAL PowerThermal;

 struct
 {
  unsigned int SMI;
  struct {
   unsigned int
     LOCAL,
     UNKNOWN,
     PCISERR,
     IOCHECK;
  } NMI;
 } Interrupt;

 union {
     struct
     {
  CORE_GLOBAL_PERF_CONTROL Core_GlobalPerfControl;
  CORE_FIXED_PERF_CONTROL Core_FixedPerfControl;
     };
     struct
     {
  unsigned long long Core_PerfEventsCtrsControl;
  HWCR Core_HardwareConfiguration;
     };
 } SaveArea;

 struct
 {
  CPUID_0x00000000 StdFunc;
  CPUID_0x80000000 ExtFunc;

  struct {
  unsigned long long
     CfgLock : 1-0,
     IORedir : 2-1,
     Unused : 32-3,
     Microcode:64-32;
  };
  unsigned short int CStateLimit,
     CStateInclude;
 } Query;

 CACHE_TOPOLOGY T;

 struct {
  Bit64 RFLAGS,
     CR0,
     CR3,
     CR4,
     EFER;
  union {
   Bit64 EFCR;
   VM_CR VMCR;

  };
 } SystemRegister;

 unsigned int Bind;

 CLOCK Clock;

 CPUID_STRUCT CpuID[60];
} CORE;

typedef struct
{
 struct {
  union {
   struct {
             P945_MC_DRAM_RANK_BOUND DRB[4];
             P945_MC_DRAM_TIMING_R0 DRT0;
             P945_MC_DRAM_TIMING_R1 DRT1;
             P945_MC_DRAM_TIMING_R2 DRT2;
             P945_MC_DRAM_BANK_ARCH BANK;
             P945_MC_DRAM_RANK_WIDTH WIDTH;
   } P945;
   struct {
             P945_MC_DRAM_RANK_BOUND DRB[4];
             P955_MC_DRAM_TIMING_R1 DRT1;
             P945_MC_DRAM_BANK_ARCH BANK;
             P945_MC_DRAM_RANK_WIDTH WIDTH;
   } P955;
   struct {
             P965_MC_ODTCTRL DRT0;
             P965_MC_CYCTRK_PCHG DRT1;
             P965_MC_CYCTRK_ACT DRT2;
             P965_MC_CYCTRK_WR DRT3;
             P965_MC_CYCTRK_RD DRT4;
   } P965;
   struct {
              G965_MC_DRAM_TIMING_R0 DRT0;
              G965_MC_DRAM_TIMING_R1 DRT1;
              G965_MC_DRAM_TIMING_R2 DRT2;
              G965_MC_DRAM_TIMING_R3 DRT3;
   } G965;
   struct {
             P35_MC_UNKNOWN_R0 DRT0;
             P35_MC_CYCTRK_PCHG DRT1;
             P35_MC_CYCTRK_ACT DRT2;
             P35_MC_CYCTRK_WR DRT3;
             P35_MC_CYCTRK_RD DRT4;
             P35_MC_UNKNOWN_R1 DRT5;
   } P35;
   struct {
    NHM_IMC_MRS_VALUE_0_1 MR0_1;
    NHM_IMC_MRS_VALUE_2_3 MR2_3;
    NHM_IMC_RANK_TIMING_A Rank_A;
    NHM_IMC_RANK_TIMING_B Rank_B;
    NHM_IMC_BANK_TIMING Bank;
    NHM_IMC_REFRESH_TIMING Refresh;
    NHM_IMC_SCHEDULER_PARAMS Params;
   } NHM;
   struct {
              SNB_IMC_TC_DBP DBP;
              SNB_IMC_TC_RAP RAP;
              SNB_IMC_TC_RFTP RFTP;
   } SNB;
   struct {
              HSW_DDR_TIMING Timing;
              HSW_DDR_RANK_TIMING_A Rank_A;
              HSW_DDR_RANK_TIMING_B Rank_B;
              HSW_DDR_RANK_TIMING Rank;
              HSW_TC_REFRESH_TIMING Refresh;
   } HSW;
   struct {
              SKL_IMC_CR_TC_PRE Timing;
              SKL_IMC_CR_SC_CFG Sched;
              SKL_IMC_CR_TC_ODT ODT;
              SKL_IMC_REFRESH_TC Refresh;
   } SKL;
   struct {
            AMD_0F_DRAM_TIMING_LOW DTRL;
   } AMD0F;
  };
  union {
             G965_MC_DRAM_RANK_ATTRIB DRA;
           NHM_IMC_DOD_CHANNEL DOD;
          AMD_0F_DRAM_CS_BASE_ADDR MBA;
  } DIMM[4];
 } Channel[4];

 union {
  struct {
            P945_MC_DCC DCC;
  } P945;
  struct {
            P945_MC_DCC DCC;
  } P955;
  struct {
            P965_MC_CKECTRL CKE0,
      CKE1;
  } P965;
  struct {
             G965_MC_DRB_0_1 DRB0,
               DRB1;
  } G965;
  struct {
            P35_MC_CKECTRL CKE0,
      CKE1;
  } P35;
  struct {
               NHM_IMC_CONTROL CONTROL;
              NHM_IMC_STATUS STATUS;
  } NHM;
  struct {
             SNB_IMC_MAD_CHANNEL MAD0,
                MAD1;
  } SNB;
  struct {
             SKL_IMC_MAD_CHANNEL MADC0,
                MADC1;
             SKL_IMC_MAD_DIMM MADD0,
                MADD1;
  } SKL;
  struct {
           AMD_0F_DRAM_CONFIG_LOW DCRL;
           AMD_0F_DRAM_CONFIG_HIGH DCRH;
  } AMD0F;
 };

 union {
  struct {
           NHM_IMC_MAX_DOD DOD;
  } NHM;
  struct {
           AMD_0F_DRAM_CS_MAPPING CS;
  } AMD0F;
 } MaxDIMMs;

 unsigned short SlotCount, ChannelCount;
} MC_REGISTERS;

typedef union
{
 union {
  struct {
   MCH_CLKCFG ClkCfg;
  };
  struct {
   NHM_IMC_CLK_RATIO_STATUS DimmClock;
   X58_QPI_FREQUENCY QuickPath;
  };
  struct {
   SNB_CAPID SNB_Cap;
   IVB_CAPID IVB_Cap;
  };
  struct {
   SKL_CAPID_A SKL_Cap_A;
   SKL_CAPID_B SKL_Cap_B;
   SKL_CAPID_C SKL_Cap_C;
  };
  struct {
   AMD_0F_HTT_UNIT_ID UnitID;
   AMD_0F_HTT_FREQUENCY LDTi_Freq[3];
  };
  struct {
   unsigned long long IOMMU_CR;
  };
 };
} BUS_REGISTERS;


typedef struct {
  IDLEDRIVER IdleDriver;

  int taskCount;
  TASK_MCB taskList[2329];

  MEM_MCB memInfo;

  unsigned int kernelVersionNumber;

  char sysname[64],
    release[64],
    version[64],
    machine[64];
} SYSGATE;

typedef struct
{
 struct
 {
     unsigned long long PTSC,
    PC02,
    PC03,
    PC06,
    PC07,
    PC08,
    PC09,
    PC10;
   struct {
     unsigned long long FC0;
   } Uncore;

   struct {
     unsigned long long ACCU[DOMAIN_SIZE];
   } Power;
 } Counter[2];

 struct
 {
     unsigned long long PTSC,
    PC02,
    PC03,
    PC06,
    PC07,
    PC08,
    PC09,
    PC10;
   struct {
     unsigned long long FC0;
   } Uncore;

   struct {
     unsigned long long ACCU[DOMAIN_SIZE];
   } Power;
 } Delta;

 struct
 {
  UNCORE_GLOBAL_PERF_CONTROL Uncore_GlobalPerfControl;
  UNCORE_FIXED_PERF_CONTROL Uncore_FixedPerfControl;
 } SaveArea;

 FEATURES Features;

 Bit64 CR_Mask ;
 Bit64 ODCM_Mask ;
 Bit64 PowerMgmt_Mask ;
 Bit64 SpeedStep_Mask ;
 Bit64 TurboBoost_Mask ;
 Bit64 C1E_Mask ;
 Bit64 C3A_Mask ;
 Bit64 C1A_Mask ;
 Bit64 C3U_Mask ;
 Bit64 C1U_Mask ;
 Bit64 CC6_Mask ;
 Bit64 PC6_Mask ;

 Bit64 ODCM ;
 Bit64 PowerMgmt ;
 Bit64 SpeedStep ;
 Bit64 TurboBoost ;
 Bit64 C1E ;
 Bit64 C3A ;
 Bit64 C1A ;
 Bit64 C3U ;
 Bit64 C1U ;
 Bit64 CC6 ;
 Bit64 PC6 ;
 Bit64 SMM ;
 Bit64 VM ;

 unsigned long long thermalFormula,
    voltageFormula,
    powerFormula;

 unsigned int SleepInterval,
    tickReset,
    tickStep;

 struct {
  unsigned int Count,
    OnLine;
 } CPU;

 SERVICE_PROC Service;

 signed int ArchID;
 unsigned int Boost[RATIO_SIZE];

 struct {
  unsigned int Boost[UNCORE_RATIO_SIZE];
  BUS_REGISTERS Bus;
  MC_REGISTERS MC[2];
  unsigned short CtrlCount;
  unsigned short ChipID;
 } Uncore;

 struct {
  RAPL_POWER_UNIT Unit;
 } Power;

 struct {
  struct {
   size_t Size;
   int Order;
  } ReqMem;
  SYSGATE *Gate;
 } OS;

 struct {
  signed int Experimental,
    hotplug,
    pci,
    nmi;
 } Registration;

 char Architecture[32];
} PROC;
# 20 "corefreq-cffi.h" 2
