# 1 "/home/navdeep/Desktop/vlsi_4.0/vlsi_proj/solution1/.autopilot/db/vlsi_eval4.pragma.1.c"
# 1 "/home/navdeep/Desktop/vlsi_4.0/vlsi_proj/solution1/.autopilot/db/vlsi_eval4.pragma.1.c" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 149 "<built-in>" 3
# 1 "<command line>" 1





# 1 "/home/navdeep/Vivado/2018.2/common/technology/autopilot/etc/autopilot_ssdm_op.h" 1
# 300 "/home/navdeep/Vivado/2018.2/common/technology/autopilot/etc/autopilot_ssdm_op.h"
    void _ssdm_op_IfRead() __attribute__ ((nothrow));
    void _ssdm_op_IfWrite() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbRead() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbWrite() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanRead() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanWrite() __attribute__ ((nothrow));


    void _ssdm_StreamRead() __attribute__ ((nothrow));
    void _ssdm_StreamWrite() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbRead() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbWrite() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanRead() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanWrite() __attribute__ ((nothrow));




    void _ssdm_op_MemShiftRead() __attribute__ ((nothrow));

    void _ssdm_op_Wait() __attribute__ ((nothrow));
    void _ssdm_op_Poll() __attribute__ ((nothrow));

    void _ssdm_op_Return() __attribute__ ((nothrow));


    void _ssdm_op_SpecSynModule() __attribute__ ((nothrow));
    void _ssdm_op_SpecTopModule() __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDecl() __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDef() __attribute__ ((nothrow));
    void _ssdm_op_SpecPort() __attribute__ ((nothrow));
    void _ssdm_op_SpecConnection() __attribute__ ((nothrow));
    void _ssdm_op_SpecChannel() __attribute__ ((nothrow));
    void _ssdm_op_SpecSensitive() __attribute__ ((nothrow));
    void _ssdm_op_SpecModuleInst() __attribute__ ((nothrow));
    void _ssdm_op_SpecPortMap() __attribute__ ((nothrow));

    void _ssdm_op_SpecReset() __attribute__ ((nothrow));

    void _ssdm_op_SpecPlatform() __attribute__ ((nothrow));
    void _ssdm_op_SpecClockDomain() __attribute__ ((nothrow));
    void _ssdm_op_SpecPowerDomain() __attribute__ ((nothrow));

    int _ssdm_op_SpecRegionBegin() __attribute__ ((nothrow));
    int _ssdm_op_SpecRegionEnd() __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopName() __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopTripCount() __attribute__ ((nothrow));

    int _ssdm_op_SpecStateBegin() __attribute__ ((nothrow));
    int _ssdm_op_SpecStateEnd() __attribute__ ((nothrow));

    void _ssdm_op_SpecInterface() __attribute__ ((nothrow));

    void _ssdm_op_SpecPipeline() __attribute__ ((nothrow));
    void _ssdm_op_SpecDataflowPipeline() __attribute__ ((nothrow));


    void _ssdm_op_SpecLatency() __attribute__ ((nothrow));
    void _ssdm_op_SpecParallel() __attribute__ ((nothrow));
    void _ssdm_op_SpecProtocol() __attribute__ ((nothrow));
    void _ssdm_op_SpecOccurrence() __attribute__ ((nothrow));

    void _ssdm_op_SpecResource() __attribute__ ((nothrow));
    void _ssdm_op_SpecResourceLimit() __attribute__ ((nothrow));
    void _ssdm_op_SpecCHCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecFUCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecIFCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecIPCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecKeepValue() __attribute__ ((nothrow));
    void _ssdm_op_SpecMemCore() __attribute__ ((nothrow));

    void _ssdm_op_SpecExt() __attribute__ ((nothrow));




    void _ssdm_SpecArrayDimSize() __attribute__ ((nothrow));

    void _ssdm_RegionBegin() __attribute__ ((nothrow));
    void _ssdm_RegionEnd() __attribute__ ((nothrow));

    void _ssdm_Unroll() __attribute__ ((nothrow));
    void _ssdm_UnrollRegion() __attribute__ ((nothrow));

    void _ssdm_InlineAll() __attribute__ ((nothrow));
    void _ssdm_InlineLoop() __attribute__ ((nothrow));
    void _ssdm_Inline() __attribute__ ((nothrow));
    void _ssdm_InlineSelf() __attribute__ ((nothrow));
    void _ssdm_InlineRegion() __attribute__ ((nothrow));

    void _ssdm_SpecArrayMap() __attribute__ ((nothrow));
    void _ssdm_SpecArrayPartition() __attribute__ ((nothrow));
    void _ssdm_SpecArrayReshape() __attribute__ ((nothrow));

    void _ssdm_SpecStream() __attribute__ ((nothrow));

    void _ssdm_SpecExpr() __attribute__ ((nothrow));
    void _ssdm_SpecExprBalance() __attribute__ ((nothrow));

    void _ssdm_SpecDependence() __attribute__ ((nothrow));

    void _ssdm_SpecLoopMerge() __attribute__ ((nothrow));
    void _ssdm_SpecLoopFlatten() __attribute__ ((nothrow));
    void _ssdm_SpecLoopRewind() __attribute__ ((nothrow));

    void _ssdm_SpecFuncInstantiation() __attribute__ ((nothrow));
    void _ssdm_SpecFuncBuffer() __attribute__ ((nothrow));
    void _ssdm_SpecFuncExtract() __attribute__ ((nothrow));
    void _ssdm_SpecConstant() __attribute__ ((nothrow));

    void _ssdm_DataPack() __attribute__ ((nothrow));
    void _ssdm_SpecDataPack() __attribute__ ((nothrow));

    void _ssdm_op_SpecBitsMap() __attribute__ ((nothrow));
    void _ssdm_op_SpecLicense() __attribute__ ((nothrow));
# 7 "<command line>" 2
# 1 "<built-in>" 2
# 1 "/home/navdeep/Desktop/vlsi_4.0/vlsi_proj/solution1/.autopilot/db/vlsi_eval4.pragma.1.c" 2
# 1 "vlsi_eval4.c"
# 1 "vlsi_eval4.c" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 149 "<built-in>" 3
# 1 "<command line>" 1





# 1 "/home/navdeep/Vivado/2018.2/common/technology/autopilot/etc/autopilot_ssdm_op.h" 1
# 300 "/home/navdeep/Vivado/2018.2/common/technology/autopilot/etc/autopilot_ssdm_op.h"
 void _ssdm_op_IfRead() __attribute__ ((nothrow));
    void _ssdm_op_IfWrite() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbRead() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbWrite() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanRead() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanWrite() __attribute__ ((nothrow));


    void _ssdm_StreamRead() __attribute__ ((nothrow));
    void _ssdm_StreamWrite() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbRead() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbWrite() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanRead() __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanWrite() __attribute__ ((nothrow));




    void _ssdm_op_MemShiftRead() __attribute__ ((nothrow));

    void _ssdm_op_Wait() __attribute__ ((nothrow));
    void _ssdm_op_Poll() __attribute__ ((nothrow));

    void _ssdm_op_Return() __attribute__ ((nothrow));


    void _ssdm_op_SpecSynModule() __attribute__ ((nothrow));
    void _ssdm_op_SpecTopModule() __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDecl() __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDef() __attribute__ ((nothrow));
    void _ssdm_op_SpecPort() __attribute__ ((nothrow));
    void _ssdm_op_SpecConnection() __attribute__ ((nothrow));
    void _ssdm_op_SpecChannel() __attribute__ ((nothrow));
    void _ssdm_op_SpecSensitive() __attribute__ ((nothrow));
    void _ssdm_op_SpecModuleInst() __attribute__ ((nothrow));
    void _ssdm_op_SpecPortMap() __attribute__ ((nothrow));

    void _ssdm_op_SpecReset() __attribute__ ((nothrow));

    void _ssdm_op_SpecPlatform() __attribute__ ((nothrow));
    void _ssdm_op_SpecClockDomain() __attribute__ ((nothrow));
    void _ssdm_op_SpecPowerDomain() __attribute__ ((nothrow));

    int _ssdm_op_SpecRegionBegin() __attribute__ ((nothrow));
    int _ssdm_op_SpecRegionEnd() __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopName() __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopTripCount() __attribute__ ((nothrow));

    int _ssdm_op_SpecStateBegin() __attribute__ ((nothrow));
    int _ssdm_op_SpecStateEnd() __attribute__ ((nothrow));

    void _ssdm_op_SpecInterface() __attribute__ ((nothrow));

    void _ssdm_op_SpecPipeline() __attribute__ ((nothrow));
    void _ssdm_op_SpecDataflowPipeline() __attribute__ ((nothrow));


    void _ssdm_op_SpecLatency() __attribute__ ((nothrow));
    void _ssdm_op_SpecParallel() __attribute__ ((nothrow));
    void _ssdm_op_SpecProtocol() __attribute__ ((nothrow));
    void _ssdm_op_SpecOccurrence() __attribute__ ((nothrow));

    void _ssdm_op_SpecResource() __attribute__ ((nothrow));
    void _ssdm_op_SpecResourceLimit() __attribute__ ((nothrow));
    void _ssdm_op_SpecCHCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecFUCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecIFCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecIPCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecKeepValue() __attribute__ ((nothrow));
    void _ssdm_op_SpecMemCore() __attribute__ ((nothrow));

    void _ssdm_op_SpecExt() __attribute__ ((nothrow));




    void _ssdm_SpecArrayDimSize() __attribute__ ((nothrow));

    void _ssdm_RegionBegin() __attribute__ ((nothrow));
    void _ssdm_RegionEnd() __attribute__ ((nothrow));

    void _ssdm_Unroll() __attribute__ ((nothrow));
    void _ssdm_UnrollRegion() __attribute__ ((nothrow));

    void _ssdm_InlineAll() __attribute__ ((nothrow));
    void _ssdm_InlineLoop() __attribute__ ((nothrow));
    void _ssdm_Inline() __attribute__ ((nothrow));
    void _ssdm_InlineSelf() __attribute__ ((nothrow));
    void _ssdm_InlineRegion() __attribute__ ((nothrow));

    void _ssdm_SpecArrayMap() __attribute__ ((nothrow));
    void _ssdm_SpecArrayPartition() __attribute__ ((nothrow));
    void _ssdm_SpecArrayReshape() __attribute__ ((nothrow));

    void _ssdm_SpecStream() __attribute__ ((nothrow));

    void _ssdm_SpecExpr() __attribute__ ((nothrow));
    void _ssdm_SpecExprBalance() __attribute__ ((nothrow));

    void _ssdm_SpecDependence() __attribute__ ((nothrow));

    void _ssdm_SpecLoopMerge() __attribute__ ((nothrow));
    void _ssdm_SpecLoopFlatten() __attribute__ ((nothrow));
    void _ssdm_SpecLoopRewind() __attribute__ ((nothrow));

    void _ssdm_SpecFuncInstantiation() __attribute__ ((nothrow));
    void _ssdm_SpecFuncBuffer() __attribute__ ((nothrow));
    void _ssdm_SpecFuncExtract() __attribute__ ((nothrow));
    void _ssdm_SpecConstant() __attribute__ ((nothrow));

    void _ssdm_DataPack() __attribute__ ((nothrow));
    void _ssdm_SpecDataPack() __attribute__ ((nothrow));

    void _ssdm_op_SpecBitsMap() __attribute__ ((nothrow));
    void _ssdm_op_SpecLicense() __attribute__ ((nothrow));
# 7 "<command line>" 2
# 1 "<built-in>" 2
# 1 "vlsi_eval4.c" 2
# 1 "/usr/include/math.h" 1 3 4
# 27 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 392 "/usr/include/features.h" 3 4
# 1 "/usr/include/features-time64.h" 1 3 4
# 20 "/usr/include/features-time64.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 21 "/usr/include/features-time64.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 1 3 4
# 19 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 20 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 2 3 4
# 22 "/usr/include/features-time64.h" 2 3 4
# 393 "/usr/include/features.h" 2 3 4
# 464 "/usr/include/features.h" 3 4
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 465 "/usr/include/features.h" 2 3 4
# 486 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 559 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 560 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 561 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 487 "/usr/include/features.h" 2 3 4
# 510 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 511 "/usr/include/features.h" 2 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 2 3 4
# 28 "/usr/include/math.h" 2 3 4
# 37 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 1 3 4
# 19 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 20 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 2 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


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






typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;



typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 141 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 142 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/time64.h" 1 3 4
# 143 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


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
typedef long int __suseconds64_t;

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
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 38 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 2 3 4
# 41 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 1 3 4
# 119 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 2 3 4
# 214 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
typedef float _Float32;
# 251 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
typedef double _Float64;
# 268 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
typedef double _Float32x;
# 285 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
typedef long double _Float64x;
# 120 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 2 3 4
# 44 "/usr/include/math.h" 2 3 4
# 152 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/flt-eval-method.h" 1 3 4
# 153 "/usr/include/math.h" 2 3 4
# 163 "/usr/include/math.h" 3 4
typedef float float_t;
typedef double double_t;
# 204 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/fp-logb.h" 1 3 4
# 205 "/usr/include/math.h" 2 3 4
# 247 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/fp-fast.h" 1 3 4
# 248 "/usr/include/math.h" 2 3 4
# 312 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 1 3 4
# 20 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 3 4
extern int __fpclassify (double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));


extern int __signbit (double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));



extern int __isinf (double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));


extern int __finite (double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));


extern int __isnan (double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));


extern int __iseqsig (double __x, double __y) __attribute__ ((__nothrow__ ));


extern int __issignaling (double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
# 313 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double acos (double __x) __attribute__ ((__nothrow__ )); extern double __acos (double __x) __attribute__ ((__nothrow__ ));

extern double asin (double __x) __attribute__ ((__nothrow__ )); extern double __asin (double __x) __attribute__ ((__nothrow__ ));

extern double atan (double __x) __attribute__ ((__nothrow__ )); extern double __atan (double __x) __attribute__ ((__nothrow__ ));

extern double atan2 (double __y, double __x) __attribute__ ((__nothrow__ )); extern double __atan2 (double __y, double __x) __attribute__ ((__nothrow__ ));


extern double cos (double __x) __attribute__ ((__nothrow__ )); extern double __cos (double __x) __attribute__ ((__nothrow__ ));

extern double sin (double __x) __attribute__ ((__nothrow__ )); extern double __sin (double __x) __attribute__ ((__nothrow__ ));

extern double tan (double __x) __attribute__ ((__nothrow__ )); extern double __tan (double __x) __attribute__ ((__nothrow__ ));




extern double cosh (double __x) __attribute__ ((__nothrow__ )); extern double __cosh (double __x) __attribute__ ((__nothrow__ ));

extern double sinh (double __x) __attribute__ ((__nothrow__ )); extern double __sinh (double __x) __attribute__ ((__nothrow__ ));

extern double tanh (double __x) __attribute__ ((__nothrow__ )); extern double __tanh (double __x) __attribute__ ((__nothrow__ ));
# 85 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double acosh (double __x) __attribute__ ((__nothrow__ )); extern double __acosh (double __x) __attribute__ ((__nothrow__ ));

extern double asinh (double __x) __attribute__ ((__nothrow__ )); extern double __asinh (double __x) __attribute__ ((__nothrow__ ));

extern double atanh (double __x) __attribute__ ((__nothrow__ )); extern double __atanh (double __x) __attribute__ ((__nothrow__ ));





extern double exp (double __x) __attribute__ ((__nothrow__ )); extern double __exp (double __x) __attribute__ ((__nothrow__ ));


extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ )); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ ));


extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ )); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ ));


extern double log (double __x) __attribute__ ((__nothrow__ )); extern double __log (double __x) __attribute__ ((__nothrow__ ));


extern double log10 (double __x) __attribute__ ((__nothrow__ )); extern double __log10 (double __x) __attribute__ ((__nothrow__ ));


extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__ )); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
# 119 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double expm1 (double __x) __attribute__ ((__nothrow__ )); extern double __expm1 (double __x) __attribute__ ((__nothrow__ ));


extern double log1p (double __x) __attribute__ ((__nothrow__ )); extern double __log1p (double __x) __attribute__ ((__nothrow__ ));


extern double logb (double __x) __attribute__ ((__nothrow__ )); extern double __logb (double __x) __attribute__ ((__nothrow__ ));




extern double exp2 (double __x) __attribute__ ((__nothrow__ )); extern double __exp2 (double __x) __attribute__ ((__nothrow__ ));


extern double log2 (double __x) __attribute__ ((__nothrow__ )); extern double __log2 (double __x) __attribute__ ((__nothrow__ ));






extern double pow (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __pow (double __x, double __y) __attribute__ ((__nothrow__ ));


extern double sqrt (double __x) __attribute__ ((__nothrow__ )); extern double __sqrt (double __x) __attribute__ ((__nothrow__ ));



extern double hypot (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __hypot (double __x, double __y) __attribute__ ((__nothrow__ ));




extern double cbrt (double __x) __attribute__ ((__nothrow__ )); extern double __cbrt (double __x) __attribute__ ((__nothrow__ ));






extern double ceil (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __ceil (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern double fabs (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __fabs (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern double floor (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __floor (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern double fmod (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __fmod (double __x, double __y) __attribute__ ((__nothrow__ ));
# 177 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int isinf (double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));




extern int finite (double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));


extern double drem (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __drem (double __x, double __y) __attribute__ ((__nothrow__ ));



extern double significand (double __x) __attribute__ ((__nothrow__ )); extern double __significand (double __x) __attribute__ ((__nothrow__ ));






extern double copysign (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));




extern double nan (const char *__tagb) __attribute__ ((__nothrow__ )); extern double __nan (const char *__tagb) __attribute__ ((__nothrow__ ));
# 213 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int isnan (double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));





extern double j0 (double) __attribute__ ((__nothrow__ )); extern double __j0 (double) __attribute__ ((__nothrow__ ));
extern double j1 (double) __attribute__ ((__nothrow__ )); extern double __j1 (double) __attribute__ ((__nothrow__ ));
extern double jn (int, double) __attribute__ ((__nothrow__ )); extern double __jn (int, double) __attribute__ ((__nothrow__ ));
extern double y0 (double) __attribute__ ((__nothrow__ )); extern double __y0 (double) __attribute__ ((__nothrow__ ));
extern double y1 (double) __attribute__ ((__nothrow__ )); extern double __y1 (double) __attribute__ ((__nothrow__ ));
extern double yn (int, double) __attribute__ ((__nothrow__ )); extern double __yn (int, double) __attribute__ ((__nothrow__ ));





extern double erf (double) __attribute__ ((__nothrow__ )); extern double __erf (double) __attribute__ ((__nothrow__ ));
extern double erfc (double) __attribute__ ((__nothrow__ )); extern double __erfc (double) __attribute__ ((__nothrow__ ));
extern double lgamma (double) __attribute__ ((__nothrow__ )); extern double __lgamma (double) __attribute__ ((__nothrow__ ));




extern double tgamma (double) __attribute__ ((__nothrow__ )); extern double __tgamma (double) __attribute__ ((__nothrow__ ));





extern double gamma (double) __attribute__ ((__nothrow__ )); extern double __gamma (double) __attribute__ ((__nothrow__ ));







extern double lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ )); extern double __lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ ));






extern double rint (double __x) __attribute__ ((__nothrow__ )); extern double __rint (double __x) __attribute__ ((__nothrow__ ));


extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__ ));

extern double nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ )); extern double __nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ ));
# 275 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double remainder (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__ ));



extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__ )); extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__ ));



extern int ilogb (double __x) __attribute__ ((__nothrow__ )); extern int __ilogb (double __x) __attribute__ ((__nothrow__ ));
# 293 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double scalbln (double __x, long int __n) __attribute__ ((__nothrow__ )); extern double __scalbln (double __x, long int __n) __attribute__ ((__nothrow__ ));



extern double nearbyint (double __x) __attribute__ ((__nothrow__ )); extern double __nearbyint (double __x) __attribute__ ((__nothrow__ ));



extern double round (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __round (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));



extern double trunc (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __trunc (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));




extern double remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ )); extern double __remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ ));






extern long int lrint (double __x) __attribute__ ((__nothrow__ )); extern long int __lrint (double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llrint (double __x) __attribute__ ((__nothrow__ )); extern long long int __llrint (double __x) __attribute__ ((__nothrow__ ));



extern long int lround (double __x) __attribute__ ((__nothrow__ )); extern long int __lround (double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llround (double __x) __attribute__ ((__nothrow__ )); extern long long int __llround (double __x) __attribute__ ((__nothrow__ ));



extern double fdim (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __fdim (double __x, double __y) __attribute__ ((__nothrow__ ));



extern double fmax (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __fmax (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern double fmin (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __fmin (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));



extern double fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ )); extern double __fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ ));
# 435 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double scalb (double __x, double __n) __attribute__ ((__nothrow__ )); extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__ ));
# 314 "/usr/include/math.h" 2 3 4
# 329 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 1 3 4
# 20 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 3 4
extern int __fpclassifyf (float __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));


extern int __signbitf (float __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));



extern int __isinff (float __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));


extern int __finitef (float __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));


extern int __isnanf (float __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));


extern int __iseqsigf (float __x, float __y) __attribute__ ((__nothrow__ ));


extern int __issignalingf (float __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
# 330 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float acosf (float __x) __attribute__ ((__nothrow__ )); extern float __acosf (float __x) __attribute__ ((__nothrow__ ));

extern float asinf (float __x) __attribute__ ((__nothrow__ )); extern float __asinf (float __x) __attribute__ ((__nothrow__ ));

extern float atanf (float __x) __attribute__ ((__nothrow__ )); extern float __atanf (float __x) __attribute__ ((__nothrow__ ));

extern float atan2f (float __y, float __x) __attribute__ ((__nothrow__ )); extern float __atan2f (float __y, float __x) __attribute__ ((__nothrow__ ));


extern float cosf (float __x) __attribute__ ((__nothrow__ )); extern float __cosf (float __x) __attribute__ ((__nothrow__ ));

extern float sinf (float __x) __attribute__ ((__nothrow__ )); extern float __sinf (float __x) __attribute__ ((__nothrow__ ));

extern float tanf (float __x) __attribute__ ((__nothrow__ )); extern float __tanf (float __x) __attribute__ ((__nothrow__ ));




extern float coshf (float __x) __attribute__ ((__nothrow__ )); extern float __coshf (float __x) __attribute__ ((__nothrow__ ));

extern float sinhf (float __x) __attribute__ ((__nothrow__ )); extern float __sinhf (float __x) __attribute__ ((__nothrow__ ));

extern float tanhf (float __x) __attribute__ ((__nothrow__ )); extern float __tanhf (float __x) __attribute__ ((__nothrow__ ));
# 85 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float acoshf (float __x) __attribute__ ((__nothrow__ )); extern float __acoshf (float __x) __attribute__ ((__nothrow__ ));

extern float asinhf (float __x) __attribute__ ((__nothrow__ )); extern float __asinhf (float __x) __attribute__ ((__nothrow__ ));

extern float atanhf (float __x) __attribute__ ((__nothrow__ )); extern float __atanhf (float __x) __attribute__ ((__nothrow__ ));





extern float expf (float __x) __attribute__ ((__nothrow__ )); extern float __expf (float __x) __attribute__ ((__nothrow__ ));


extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ )); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ ));


extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ )); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ ));


extern float logf (float __x) __attribute__ ((__nothrow__ )); extern float __logf (float __x) __attribute__ ((__nothrow__ ));


extern float log10f (float __x) __attribute__ ((__nothrow__ )); extern float __log10f (float __x) __attribute__ ((__nothrow__ ));


extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__ )); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
# 119 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float expm1f (float __x) __attribute__ ((__nothrow__ )); extern float __expm1f (float __x) __attribute__ ((__nothrow__ ));


extern float log1pf (float __x) __attribute__ ((__nothrow__ )); extern float __log1pf (float __x) __attribute__ ((__nothrow__ ));


extern float logbf (float __x) __attribute__ ((__nothrow__ )); extern float __logbf (float __x) __attribute__ ((__nothrow__ ));




extern float exp2f (float __x) __attribute__ ((__nothrow__ )); extern float __exp2f (float __x) __attribute__ ((__nothrow__ ));


extern float log2f (float __x) __attribute__ ((__nothrow__ )); extern float __log2f (float __x) __attribute__ ((__nothrow__ ));






extern float powf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __powf (float __x, float __y) __attribute__ ((__nothrow__ ));


extern float sqrtf (float __x) __attribute__ ((__nothrow__ )); extern float __sqrtf (float __x) __attribute__ ((__nothrow__ ));



extern float hypotf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __hypotf (float __x, float __y) __attribute__ ((__nothrow__ ));




extern float cbrtf (float __x) __attribute__ ((__nothrow__ )); extern float __cbrtf (float __x) __attribute__ ((__nothrow__ ));






extern float ceilf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __ceilf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern float fabsf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __fabsf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern float floorf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __floorf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern float fmodf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __fmodf (float __x, float __y) __attribute__ ((__nothrow__ ));
# 177 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int isinff (float __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));




extern int finitef (float __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));


extern float dremf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __dremf (float __x, float __y) __attribute__ ((__nothrow__ ));



extern float significandf (float __x) __attribute__ ((__nothrow__ )); extern float __significandf (float __x) __attribute__ ((__nothrow__ ));






extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));




extern float nanf (const char *__tagb) __attribute__ ((__nothrow__ )); extern float __nanf (const char *__tagb) __attribute__ ((__nothrow__ ));
# 213 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int isnanf (float __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));





extern float j0f (float) __attribute__ ((__nothrow__ )); extern float __j0f (float) __attribute__ ((__nothrow__ ));
extern float j1f (float) __attribute__ ((__nothrow__ )); extern float __j1f (float) __attribute__ ((__nothrow__ ));
extern float jnf (int, float) __attribute__ ((__nothrow__ )); extern float __jnf (int, float) __attribute__ ((__nothrow__ ));
extern float y0f (float) __attribute__ ((__nothrow__ )); extern float __y0f (float) __attribute__ ((__nothrow__ ));
extern float y1f (float) __attribute__ ((__nothrow__ )); extern float __y1f (float) __attribute__ ((__nothrow__ ));
extern float ynf (int, float) __attribute__ ((__nothrow__ )); extern float __ynf (int, float) __attribute__ ((__nothrow__ ));





extern float erff (float) __attribute__ ((__nothrow__ )); extern float __erff (float) __attribute__ ((__nothrow__ ));
extern float erfcf (float) __attribute__ ((__nothrow__ )); extern float __erfcf (float) __attribute__ ((__nothrow__ ));
extern float lgammaf (float) __attribute__ ((__nothrow__ )); extern float __lgammaf (float) __attribute__ ((__nothrow__ ));




extern float tgammaf (float) __attribute__ ((__nothrow__ )); extern float __tgammaf (float) __attribute__ ((__nothrow__ ));





extern float gammaf (float) __attribute__ ((__nothrow__ )); extern float __gammaf (float) __attribute__ ((__nothrow__ ));







extern float lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ )); extern float __lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ ));






extern float rintf (float __x) __attribute__ ((__nothrow__ )); extern float __rintf (float __x) __attribute__ ((__nothrow__ ));


extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__ ));

extern float nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ )); extern float __nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ ));
# 275 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__ ));



extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__ )); extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__ ));



extern int ilogbf (float __x) __attribute__ ((__nothrow__ )); extern int __ilogbf (float __x) __attribute__ ((__nothrow__ ));
# 293 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ )); extern float __scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ ));



extern float nearbyintf (float __x) __attribute__ ((__nothrow__ )); extern float __nearbyintf (float __x) __attribute__ ((__nothrow__ ));



extern float roundf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __roundf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));



extern float truncf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __truncf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));




extern float remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ )); extern float __remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ ));






extern long int lrintf (float __x) __attribute__ ((__nothrow__ )); extern long int __lrintf (float __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llrintf (float __x) __attribute__ ((__nothrow__ )); extern long long int __llrintf (float __x) __attribute__ ((__nothrow__ ));



extern long int lroundf (float __x) __attribute__ ((__nothrow__ )); extern long int __lroundf (float __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llroundf (float __x) __attribute__ ((__nothrow__ )); extern long long int __llroundf (float __x) __attribute__ ((__nothrow__ ));



extern float fdimf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __fdimf (float __x, float __y) __attribute__ ((__nothrow__ ));



extern float fmaxf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern float fminf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __fminf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));



extern float fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ )); extern float __fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ ));
# 435 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__ )); extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__ ));
# 331 "/usr/include/math.h" 2 3 4
# 398 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 1 3 4
# 20 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 3 4
extern int __fpclassifyl (long double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));


extern int __signbitl (long double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));



extern int __isinfl (long double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));


extern int __finitel (long double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));


extern int __isnanl (long double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));


extern int __iseqsigl (long double __x, long double __y) __attribute__ ((__nothrow__ ));


extern int __issignalingl (long double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
# 399 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double acosl (long double __x) __attribute__ ((__nothrow__ )); extern long double __acosl (long double __x) __attribute__ ((__nothrow__ ));

extern long double asinl (long double __x) __attribute__ ((__nothrow__ )); extern long double __asinl (long double __x) __attribute__ ((__nothrow__ ));

extern long double atanl (long double __x) __attribute__ ((__nothrow__ )); extern long double __atanl (long double __x) __attribute__ ((__nothrow__ ));

extern long double atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ )); extern long double __atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ ));


extern long double cosl (long double __x) __attribute__ ((__nothrow__ )); extern long double __cosl (long double __x) __attribute__ ((__nothrow__ ));

extern long double sinl (long double __x) __attribute__ ((__nothrow__ )); extern long double __sinl (long double __x) __attribute__ ((__nothrow__ ));

extern long double tanl (long double __x) __attribute__ ((__nothrow__ )); extern long double __tanl (long double __x) __attribute__ ((__nothrow__ ));




extern long double coshl (long double __x) __attribute__ ((__nothrow__ )); extern long double __coshl (long double __x) __attribute__ ((__nothrow__ ));

extern long double sinhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __sinhl (long double __x) __attribute__ ((__nothrow__ ));

extern long double tanhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __tanhl (long double __x) __attribute__ ((__nothrow__ ));
# 85 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double acoshl (long double __x) __attribute__ ((__nothrow__ )); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__ ));

extern long double asinhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__ ));

extern long double atanhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__ ));





extern long double expl (long double __x) __attribute__ ((__nothrow__ )); extern long double __expl (long double __x) __attribute__ ((__nothrow__ ));


extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ )); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ ));


extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ )); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ ));


extern long double logl (long double __x) __attribute__ ((__nothrow__ )); extern long double __logl (long double __x) __attribute__ ((__nothrow__ ));


extern long double log10l (long double __x) __attribute__ ((__nothrow__ )); extern long double __log10l (long double __x) __attribute__ ((__nothrow__ ));


extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ )); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
# 119 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double expm1l (long double __x) __attribute__ ((__nothrow__ )); extern long double __expm1l (long double __x) __attribute__ ((__nothrow__ ));


extern long double log1pl (long double __x) __attribute__ ((__nothrow__ )); extern long double __log1pl (long double __x) __attribute__ ((__nothrow__ ));


extern long double logbl (long double __x) __attribute__ ((__nothrow__ )); extern long double __logbl (long double __x) __attribute__ ((__nothrow__ ));




extern long double exp2l (long double __x) __attribute__ ((__nothrow__ )); extern long double __exp2l (long double __x) __attribute__ ((__nothrow__ ));


extern long double log2l (long double __x) __attribute__ ((__nothrow__ )); extern long double __log2l (long double __x) __attribute__ ((__nothrow__ ));






extern long double powl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __powl (long double __x, long double __y) __attribute__ ((__nothrow__ ));


extern long double sqrtl (long double __x) __attribute__ ((__nothrow__ )); extern long double __sqrtl (long double __x) __attribute__ ((__nothrow__ ));



extern long double hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ ));




extern long double cbrtl (long double __x) __attribute__ ((__nothrow__ )); extern long double __cbrtl (long double __x) __attribute__ ((__nothrow__ ));






extern long double ceill (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __ceill (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern long double fabsl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __fabsl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern long double floorl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __floorl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
# 177 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int isinfl (long double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));




extern int finitel (long double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __dreml (long double __x, long double __y) __attribute__ ((__nothrow__ ));



extern long double significandl (long double __x) __attribute__ ((__nothrow__ )); extern long double __significandl (long double __x) __attribute__ ((__nothrow__ ));






extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));




extern long double nanl (const char *__tagb) __attribute__ ((__nothrow__ )); extern long double __nanl (const char *__tagb) __attribute__ ((__nothrow__ ));
# 213 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int isnanl (long double __value) __attribute__ ((__nothrow__ ))
  __attribute__ ((__const__));





extern long double j0l (long double) __attribute__ ((__nothrow__ )); extern long double __j0l (long double) __attribute__ ((__nothrow__ ));
extern long double j1l (long double) __attribute__ ((__nothrow__ )); extern long double __j1l (long double) __attribute__ ((__nothrow__ ));
extern long double jnl (int, long double) __attribute__ ((__nothrow__ )); extern long double __jnl (int, long double) __attribute__ ((__nothrow__ ));
extern long double y0l (long double) __attribute__ ((__nothrow__ )); extern long double __y0l (long double) __attribute__ ((__nothrow__ ));
extern long double y1l (long double) __attribute__ ((__nothrow__ )); extern long double __y1l (long double) __attribute__ ((__nothrow__ ));
extern long double ynl (int, long double) __attribute__ ((__nothrow__ )); extern long double __ynl (int, long double) __attribute__ ((__nothrow__ ));





extern long double erfl (long double) __attribute__ ((__nothrow__ )); extern long double __erfl (long double) __attribute__ ((__nothrow__ ));
extern long double erfcl (long double) __attribute__ ((__nothrow__ )); extern long double __erfcl (long double) __attribute__ ((__nothrow__ ));
extern long double lgammal (long double) __attribute__ ((__nothrow__ )); extern long double __lgammal (long double) __attribute__ ((__nothrow__ ));




extern long double tgammal (long double) __attribute__ ((__nothrow__ )); extern long double __tgammal (long double) __attribute__ ((__nothrow__ ));





extern long double gammal (long double) __attribute__ ((__nothrow__ )); extern long double __gammal (long double) __attribute__ ((__nothrow__ ));







extern long double lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ )); extern long double __lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ ));






extern long double rintl (long double __x) __attribute__ ((__nothrow__ )); extern long double __rintl (long double __x) __attribute__ ((__nothrow__ ));


extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ ));

extern long double nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
# 275 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ ));



extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ )); extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ ));



extern int ilogbl (long double __x) __attribute__ ((__nothrow__ )); extern int __ilogbl (long double __x) __attribute__ ((__nothrow__ ));
# 293 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ )); extern long double __scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ ));



extern long double nearbyintl (long double __x) __attribute__ ((__nothrow__ )); extern long double __nearbyintl (long double __x) __attribute__ ((__nothrow__ ));



extern long double roundl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __roundl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));



extern long double truncl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __truncl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));




extern long double remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ )); extern long double __remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ ));






extern long int lrintl (long double __x) __attribute__ ((__nothrow__ )); extern long int __lrintl (long double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llrintl (long double __x) __attribute__ ((__nothrow__ )); extern long long int __llrintl (long double __x) __attribute__ ((__nothrow__ ));



extern long int lroundl (long double __x) __attribute__ ((__nothrow__ )); extern long int __lroundl (long double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llroundl (long double __x) __attribute__ ((__nothrow__ )); extern long long int __llroundl (long double __x) __attribute__ ((__nothrow__ ));



extern long double fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ ));



extern long double fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern long double fminl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));



extern long double fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ )); extern long double __fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ ));
# 435 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ )); extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ ));
# 400 "/usr/include/math.h" 2 3 4
# 854 "/usr/include/math.h" 3 4
extern int signgam;
# 934 "/usr/include/math.h" 3 4
enum
  {
    FP_NAN =

      0,
    FP_INFINITE =

      1,
    FP_ZERO =

      2,
    FP_SUBNORMAL =

      3,
    FP_NORMAL =

      4
  };
# 2 "vlsi_eval4.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 26 "/usr/include/string.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/string.h" 2 3 4






# 1 "/home/navdeep/Vivado/2018.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3 4
# 31 "/home/navdeep/Vivado/2018.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 3 4
typedef __typeof__(((int*)0)-((int*)0)) ptrdiff_t;



typedef __typeof__(sizeof(int)) size_t;




typedef int wchar_t;
# 34 "/usr/include/string.h" 2 3 4
# 43 "/usr/include/string.h" 3 4
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));





extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
    __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2))) ;




extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 80 "/usr/include/string.h" 3 4
extern int __memcmpeq (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 107 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 141 "/usr/include/string.h" 3 4
extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
    __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2))) ;





# 1 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 3 4
struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
};

typedef struct __locale_struct *__locale_t;
# 23 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 2 3 4

typedef __locale_t locale_t;
# 173 "/usr/include/string.h" 2 3 4


extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));


extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 4)))
                                           ;





extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 246 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 273 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 293 "/usr/include/string.h" 3 4
extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 323 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 350 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));



extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
# 407 "/usr/include/string.h" 3 4
extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern char *strerror (int __errnum) __attribute__ ((__nothrow__ ));
# 432 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)))


                                          ;
# 458 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, locale_t __l) __attribute__ ((__nothrow__ ));





# 1 "/usr/include/strings.h" 1 3 4
# 23 "/usr/include/strings.h" 3 4
# 1 "/home/navdeep/Vivado/2018.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3 4
# 24 "/usr/include/strings.h" 2 3 4
# 34 "/usr/include/strings.h" 3 4
extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bcopy (const void *__src, void *__dest, size_t __n)
  __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
# 68 "/usr/include/strings.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 96 "/usr/include/strings.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






extern int ffs (int __i) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));





extern int ffsl (long int __l) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));



extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));






extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));



extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));
# 463 "/usr/include/string.h" 2 3 4



extern void explicit_bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)))
                                                  ;



extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ ));
# 489 "/usr/include/string.h" 3 4
extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
# 3 "vlsi_eval4.c" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/home/navdeep/Vivado/2018.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4


# 1 "/home/navdeep/Vivado/2018.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdarg.h" 1 3 4
# 30 "/home/navdeep/Vivado/2018.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdarg.h" 3 4
typedef __builtin_va_list va_list;
# 48 "/home/navdeep/Vivado/2018.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 37 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h" 1 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 1 3 4
# 13 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 3 4
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 6 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h" 2 3 4




typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
# 40 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h" 3 4
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
# 41 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h" 1 3 4



struct _IO_FILE;
typedef struct _IO_FILE __FILE;
# 42 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h" 1 3 4



struct _IO_FILE;


typedef struct _IO_FILE FILE;
# 43 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h" 3 4
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;




typedef void _IO_lock_t;





struct _IO_FILE
{
  int _flags;


  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;


  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;
  int _flags2;
  __off_t _old_offset;


  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

  _IO_lock_t *_lock;







  __off64_t _offset;

  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
# 44 "/usr/include/stdio.h" 2 3 4








typedef __gnuc_va_list va_list;
# 63 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;
# 77 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;






typedef __fpos_t fpos_t;
# 133 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 134 "/usr/include/stdio.h" 2 3 4
# 143 "/usr/include/stdio.h" 3 4
extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;






extern int remove (const char *__filename) __attribute__ ((__nothrow__ ));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ ));



extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ ));
# 178 "/usr/include/stdio.h" 3 4
extern int fclose (FILE *__stream);
# 188 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile (void)
  __attribute__ ((__malloc__)) ;
# 205 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char[20]) __attribute__ ((__nothrow__ )) ;




extern char *tmpnam_r (char __s[20]) __attribute__ ((__nothrow__ )) ;
# 222 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
   __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;






extern int fflush (FILE *__stream);
# 239 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 258 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes)
  __attribute__ ((__malloc__)) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 293 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ ))
  __attribute__ ((__malloc__)) ;
# 308 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ ))
  __attribute__ ((__malloc__)) ;
# 328 "/usr/include/stdio.h" 3 4
extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ ));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ ));




extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ ));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ ));







extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));



extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));
# 403 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));







extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ ));
# 434 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf") ;


extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf") ;

extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ ));
# 459 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format__ (__scanf__, 2, 0)));





extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ ))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 513 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);






extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 538 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
# 549 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 565 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);







extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
                                                         ;
# 605 "/usr/include/stdio.h" 3 4
extern char *gets (char *__s) __attribute__ ((__deprecated__));
# 632 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
                             size_t *__restrict __n, int __delimiter,
                             FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
                           size_t *__restrict __n, int __delimiter,
                           FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
                          size_t *__restrict __n,
                          FILE *__restrict __stream) ;







extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
# 702 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);







extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 736 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 760 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 786 "/usr/include/stdio.h" 3 4
extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ ));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ )) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ )) ;



extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ ));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) ;







extern void perror (const char *__s);




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ )) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) ;
# 823 "/usr/include/stdio.h" 3 4
extern int pclose (FILE *__stream);





extern FILE *popen (const char *__command, const char *__modes)
  __attribute__ ((__malloc__)) ;






extern char *ctermid (char *__s) __attribute__ ((__nothrow__ ))
                                     ;
# 867 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ ));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ )) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ ));
# 885 "/usr/include/stdio.h" 3 4
extern int __uflow (FILE *);
extern int __overflow (FILE *, int);
# 4 "vlsi_eval4.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 26 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/stdlib.h" 2 3 4





# 1 "/home/navdeep/Vivado/2018.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3 4
# 33 "/usr/include/stdlib.h" 2 3 4







# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 41 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 42 "/usr/include/stdlib.h" 2 3 4
# 59 "/usr/include/stdlib.h" 3 4
typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;





__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
# 98 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ )) ;



extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;



__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;



extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));



extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
# 177 "/usr/include/stdlib.h" 3 4
extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));



__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
# 386 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ )) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;






# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;


typedef __loff_t loff_t;




typedef __ino_t ino_t;
# 59 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
# 97 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;
# 114 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;






# 1 "/usr/include/x86_64-linux-gnu/bits/types/clock_t.h" 1 3 4






typedef __clock_t clock_t;
# 127 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/clockid_t.h" 1 3 4






typedef __clockid_t clockid_t;
# 129 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/time_t.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/bits/types/time_t.h" 3 4
typedef __time_t time_t;
# 130 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/timer_t.h" 1 3 4






typedef __timer_t timer_t;
# 131 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 144 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/home/navdeep/Vivado/2018.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3 4
# 145 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;






# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 3 4
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 156 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;


typedef int register_t __attribute__ ((__mode__ (__word__)));
# 176 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 24 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endianness.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/endian.h" 2 3 4
# 25 "/usr/include/endian.h" 2 3 4
# 35 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline __uint16_t
__bswap_16 (__uint16_t __bsx)
{



  return ((__uint16_t) ((((__bsx) >> 8) & 0xff) | (((__bsx) & 0xff) << 8)));

}






static __inline __uint32_t
__bswap_32 (__uint32_t __bsx)
{



  return ((((__bsx) & 0xff000000u) >> 24) | (((__bsx) & 0x00ff0000u) >> 8) | (((__bsx) & 0x0000ff00u) << 8) | (((__bsx) & 0x000000ffu) << 24));

}
# 69 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
__extension__ static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{



  return ((((__bsx) & 0xff00000000000000ull) >> 56) | (((__bsx) & 0x00ff000000000000ull) >> 40) | (((__bsx) & 0x0000ff0000000000ull) >> 24) | (((__bsx) & 0x000000ff00000000ull) >> 8) | (((__bsx) & 0x00000000ff000000ull) << 8) | (((__bsx) & 0x0000000000ff0000ull) << 24) | (((__bsx) & 0x000000000000ff00ull) << 40) | (((__bsx) & 0x00000000000000ffull) << 56));

}
# 36 "/usr/include/endian.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 1 3 4
# 32 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 3 4
static __inline __uint16_t
__uint16_identity (__uint16_t __x)
{
  return __x;
}

static __inline __uint32_t
__uint32_identity (__uint32_t __x)
{
  return __x;
}

static __inline __uint64_t
__uint64_identity (__uint64_t __x)
{
  return __x;
}
# 37 "/usr/include/endian.h" 2 3 4
# 177 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h" 1 3 4




typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
# 5 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 2 3 4


typedef __sigset_t sigset_t;
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h" 1 3 4







struct timeval
{




  __time_t tv_sec;
  __suseconds_t tv_usec;

};
# 38 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 3 4
struct timespec
{



  __time_t tv_sec;




  __syscall_slong_t tv_nsec;
# 31 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 3 4
};
# 40 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 59 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 102 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 127 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 180 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 227 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 1 3 4
# 44 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 2 3 4
# 45 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h" 3 4
typedef union
{
  __extension__ unsigned long long int __value64;
  struct
  {
    unsigned int __low;
    unsigned int __high;
  } __value32;
} __atomic_wide_counter;
# 47 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4




typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;

typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;
# 76 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h" 3 4
struct __pthread_mutex_s
{
  int __lock;
  unsigned int __count;
  int __owner;

  unsigned int __nusers;



  int __kind;

  short __spins;
  short __elision;
  __pthread_list_t __list;
# 53 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h" 3 4
};
# 77 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4
# 89 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h" 3 4
struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;

  int __cur_writer;
  int __shared;
  signed char __rwelision;




  unsigned char __pad1[7];


  unsigned long int __pad2;


  unsigned int __flags;
# 55 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h" 3 4
};
# 90 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4




struct __pthread_cond_s
{
  __atomic_wide_counter __wseq;
  __atomic_wide_counter __g1_start;
  unsigned int __g_refs[2] ;
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};

typedef unsigned int __tss_t;
typedef unsigned long int __thrd_t;

typedef struct
{
  int __data ;
} __once_flag;
# 24 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4



typedef unsigned long int pthread_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;




typedef union
{
  struct __pthread_mutex_s __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;


typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;





typedef union
{
  struct __pthread_rwlock_arch_t __data;
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
# 228 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 396 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__ ));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ ));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));





extern int rand (void) __attribute__ ((__nothrow__ ));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ ));



extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ ));







extern double drand48 (void) __attribute__ ((__nothrow__ ));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ ));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ ));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ ));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));




extern void *malloc (size_t __size) __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__))
                                         ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;






extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ )) __attribute__ ((__warn_unused_result__)) ;


extern void free (void *__ptr) __attribute__ ((__nothrow__ ));







extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ )) __attribute__ ((__warn_unused_result__))

                       ;


extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ )) ;





# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/home/navdeep/Vivado/2018.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ ));
# 575 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__))
                                         ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
# 598 "/usr/include/stdlib.h" 3 4
extern void abort (void) __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
# 617 "/usr/include/stdlib.h" 3 4
extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





extern void exit (int __status) __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));
# 636 "/usr/include/stdlib.h" 3 4
extern void _Exit (int __status) __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));




extern char *getenv (const char *__name) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
# 654 "/usr/include/stdlib.h" 3 4
extern int putenv (char *__string) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ ));
# 682 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
# 695 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 717 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 738 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
# 791 "/usr/include/stdlib.h" 3 4
extern int system (const char *__command) ;
# 808 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ )) ;






typedef int (*__compar_fn_t) (const void *, const void *);
# 828 "/usr/include/stdlib.h" 3 4
extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 848 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;


__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;






extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;


__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;
# 880 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4, 5)));





extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ ));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ ));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ ));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ ))
                                      ;

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ ))

                                    ;






extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
# 967 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2, 3))) ;
# 1013 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
# 1023 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 1024 "/usr/include/stdlib.h" 2 3 4
# 5 "vlsi_eval4.c" 2
# 1 "/home/navdeep/Desktop/vlsi_4.0/include/k2c_tensor_include.h" 1
# 23 "/home/navdeep/Desktop/vlsi_4.0/include/k2c_tensor_include.h"
struct k2c_tensor
{

    float array[10000];


    size_t ndim;


    size_t numel;


    size_t shape[5];
};

typedef struct k2c_tensor k2c_tensor;
# 6 "vlsi_eval4.c" 2
# 28 "vlsi_eval4.c"
void k2c_bias_add(k2c_tensor* A, const k2c_tensor* b) {

    for (size_t i=0; i<A->numel; i+=b->numel) {
        for (size_t j=0; j<b->numel; ++j) {
            A->array[i+j] += b->array[j];
        }
    }
}

void k2c_idx2sub(const size_t idx, size_t * sub, const size_t * shape, const size_t ndim) {

    size_t idx2 = idx;
    for (int i=ndim-1; i>=0; --i) {
        sub[i] = idx2%shape[i];
        idx2 /= shape[i];
    }
}

size_t k2c_sub2idx(const size_t * sub, const size_t * shape, const size_t ndim) {

    size_t idx = 0;
    size_t temp = 0;
    for (size_t i=0; i<ndim; ++i) {
        temp = sub[i];
        for (size_t j=ndim-1; j>i; --j) {
            temp *= shape[j];
        }
        idx += temp;
    }
    return idx;
}

void k2c_affine_matmul(float * C, const float * A, const float * B, const float * d,
                       const size_t outrows,const size_t outcols, const size_t innerdim) {



     size_t i, j;
    size_t total_ele = outrows*outcols;
    for ( i = 0; i < total_ele; i++) {
        C[i] = 0;
    }

    for ( i = 0 ; i < outrows; ++i) {
        const size_t outrowidx = i*outcols;
        const size_t inneridx = i*innerdim;
        for ( j = 0; j < outcols; ++j) {
            for (size_t k = 0; k < innerdim; ++k) {
                C[outrowidx+j] += A[inneridx+k] * B[k*outcols+j];
            }
            C[outrowidx+j] += d[j];
        }
    }
}

void k2c_matmul(float * C, const float * A, const float * B, const size_t outrows,
                const size_t outcols, const size_t innerdim) {



    size_t i, j;
    size_t total_ele = outcols*outrows;
for (i = 0; i < total_ele; i++) {
    C[i] = 0;
}

    for (i = 0 ; i < outrows; ++i) {
        const size_t outrowidx = i*outcols;
        const size_t inneridx = i*innerdim;
        for (size_t k = 0; k < innerdim; ++k) {
            for ( j = 0; j < outcols; ++j) {
                C[outrowidx+j] += A[inneridx+k] * B[k*outcols+j];
            }
        }
    }
}


void k2c_dot(k2c_tensor* C, const k2c_tensor* A, const k2c_tensor* B, const size_t * axesA,
             const size_t * axesB, const size_t naxes, const int normalize, float * fwork) {

    size_t permA[5];
    size_t permB[5];
    size_t prod_axesA = 1;
    size_t prod_axesB = 1;
    size_t free_axesA, free_axesB;
    size_t freeA[5];
    size_t freeB[5];
    size_t count;
    int isin;
    size_t newshpA[5];
    size_t newshpB[5];
    const size_t ndimA = A->ndim;
    const size_t ndimB = B->ndim;
    float *reshapeA = &fwork[0];
    float *reshapeB = &fwork[A->numel];
    size_t Asub[5];
    size_t Bsub[5];

    count=0;
    size_t i,j;
    for ( i=0; i<ndimA; ++i) {
        isin = 0;
        for (j=0; j<naxes; ++j) {
            if (i==axesA[j]) {
                isin=1;
            }
        }
        if (!isin) {
            freeA[count] = i;
            ++count;
        }
    }
    count=0;
    for (i=0; i<ndimB; ++i) {
        isin = 0;
        for ( j=0; j<naxes; ++j) {
            if (i==axesB[j]) {
                isin=1;
            }
        }
        if (!isin) {
            freeB[count] = i;
            ++count;
        }
    }


    for (i=0; i < naxes; ++i) {
        prod_axesA *= A->shape[axesA[i]];
    }
    for ( i=0; i < naxes; ++i) {
        prod_axesB *= B->shape[axesB[i]];
    }

    free_axesA = A->numel/prod_axesA;
    free_axesB = B->numel/prod_axesB;

    for ( i=0; i<ndimA-naxes; ++i) {
        permA[i] = freeA[i];
    }
    for ( i=ndimA-naxes, j=0; i<ndimA; ++i, ++j) {
        permA[i] = axesA[j];
    }
    for ( i=0; i<naxes; ++i) {
        permB[i] = axesB[i];
    }
    for ( i=naxes, j=0; i<ndimB; ++i, ++j) {
        permB[i] = freeB[j];
    }



    for ( i=0; i<ndimA; ++i) {
        newshpA[i] = A->shape[permA[i]];
    }
    for ( i=0; i<ndimB; ++i) {
        newshpB[i] = B->shape[permB[i]];
    }


    for ( i=0; i<A->numel; ++i) {
        k2c_idx2sub(i,Asub,A->shape,ndimA);
        for ( j=0; j<ndimA; ++j) {
            Bsub[j] = Asub[permA[j]];
        }
        size_t bidx = k2c_sub2idx(Bsub,newshpA,ndimA);
        reshapeA[bidx] = A->array[i];
    }

    for ( i=0; i<B->numel; ++i) {
        k2c_idx2sub(i,Bsub,B->shape,ndimB);
        for ( j=0; j<ndimB; ++j) {
            Asub[j] = Bsub[permB[j]];
        }
        size_t bidx = k2c_sub2idx(Asub,newshpB,ndimB);
        reshapeB[bidx] = B->array[i];
    }


    if (normalize) {

        float sum;
        float inorm;
        for ( i=0; i<free_axesA; ++i) {
            sum = 0;
            for ( j=0; j<prod_axesA; ++j) {
                sum += reshapeA[i*prod_axesA + j]*reshapeA[i*prod_axesA + j];
            }
            inorm = 1.0f/sqrtf(sum);
            for ( j=0; j<prod_axesA; ++j) {
                reshapeA[i*prod_axesA + j] *= inorm;
            }
        }
        for ( i=0; i<free_axesB; ++i) {
            sum = 0;
            for (j=0; j<prod_axesB; ++j) {
                sum += reshapeB[i + free_axesB*j]*reshapeB[i + free_axesB*j];
            }
            inorm = 1.0f/sqrtf(sum);
            for (j=0; j<prod_axesB; ++j) {
                reshapeB[i + free_axesB*j] *= inorm;
            }
        }
    }

    k2c_matmul(C->array, reshapeA, reshapeB, free_axesA,
               free_axesB, prod_axesA);
}



 void k2c_dense(k2c_tensor* output, const k2c_tensor* input, const k2c_tensor* kernel,
                const k2c_tensor* bias, int flag, float * fwork) {

     if (input->ndim <=2) {
         size_t outrows;

         if (input->ndim>1) {
             outrows = input->shape[0];
         }
         else {
            outrows = 1;
         }
         const size_t outcols = kernel->shape[1];
        const size_t innerdim = kernel->shape[0];
         const size_t outsize = outrows*outcols;
         k2c_affine_matmul(output->array,input->array,kernel->array,bias->array,
                           outrows,outcols,innerdim);

        if(flag == 0){
            for (size_t i=0; i < outsize; ++i) {
                if( output->array[i] <= 0.0f) {
                    output->array[i] = 0.0f;
                }
            }
        }
        else{
            float xmax = output->array[0];
            float sum = 0;
            size_t i;
            for (i=0; i < outsize; ++i) {
                if (output->array[i]>xmax) {
                    xmax = output->array[i];
                }
            }

            for ( i=0; i < outsize; ++i) {
                output->array[i] = expf(output->array[i]-xmax);
            }

            for (i=0; i < outsize; ++i) {
                sum += output->array[i];
            }

            sum = 1.0f/sum;
            for ( i=0; i < outsize; ++i) {
                output->array[i] = output->array[i]*sum;
            }

        }

    }
    else {
        const size_t axesA[1] = {input->ndim-1};
_ssdm_SpecConstant(axesA);
# 292 "vlsi_eval4.c"

        const size_t axesB[1] = {0};
_ssdm_SpecConstant(axesB);
# 293 "vlsi_eval4.c"

        const size_t naxes = 1;
        const int normalize = 0;

        k2c_dot(output, input, kernel, axesA, axesB, naxes, normalize, fwork);
        k2c_bias_add(output, bias);
        if(flag == 0){
            for (size_t i=0; i < output->numel; ++i) {
                if( output->array[i] <= 0.0f) {
                    output->array[i] = 0.0f;
                }
            }
        }
        else{
            float xmax = output->array[0];
            float sum = 0;
            size_t i;
            for (i=0; i < output->numel; ++i) {
                if (output->array[i]>xmax) {
                    xmax = output->array[i];
                }
            }

            for ( i=0; i < output->numel; ++i) {
                output->array[i] = expf(output->array[i]-xmax);
            }

            for (i=0; i < output->numel; ++i) {
                sum += output->array[i];
            }

            sum = 1.0f/sum;
            for ( i=0; i < output->numel; ++i) {
                output->array[i] = output->array[i]*sum;
            }

        }

    }
}

void k2c_flatten(k2c_tensor *output, const k2c_tensor* input) {


    size_t i;
for (i = 0; i < input->numel; i++) {
    output->array[i] = input->array[i];
}

    for ( i=0; i<input->ndim; ++i) {
        output->shape[i] = 1;
    }
    output->shape[0] = input->numel;
    output->numel = input->numel;
    output->ndim = 1;
}


void k2c_maxpool2d(k2c_tensor* output, const k2c_tensor* input, const size_t * pool_size,
                   const size_t * stride) {


    const size_t channels = input->shape[2];


    for (size_t i=0; i< channels; ++i) {
        for (size_t j=0, k=0; j<output->shape[1]*channels;
                j+=channels, k+=channels*stride[1]) {
            for (size_t l=0, m=0; l<output->numel; l+=channels*output->shape[1],
                    m+=channels*input->shape[1]*stride[0]) {
                output->array[l+j+i] = input->array[m+k+i];
                for (size_t n=0; n<pool_size[1]*channels; n+=channels) {
                    for (size_t p=0; p<pool_size[0]*channels*input->shape[1];
                            p+=channels*input->shape[1]) {
                        if (output->array[l+j+i] < input->array[m+k+i+n+p]) {
                            output->array[l+j+i] = input->array[m+k+i+n+p];
                        }
                    }
                }
            }
        }
    }
}



void k2c_conv2d(k2c_tensor* output, const k2c_tensor* input, const k2c_tensor* kernel,
                const k2c_tensor* bias, const size_t * stride, const size_t * dilation) {


    size_t qi;
for (qi = 0; qi < output->numel; qi++) {
    output->array[qi] = 0;
}


    const size_t out_rows = output->shape[0];
    const size_t out_cols = output->shape[1];
    const size_t out_channels = output->shape[2];
    const size_t in_channels = input->shape[2];

    for (size_t x0=0; x0 < out_rows; ++x0) {
        for (size_t x1=0; x1 < out_cols; ++x1) {
            for (size_t z0=0; z0 < kernel->shape[0]; ++z0) {
                for (size_t z1=0; z1 < kernel->shape[1]; ++z1) {
                    for (size_t q=0; q < in_channels; ++q) {
                        for (size_t k=0; k < out_channels; ++k) {
                            output->array[x0*(output->shape[2]*output->shape[1])
                                          + x1*(output->shape[2]) + k] +=
                                              kernel->array[z0*(kernel->shape[3]*kernel->shape[2]*kernel->shape[1])
                                                            + z1*(kernel->shape[3]*kernel->shape[2])
                                                            + q*(kernel->shape[3]) + k]*
                                              input->array[(x0*stride[0]
                                                            + dilation[0]*z0)*(input->shape[2]*input->shape[1])
                                                           + (x1*stride[1] + dilation[1]*z1)*(input->shape[2]) + q];
                        }
                    }
                }
            }
        }
    }
    k2c_bias_add(output,bias);

    for (size_t i=0; i < output->numel; ++i) {
         if (output->array[i] <= 0.0f) {
             output->array[i] = 0.0f;
        }
    }
}


const float dense_22_kernel_array[16384] = {
-3.31406714e-03f,+8.90383869e-02f,+1.06755592e-01f,+2.89285276e-02f,-1.38191162e-02f,
-6.28362596e-02f,-7.90916532e-02f,+2.66881380e-02f,+3.22936010e-03f,+3.38703603e-03f,
-9.59031582e-02f,-6.69616042e-03f,+1.73388124e-02f,-3.27814743e-02f,-7.69847110e-02f,
-6.25025183e-02f,+4.33632880e-02f,+5.53306118e-02f,+6.45276159e-02f,+2.41216645e-02f,
-1.19604934e-02f,+1.55890035e-03f,+3.38117629e-02f,+9.70746949e-03f,+6.65904135e-02f,
+9.39648002e-02f,+9.53547210e-02f,+7.67077580e-02f,-1.03107020e-01f,-5.06470874e-02f,
+8.47659260e-02f,+8.09470862e-02f,-6.72700778e-02f,+9.69893113e-02f,-4.13257293e-02f,
+6.98761083e-03f,-1.13551095e-02f,-7.18908608e-02f,+5.14406599e-02f,-1.00956531e-02f,
+6.06231317e-02f,+9.75677297e-02f,-5.41246235e-02f,-5.54092005e-02f,-4.85898256e-02f,
+3.84901091e-02f,+7.73969889e-02f,+5.67704849e-02f,+7.68771693e-02f,+2.84437016e-02f,
+2.06490960e-02f,+4.19138595e-02f,-2.91718058e-02f,-9.71765295e-02f,-4.55706529e-02f,
-6.60792813e-02f,-3.67793441e-03f,-9.36223473e-03f,-2.26917192e-02f,-6.58528879e-02f,
+7.41601065e-02f,-5.81002757e-02f,-4.06392291e-02f,-7.02412333e-03f,+1.01860993e-01f,
-6.85645044e-02f,-4.53714132e-02f,-2.29634568e-02f,-7.26668462e-02f,-3.33932787e-02f,
-3.37498412e-02f,-8.48144889e-02f,+4.55728844e-02f,-5.64397983e-02f,+4.01739366e-02f,
+4.95717302e-02f,-4.27618681e-04f,-7.54038021e-02f,+3.96060720e-02f,+4.25267443e-02f,
-6.39435127e-02f,-2.14815214e-02f,-9.44822282e-02f,+4.81895879e-02f,-6.50999742e-03f,
+5.64648286e-02f,+6.18427023e-02f,-9.50262845e-02f,-9.62376893e-02f,+1.08821644e-03f,
-7.32709467e-02f,+7.58905113e-02f,-4.34606485e-02f,+2.20482051e-02f,+1.25544369e-02f,
+6.07799105e-02f,+7.92683810e-02f,+8.19288567e-02f,+8.73305798e-02f,+6.30665198e-02f,
-5.31485751e-02f,+1.05257586e-01f,+9.00424123e-02f,-3.77953649e-02f,+3.60155143e-02f,
+5.60634322e-02f,-6.56369850e-02f,-1.00931311e-02f,-6.77495971e-02f,+4.42157537e-02f,
+7.33793750e-02f,-2.79122242e-03f,-8.01223293e-02f,+4.56408188e-02f,-3.06449607e-02f,
+5.22058532e-02f,-9.72484723e-02f,-6.10853098e-02f,+5.51455617e-02f,-7.02331588e-02f,
-1.22040361e-02f,+4.25961204e-02f,+2.83991527e-02f,-4.90166480e-04f,-6.91413581e-02f,
+4.74785529e-02f,-1.05092734e-01f,-2.94668367e-03f,+9.11306143e-02f,+1.73188690e-02f,
+7.21776253e-03f,+4.24186029e-02f,+3.05234138e-02f,-8.16072673e-02f,-5.78992702e-02f,
+2.65478306e-02f,-8.29386488e-02f,-3.99147719e-02f,-3.90479118e-02f,+6.57087192e-02f,
-2.84659993e-02f,-6.43705800e-02f,-4.37741540e-02f,-1.53249893e-02f,+1.99587587e-02f,
-3.82775590e-02f,-1.41943004e-02f,-3.55310366e-02f,+8.46838057e-02f,-5.08356616e-02f,
-7.77681991e-02f,+4.91040163e-02f,-9.80194099e-03f,-8.68322030e-02f,+3.34793329e-02f,
-2.96089426e-02f,-8.33523348e-02f,+4.97042313e-02f,-1.12439627e-02f,+2.88957055e-03f,
-5.80110475e-02f,+8.78454521e-02f,-6.06444478e-03f,+5.07358164e-02f,+8.43354017e-02f,
-8.19895789e-02f,+7.62846991e-02f,-5.48471324e-03f,+3.75914872e-02f,-8.03511217e-02f,
-6.04432337e-02f,-3.42227370e-02f,+8.61156434e-02f,-3.94469313e-02f,-4.52669598e-02f,
+1.47757446e-03f,-7.41051212e-02f,+7.72342905e-02f,+3.23159024e-02f,+2.58719251e-02f,
+4.13739644e-02f,+3.60791311e-02f,+1.77768953e-02f,-4.59422059e-02f,-1.26255974e-02f,
+7.37101808e-02f,-5.00861183e-02f,-8.26893523e-02f,-3.14936191e-02f,+4.52670641e-02f,
+5.83992638e-02f,+5.91831096e-02f,+1.77508220e-02f,-9.09202918e-02f,-5.68810776e-02f,
+6.28894493e-02f,-5.22725321e-02f,+3.28609869e-02f,-3.58119607e-03f,+7.04909489e-02f,
-8.19004104e-02f,+2.38105655e-03f,-4.48599756e-02f,+2.42136046e-02f,+1.02643743e-02f,
-1.03593260e-01f,+3.97029296e-02f,-6.16447143e-02f,+6.98211119e-02f,-7.95158967e-02f,
-7.51771033e-04f,+1.42861009e-02f,+7.24888369e-02f,+9.34558436e-02f,-1.65066570e-02f,
-1.64438635e-02f,-6.47710040e-02f,-9.95682701e-02f,-3.56830657e-04f,-1.02126457e-01f,
+4.14818004e-02f,-7.66959116e-02f,+1.83845311e-02f,-5.82604744e-02f,+6.50237426e-02f,
-7.17670396e-02f,-4.09815609e-02f,+3.57279181e-02f,+7.21939728e-02f,+8.00804049e-02f,
-9.59553495e-02f,-3.05560660e-02f,-7.60382041e-02f,+8.58332589e-02f,+7.61816055e-02f,
-5.96058518e-02f,-1.11920973e-02f,-3.37248519e-02f,-4.89154346e-02f,-9.58618522e-02f,
+6.39361739e-02f,+8.37950036e-02f,-1.02621987e-01f,+7.43697956e-02f,-6.44450188e-02f,
+5.10876849e-02f,-1.04905404e-01f,+7.00637177e-02f,+9.98844579e-02f,+4.87967543e-02f,
-5.19049950e-02f,-3.96265201e-02f,+4.38914672e-02f,+4.28853408e-02f,-3.70616419e-03f,
+9.84857678e-02f,+8.74951631e-02f,+4.67979163e-03f,-5.39839305e-02f,+9.65574756e-03f,
-9.00603607e-02f,-3.35715227e-02f,+8.97172615e-02f,-7.52568990e-02f,-1.66728739e-02f,
-8.88638273e-02f,+6.46160617e-02f,+3.71350273e-02f,-4.15850338e-03f,+4.92584668e-02f,
+7.70007214e-03f,+3.75107978e-03f,+1.22982310e-02f,+5.33863977e-02f,-2.91359592e-02f,
+9.97832417e-03f,+8.62826873e-03f,+6.90933019e-02f,-3.41520309e-02f,-4.65902761e-02f,
-6.40261620e-02f,+4.04019319e-02f,+9.74022448e-02f,-2.84095469e-04f,-8.45560953e-02f,
+1.63541380e-02f,+5.83697259e-02f,+7.96872303e-02f,+3.94696742e-02f,-9.79019850e-02f,
+3.66186537e-02f,+4.54375967e-02f,+8.56587943e-03f,+8.26629847e-02f,-5.73387034e-02f,
-1.01999864e-01f,+2.04112027e-02f,+1.06266484e-01f,+2.85540558e-02f,+9.30325687e-02f,
-2.87419036e-02f,-6.86747655e-02f,+8.78761932e-02f,-6.84840977e-02f,+4.39475104e-02f,
-3.42058241e-02f,-8.93666074e-02f,+1.57584921e-02f,+1.66697521e-02f,-6.60928711e-03f,
+9.65258330e-02f,-3.80301364e-02f,-3.12241055e-02f,+8.84280503e-02f,+5.05452864e-02f,
+6.37433529e-02f,-9.71995443e-02f,+9.59351361e-02f,+2.24070605e-02f,-4.19316068e-02f,
+9.67079625e-02f,-4.14181538e-02f,+1.13368820e-04f,+8.53511617e-02f,+3.84204835e-02f,
+6.71503767e-02f,+8.73972848e-02f,+6.97187185e-02f,+6.43535480e-02f,+9.51159522e-02f,
+1.16383005e-03f,-9.62886065e-02f,-2.90961247e-02f,-1.07313268e-01f,+5.49226776e-02f,
-5.61259082e-03f,+1.43237393e-02f,-6.80202097e-02f,+7.77266324e-02f,-1.32785887e-02f,
-6.15324872e-03f,+1.63192954e-02f,+8.05976391e-02f,-6.68778867e-02f,-7.95324668e-02f,
-5.60617670e-02f,+7.40463212e-02f,-1.08735049e-02f,+4.51064743e-02f,-6.83648661e-02f,
-8.32718313e-02f,+8.38111900e-03f,+8.02305415e-02f,-5.11032380e-02f,+7.38859698e-02f,
-2.93878019e-02f,+2.46973559e-02f,-7.41132647e-02f,+9.56284627e-02f,-7.53117055e-02f,
+9.66123715e-02f,-5.23271672e-02f,+5.56477830e-02f,-1.35206357e-02f,+6.68625608e-02f,
-2.44233757e-02f,+5.13758585e-02f,+6.08548597e-02f,-6.58916235e-02f,-1.13994852e-02f,
+4.29542288e-02f,+6.58612773e-02f,+1.52794272e-02f,+6.17111400e-02f,+2.16859952e-02f,
+1.64386779e-02f,+3.11454162e-02f,+8.87941346e-02f,-3.52251083e-02f,-6.03924170e-02f,
-1.04358867e-02f,-5.89293428e-02f,+8.84485021e-02f,-5.43955378e-02f,-6.31484985e-02f,
-9.16202366e-02f,+1.03893485e-02f,+4.01152745e-02f,+5.29478164e-03f,-8.05294663e-02f,
-9.62928757e-02f,-4.17769216e-02f,-2.39485297e-02f,+9.04528946e-02f,+7.84618855e-02f,
+9.77031440e-02f,-7.58751929e-02f,+3.70317847e-02f,-4.14932705e-02f,-4.32271659e-02f,
+8.83911829e-03f,+5.05324826e-02f,+7.12053943e-03f,+8.58750939e-03f,-7.60335177e-02f,
-2.15464626e-02f,+1.58438422e-02f,-1.69500280e-02f,-1.09654054e-01f,-7.21008554e-02f,
+3.28666642e-02f,-3.90970297e-02f,+9.16044228e-03f,+8.49256665e-02f,-4.74448269e-03f,
-8.53474289e-02f,-9.89637300e-02f,-7.78751969e-02f,+4.79369834e-02f,-1.01176798e-01f,
-6.08088821e-03f,+6.63302764e-02f,+2.34252736e-02f,-7.93096423e-03f,-8.13488960e-02f,
-1.04317687e-01f,-1.92406774e-03f,-4.16800380e-04f,+3.02228555e-02f,-7.13037699e-02f,
-8.49671811e-02f,-5.10495044e-02f,+5.06115481e-02f,-9.54740793e-02f,+7.08583221e-02f,
-1.02200441e-01f,+9.33437422e-02f,-6.17834553e-02f,+2.55562589e-02f,+8.27461481e-04f,
-6.25258386e-02f,+5.82609996e-02f,+1.04566224e-01f,+1.18182376e-02f,+7.41517320e-02f,
+3.36604789e-02f,+5.03150150e-02f,+4.11104336e-02f,+3.38867679e-02f,+1.41758323e-02f,
-4.95343022e-02f,+3.25365514e-02f,-6.70400932e-02f,-3.44140157e-02f,-1.92688545e-04f,
-5.40877283e-02f,-8.14551488e-02f,-9.53578111e-03f,-9.08646956e-02f,+8.44159573e-02f,
+9.99792516e-02f,+3.74154970e-02f,-1.86139122e-02f,-6.09558001e-02f,-1.04951682e-02f,
+1.28370970e-02f,+1.02289066e-01f,-7.00545311e-03f,-7.52307028e-02f,-6.16549961e-02f,
-6.83358265e-03f,+4.37156949e-03f,+9.09333900e-02f,+9.45101157e-02f,+3.38312089e-02f,
-2.25831196e-03f,-6.54564947e-02f,-4.44853716e-02f,+8.79696012e-02f,+3.15540172e-02f,
-1.10751539e-01f,+8.81701186e-02f,+3.20609212e-02f,-4.72189896e-02f,-4.25056601e-03f,
-9.01885778e-02f,-4.77042841e-03f,+7.02673048e-02f,+7.96048120e-02f,-1.04148015e-02f,
+3.29159163e-02f,-9.68036875e-02f,+2.30124034e-02f,-8.44239816e-02f,+5.91344424e-02f,
+5.23718446e-03f,-8.56391191e-02f,-4.64950688e-02f,+4.96836007e-02f,-9.27887708e-02f,
+1.81024224e-02f,-7.08710849e-02f,-3.71337309e-02f,-6.22445857e-03f,-3.90019417e-02f,
+8.40650648e-02f,-9.81869400e-02f,+8.00419450e-02f,+8.00830051e-02f,+1.00754820e-01f,
-7.37404972e-02f,+1.03249013e-01f,-6.34919032e-02f,-7.64851496e-02f,+6.69240654e-02f,
+8.05306062e-02f,-2.43476164e-02f,-4.81633693e-02f,-2.16741264e-02f,+8.82600769e-02f,
-6.60986006e-02f,-9.81174186e-02f,-6.03189915e-02f,-6.78811297e-02f,-3.31462249e-02f,
-5.49068339e-02f,+9.52335522e-02f,-3.41941565e-02f,+8.26673582e-03f,-5.71431369e-02f,
-8.32158402e-02f,+5.00283390e-03f,+5.81128784e-02f,-6.34901673e-02f,+1.21979043e-02f,
-9.10476893e-02f,+9.42931697e-02f,+8.11925009e-02f,+8.20788071e-02f,-4.22366709e-02f,
+8.09188262e-02f,+1.09733269e-02f,-3.59418988e-02f,-3.88676859e-02f,-1.78556256e-02f,
-9.03496444e-02f,+7.36801326e-02f,-5.95363081e-02f,-5.86570911e-02f,+2.59921383e-02f,
-8.93620700e-02f,-5.95618710e-02f,-3.49359661e-02f,-8.49669054e-02f,+7.06464946e-02f,
-8.88141915e-02f,-3.16078067e-02f,+8.74322355e-02f,+8.45297650e-02f,-8.20586085e-02f,
-8.31040069e-02f,+7.32480958e-02f,+7.74625391e-02f,+1.03066392e-01f,-6.97387382e-02f,
-8.89799595e-02f,-5.75080700e-02f,+2.55407356e-02f,-3.77837569e-02f,-5.95886745e-02f,
+1.40216453e-02f,+8.43090340e-02f,-7.17847422e-02f,-6.66084960e-02f,-7.89899230e-02f,
-8.39300975e-02f,+8.05924386e-02f,-1.09467790e-01f,+3.69044170e-02f,-3.63534391e-02f,
-5.11506610e-02f,-2.15895548e-02f,-3.61961201e-02f,-7.94639289e-02f,+4.35403660e-02f,
-7.56011233e-02f,+4.33725193e-02f,+3.33545730e-02f,+4.15698998e-03f,+1.03582464e-01f,
+5.17671183e-02f,-8.55694711e-02f,+4.97786477e-02f,-2.25321874e-02f,-6.63624108e-02f,
-7.88060725e-02f,+1.06632607e-02f,+5.24112061e-02f,-2.33560875e-02f,-6.82427287e-02f,
+3.76229361e-02f,-5.96118625e-03f,-1.66666023e-02f,-4.14379640e-04f,+6.42747805e-02f,
+3.32206227e-02f,+4.62861620e-02f,-3.44159231e-02f,+3.87513684e-03f,-5.48865125e-02f,
+9.29779112e-02f,-5.73503077e-02f,-5.05707562e-02f,+6.92448914e-02f,-5.87692410e-02f,
+7.46095181e-02f,+5.38673028e-02f,-4.08241339e-02f,+8.84597152e-02f,+9.54328999e-02f,
-7.58642480e-02f,-9.46033001e-02f,-3.62208113e-02f,+2.66814157e-02f,+2.43178979e-02f,
-7.32995719e-02f,-7.24143535e-02f,-3.05157825e-02f,+5.38702831e-02f,+7.54516795e-02f,
+9.71637070e-02f,-1.03283547e-01f,+1.83349773e-02f,+4.46797572e-02f,-1.10247405e-02f,
+2.69037741e-03f,+8.80359784e-02f,-6.51650280e-02f,+4.42370698e-02f,+1.02928862e-01f,
-7.65787959e-02f,+5.40942959e-02f,+1.04339607e-01f,-8.37170482e-02f,-8.20373185e-03f,
-9.07145720e-03f,-9.78748798e-02f,+1.20740458e-02f,+3.39085720e-02f,-4.37759906e-02f,
-2.88542453e-02f,-7.90303722e-02f,-3.10071278e-02f,-9.47158262e-02f,+1.76154282e-02f,
+3.74614932e-02f,-5.96739687e-02f,-9.59420204e-03f,-1.45453690e-02f,+6.21517077e-02f,
-6.56325817e-02f,+8.03075656e-02f,-2.37771571e-02f,-2.49877758e-02f,-6.49168789e-02f,
+5.33508770e-02f,-3.55873965e-02f,+6.30447865e-02f,+9.29510221e-02f,+2.99601648e-02f,
+7.81755969e-02f,-2.76518315e-02f,+5.90820983e-02f,-3.11077805e-03f,+3.07328068e-02f,
-3.76955755e-02f,-8.05066433e-03f,+4.49365526e-02f,-6.68182224e-02f,-1.88009646e-02f,
-6.88806027e-02f,-2.32697539e-02f,+2.33365335e-02f,-6.56998307e-02f,+1.06861338e-01f,
+5.70600256e-02f,-3.01856603e-02f,+1.64850149e-02f,-8.19217041e-03f,-3.25098634e-03f,
-9.99483466e-02f,-7.35253766e-02f,-3.04088034e-02f,+9.15324390e-02f,+8.23040679e-03f,
-1.02006316e-01f,-3.56418565e-02f,+8.40734318e-03f,-2.75340043e-02f,+3.59823518e-02f,
+6.28117770e-02f,-3.67459916e-02f,-9.19087008e-02f,-5.59252016e-02f,+7.59271905e-02f,
+5.48095256e-02f,+6.60668612e-02f,+1.90748535e-02f,+1.00518882e-01f,+4.70348373e-02f,
-1.06597818e-01f,+5.51576763e-02f,+1.16485413e-02f,-3.15443911e-02f,-7.92535171e-02f,
-4.31479402e-02f,+1.08073754e-02f,-6.64770454e-02f,+4.67675887e-02f,-6.11678362e-02f,
+5.16328402e-02f,+3.77115086e-02f,+8.92837420e-02f,+7.74695203e-02f,-4.26609069e-02f,
-6.95369318e-02f,+9.56830475e-03f,+1.50244264e-02f,-1.07648700e-01f,-6.60181120e-02f,
-5.28350510e-02f,-9.23983082e-02f,+2.04981528e-02f,+1.07652575e-01f,+3.21603864e-02f,
-1.45277921e-02f,+5.73171712e-02f,+4.56395671e-02f,+4.14324701e-02f,+1.42274415e-02f,
+4.50481512e-02f,+5.75608537e-02f,-6.42550811e-02f,-2.54711881e-02f,+4.28313650e-02f,
+3.45021067e-03f,+5.62792383e-02f,-8.46326277e-02f,+4.37010750e-02f,+7.08238557e-02f,
-2.67332839e-03f,-1.30647151e-02f,+9.62862968e-02f,+3.54741886e-02f,+8.64074454e-02f,
-7.55680799e-02f,+9.99209285e-02f,-6.66086301e-02f,+4.99949008e-02f,+4.42357138e-02f,
-6.60982504e-02f,+2.57413555e-02f,-3.85729745e-02f,+4.56096195e-02f,-3.48757878e-02f,
-6.41419515e-02f,+7.29553699e-02f,-8.20187926e-02f,-1.12186231e-01f,-2.51013078e-02f,
+2.07709447e-02f,+2.69153342e-02f,+4.43019420e-02f,-9.66516063e-02f,-7.02939630e-02f,
+1.16023235e-02f,+9.26740244e-02f,+5.72213531e-03f,-2.29190234e-02f,+5.72584569e-02f,
-2.22967770e-02f,+3.47249769e-02f,+3.59139289e-03f,-2.89417952e-02f,+4.18448821e-03f,
-2.37659514e-02f,+5.66392653e-02f,-8.84231776e-02f,+7.25626871e-02f,+5.25142886e-02f,
-4.23839055e-02f,-9.37169269e-02f,+1.45386133e-04f,+2.74201203e-02f,+2.00065728e-02f,
-9.71062034e-02f,+1.05735958e-02f,+1.06348947e-01f,-7.35363066e-02f,+3.52971372e-03f,
-7.54544735e-02f,+1.40252700e-02f,+6.94176778e-02f,+9.21299383e-02f,+1.47937499e-02f,
-9.60012376e-02f,-9.24752355e-02f,-1.59974936e-02f,-1.33605469e-02f,-2.79282741e-02f,
+5.36060631e-02f,+8.12303275e-02f,+3.48862894e-02f,+8.51486623e-02f,+8.29550698e-02f,
+8.06572363e-02f,-5.87266162e-02f,+2.52770558e-02f,-1.93158146e-02f,+1.97934508e-02f,
+4.66243662e-02f,-8.70328918e-02f,+7.16311932e-02f,+3.84782776e-02f,-3.30438241e-02f,
-3.53240445e-02f,+5.06326929e-02f,+1.07659929e-01f,-5.66034764e-02f,+3.90076451e-02f,
+3.57394069e-02f,+6.95629045e-02f,-9.74759087e-03f,-8.38417038e-02f,+2.01837812e-02f,
+3.82178947e-02f,-3.30632349e-04f,+6.55106902e-02f,-7.78930336e-02f,-8.62282440e-02f,
+6.83472678e-02f,-3.13826129e-02f,+1.86446011e-02f,+4.68609668e-02f,-4.30091396e-02f,
-8.84325728e-02f,+6.11006953e-02f,+2.88477801e-02f,-9.34991241e-02f,+2.16122046e-02f,
+2.46734060e-02f,+5.91954514e-02f,-4.09235470e-02f,-4.28508036e-02f,+2.62499263e-04f,
+5.20961955e-02f,-1.66870132e-02f,-7.07405210e-02f,+8.41104984e-02f,+8.12359378e-02f,
-8.49239007e-02f,-6.77307472e-02f,-3.59806754e-02f,-1.11722518e-02f,-6.67652935e-02f,
+7.60652199e-02f,-3.20486538e-02f,+7.25162169e-03f,+4.87478264e-02f,+5.95033467e-02f,
+6.12025037e-02f,+1.67844798e-02f,-6.19119890e-02f,-6.60255030e-02f,+3.75004448e-02f,
-3.53814289e-02f,-9.61265806e-03f,-1.12033198e-02f,+3.65808234e-03f,-1.09063148e-01f,
+2.51473244e-02f,+2.86156312e-02f,+5.72166070e-02f,+6.46326914e-02f,+8.30123108e-03f,
+7.45360507e-03f,-6.35787845e-02f,-6.72864839e-02f,+4.47600288e-03f,+5.78428619e-02f,
-4.48480248e-02f,+7.73718953e-02f,+5.48956394e-02f,+7.92953148e-02f,+5.47468998e-02f,
+6.09565340e-02f,+5.20063937e-03f,+6.81791082e-02f,-6.90586865e-03f,+1.11974031e-03f,
-1.47936419e-02f,-3.86327878e-02f,-2.81743631e-02f,-6.66275471e-02f,+5.01776263e-02f,
-6.22252934e-02f,-1.44986585e-02f,-1.14603341e-02f,-4.34323773e-02f,+2.19318792e-02f,
-8.83264095e-02f,-5.81269190e-02f,-8.52079019e-02f,+1.00768916e-01f,+9.36023667e-02f,
-9.00258124e-03f,-3.05016339e-02f,-3.91586572e-02f,+9.56082344e-03f,-3.38101313e-02f,
+5.26965186e-02f,+7.31815919e-02f,+7.23558664e-03f,-4.42446917e-02f,+6.40751794e-02f,
+9.89270434e-02f,+9.77868214e-02f,-7.63084814e-02f,-9.69340384e-04f,-9.65708718e-02f,
+8.51524100e-02f,+5.54136522e-02f,-3.18756141e-02f,+6.76515028e-02f,+5.70057817e-02f,
+6.24967366e-02f,+6.20313734e-02f,+2.54822206e-02f,-9.36644226e-02f,+4.30540890e-02f,
+1.05125979e-01f,+9.10790339e-02f,-9.80221704e-02f,+7.49827698e-02f,+7.62308910e-02f,
+4.05884311e-02f,+9.57906395e-02f,+3.51233259e-02f,+3.02844215e-02f,+4.77865748e-02f,
-5.37848286e-02f,+6.98456466e-02f,-8.60702470e-02f,-5.46835735e-02f,-3.05264667e-02f,
-3.85218374e-02f,-1.36991814e-02f,+9.43067372e-02f,+6.92057014e-02f,-8.99870992e-02f,
+6.04934692e-02f,-2.37939712e-02f,-5.44171929e-02f,-5.74290566e-02f,-3.67997922e-02f,
+9.63952839e-02f,-6.82932884e-02f,-5.03217243e-02f,-5.04538640e-02f,+1.59218218e-02f,
+1.00829385e-01f,-9.00919884e-02f,-1.54766226e-02f,+8.08383971e-02f,-1.94006879e-02f,
-6.35004491e-02f,+1.41607895e-02f,+3.94250676e-02f,-2.34925281e-02f,-7.19314516e-02f,
+1.00736082e-01f,+4.00387309e-02f,+4.46137935e-02f,+7.72175714e-02f,+6.75066486e-02f,
+5.68454340e-02f,+4.75951191e-03f,-4.59597260e-02f,-5.20845424e-05f,+6.29555732e-02f,
+7.31362626e-02f,+1.43162813e-02f,-5.33434935e-02f,-3.60274292e-03f,+3.54927666e-02f,
+6.50034025e-02f,-1.21717816e-02f,+8.80069807e-02f,-1.89167392e-02f,-6.87431917e-02f,
-1.69576537e-02f,+8.03544819e-02f,-1.74504649e-02f,+9.09027830e-02f,+1.04109503e-01f,
+4.25405912e-02f,-4.19194475e-02f,+3.56244966e-02f,-3.83063592e-02f,-3.33809108e-02f,
-2.80074067e-02f,-8.50617513e-02f,+1.03807691e-02f,-2.86948029e-02f,+1.91049371e-02f,
+2.40577832e-02f,+2.46199556e-02f,+1.70728881e-02f,+2.50684340e-02f,+6.17077090e-02f,
+1.33636268e-02f,+7.93043002e-02f,-1.06024016e-02f,+4.34296653e-02f,-1.01248644e-01f,
+3.91636696e-03f,-3.97578515e-02f,+4.70585972e-02f,-2.28938479e-02f,+6.71697930e-02f,
-4.48675789e-02f,-1.12472400e-02f,-5.44587970e-02f,+4.20123227e-02f,+2.26018224e-02f,
+7.66155720e-02f,-2.54210029e-02f,+2.70047784e-02f,+1.58323776e-02f,+4.47142944e-02f,
+1.44617623e-02f,-4.43923473e-03f,-9.61270705e-02f,+7.68815950e-02f,+1.05486229e-01f,
+4.33867685e-02f,-7.62056485e-02f,+9.43214670e-02f,+6.64637983e-02f,-8.48118737e-02f,
-1.62990242e-02f,-2.36573489e-03f,-1.44635625e-02f,-2.74553988e-02f,-9.45032686e-02f,
-1.77032501e-02f,+9.65169892e-02f,+3.88006456e-02f,+4.20418456e-02f,-1.31409531e-02f,
+3.43218893e-02f,+1.47339515e-02f,-3.22594941e-02f,+8.98415968e-02f,-3.45466807e-02f,
+1.27760731e-02f,-2.73807365e-02f,+7.02915266e-02f,+7.67099336e-02f,+1.83766801e-02f,
+9.43871886e-02f,-8.67529213e-02f,-1.76416931e-03f,-8.02794844e-02f,+7.04999268e-02f,
+1.26616731e-02f,+7.55890682e-02f,+2.12051794e-02f,-1.81465317e-02f,+3.05150319e-02f,
-3.58637385e-02f,+5.80068380e-02f,+6.44188076e-02f,-1.06316032e-02f,-6.37227520e-02f,
-4.76880632e-02f,+9.26720127e-02f,+4.47044112e-02f,-1.51642710e-02f,-6.72961101e-02f,
+2.47446429e-02f,-7.73409605e-02f,+1.99458078e-02f,-2.52661016e-02f,-4.49510179e-02f,
-4.17757034e-02f,-8.70739818e-02f,-9.83282551e-02f,-4.33201417e-02f,-3.92543003e-02f,
-3.13902013e-02f,+7.43550435e-02f,-2.36495733e-02f,-9.96884853e-02f,+3.17314304e-02f,
-6.19249754e-02f,-9.26601887e-02f,+1.25779957e-02f,-5.30514233e-02f,-3.51040736e-02f,
-1.09180883e-02f,-3.87165397e-02f,-2.09742859e-02f,-3.03069837e-02f,+4.40185070e-02f,
-6.80136457e-02f,+1.90909281e-02f,+9.75061432e-02f,+4.76257578e-02f,+5.13881482e-02f,
+8.13760757e-02f,+2.12042835e-02f,-5.59550747e-02f,-4.36955690e-02f,+5.84368370e-02f,
-3.68302949e-02f,+8.36355537e-02f,+5.60166351e-02f,-6.02549948e-02f,-2.60398816e-02f,
-7.36086220e-02f,+1.04461014e-02f,+3.62297222e-02f,-8.75349157e-03f,-7.20778480e-02f,
-1.02608740e-01f,+3.41724120e-02f,-1.14305094e-02f,+5.09388298e-02f,+7.72808418e-02f,
+8.65925252e-02f,+6.33050278e-02f,+5.06507754e-02f,-9.67971757e-02f,+8.28858390e-02f,
-8.80430732e-03f,-1.94634255e-02f,-7.96100125e-02f,-5.17609157e-03f,+6.00098111e-02f,
+8.36381167e-02f,+5.31505570e-02f,+5.74081652e-02f,-6.49929196e-02f,-3.04007493e-02f,
+7.39323813e-03f,+5.08706905e-02f,-5.89598715e-03f,+6.74181059e-02f,-1.22390157e-02f,
-3.43116671e-02f,+3.62077658e-03f,+2.79626139e-02f,-6.74505308e-02f,-1.95417255e-02f,
-1.70335993e-02f,+5.88734709e-02f,+6.42454177e-02f,+6.59742057e-02f,-2.64473036e-02f,
-1.41372904e-02f,-8.74267295e-02f,-3.07668261e-02f,-1.28675755e-02f,-9.66075994e-03f,
+3.07352860e-02f,+1.52566861e-02f,-2.37329919e-02f,+9.68839601e-02f,+7.66291469e-02f,
-7.37865865e-02f,-7.52118006e-02f,-1.64766926e-02f,-7.56965503e-02f,-8.65811184e-02f,
+1.02459013e-01f,-9.23452899e-02f,+7.02617764e-02f,-9.09929425e-02f,-8.18583369e-02f,
+3.06753907e-02f,+7.05528259e-02f,-9.83012281e-03f,-1.26606934e-02f,+7.54413828e-02f,
+8.43661055e-02f,+1.58377271e-03f,-2.60970742e-03f,+3.40772048e-02f,-7.13826790e-02f,
-5.83806038e-02f,+8.86564627e-02f,+8.62573013e-02f,-9.72029194e-02f,+1.62042938e-02f,
+6.70286864e-02f,+1.38707561e-02f,+3.88990641e-02f,+1.45216733e-02f,-5.55496849e-02f,
-4.91175316e-02f,-2.38910429e-02f,+1.29190832e-02f,-4.56943363e-03f,+9.38684344e-02f,
-6.35582358e-02f,+3.87318656e-02f,-6.53567910e-02f,+8.13243911e-02f,+9.71401259e-02f,
-2.05089375e-02f,+3.03276628e-03f,+7.65331089e-03f,-1.55668929e-02f,-6.60465360e-02f,
-2.07880884e-03f,+3.32707241e-02f,-4.09993678e-02f,-5.48135117e-02f,+7.05779865e-02f,
+6.51615933e-02f,-8.13188031e-02f,-4.55892086e-02f,-9.30681601e-02f,+5.96919730e-02f,
-6.54312596e-02f,+2.72879824e-02f,-3.14162821e-02f,+6.74543753e-02f,-3.34967449e-02f,
+1.97137967e-02f,-7.47260973e-02f,-1.70473754e-02f,+6.60921112e-02f,-7.69499093e-02f,
-2.97204927e-02f,+7.70183131e-02f,+1.63681433e-02f,+2.80042700e-02f,+9.74476486e-02f,
-4.15798128e-02f,-4.72532734e-02f,-1.35223707e-02f,-9.98788401e-02f,-4.39561158e-03f,
-5.54310791e-02f,+8.17885548e-02f,+6.58593187e-03f,+1.20473310e-01f,-6.87386468e-02f,
+1.31114600e-02f,+1.03344299e-01f,+5.90063110e-02f,-7.72147328e-02f,+4.60546464e-02f,
+6.43360242e-02f,-5.60791306e-02f,+5.50532416e-02f,-7.09395185e-02f,-1.15051530e-02f,
-1.96550190e-02f,+2.22399309e-02f,-4.18404043e-02f,-2.88878903e-02f,-1.16263680e-01f,
-3.07111219e-02f,+2.17011347e-02f,+8.31170902e-02f,-8.17877799e-03f,+1.32845417e-02f,
-2.37119906e-02f,-1.04451478e-01f,+9.33605731e-02f,+6.21636733e-02f,-9.97086763e-02f,
+7.01125935e-02f,-5.38345315e-02f,+4.76025194e-02f,+7.17483982e-02f,+6.59489632e-03f,
-4.57109790e-03f,-1.35470508e-02f,+2.10663211e-02f,-4.67189178e-02f,-8.02116748e-03f,
-7.45565891e-02f,+1.76261447e-03f,+3.70461121e-02f,+2.47909985e-02f,-7.67693743e-02f,
-8.48503932e-02f,+3.18463705e-03f,-9.17313322e-02f,+1.54094500e-02f,+1.69705618e-02f,
+1.28997611e-02f,-7.84918293e-02f,+1.06548846e-01f,+8.46983120e-03f,+4.05948162e-02f,
+8.44575241e-02f,+4.56505641e-02f,+3.63228619e-02f,+5.41600958e-02f,+1.06933033e-02f,
+6.62527606e-02f,-7.47220069e-02f,-8.90982673e-02f,-2.52479240e-02f,+8.87668729e-02f,
+2.47029811e-02f,-2.91738510e-02f,-6.74932301e-02f,+1.17622586e-02f,-1.84373818e-02f,
+7.90359005e-02f,-3.44337299e-02f,-3.78552899e-02f,+2.37100050e-02f,-1.03353336e-02f,
-4.45629843e-02f,-3.30628455e-02f,+1.08893357e-01f,+6.01653531e-02f,+8.17378759e-02f,
+3.72844003e-02f,-2.83715650e-02f,-2.50347536e-02f,-4.77778241e-02f,-4.41961028e-02f,
-9.15808082e-02f,+6.23335876e-02f,-5.36532328e-02f,+7.78667629e-02f,+3.59018669e-02f,
+9.83273536e-02f,+9.11102965e-02f,-7.54786730e-02f,-8.44171345e-02f,+1.24949282e-02f,
+3.64600010e-02f,+3.27398330e-02f,-4.68089171e-02f,+1.69479207e-03f,+4.89585400e-02f,
+2.13961899e-02f,-8.21134746e-02f,+2.71488801e-02f,+9.63196531e-03f,+4.36053835e-02f,
+9.56511497e-02f,+4.00381759e-02f,+7.62604773e-02f,-2.76582614e-02f,-7.84793198e-02f,
+3.94009193e-03f,-8.97029713e-02f,-4.18646634e-02f,+4.33660373e-02f,+6.94353506e-02f,
+2.66913027e-02f,+9.76643637e-02f,-3.86468098e-02f,-6.71778619e-02f,+2.45265439e-02f,
+2.04865690e-02f,-8.91443044e-02f,+1.30037814e-02f,+4.63895500e-04f,+3.57209072e-02f,
+2.96713933e-02f,-6.81623518e-02f,-2.52118260e-02f,+2.27755830e-02f,+6.17786422e-02f,
-9.69239622e-02f,+3.25099602e-02f,-1.51185244e-02f,-2.71194428e-03f,-3.54789570e-02f,
-7.56557882e-02f,-6.95720762e-02f,+7.42908493e-02f,-7.26440549e-02f,-6.06300868e-02f,
-1.02163859e-01f,-3.36272940e-02f,+9.87887606e-02f,-7.52647370e-02f,-9.41670984e-02f,
+5.90678081e-02f,+3.91060859e-03f,-9.87529531e-02f,+7.67401084e-02f,-1.00331604e-02f,
-6.88527077e-02f,+1.04449764e-02f,+5.65997437e-02f,-1.65560097e-02f,-6.31396919e-02f,
+1.90725978e-02f,+7.18106031e-02f,+1.04750425e-01f,+7.09192464e-05f,+1.66961458e-02f,
+6.47514919e-03f,+6.22088052e-02f,+8.40182826e-02f,+9.78607312e-02f,-5.11824824e-02f,
+9.32227820e-02f,+3.24587375e-02f,-5.14324978e-02f,+6.75881207e-02f,+1.05439894e-01f,
+9.87135619e-03f,-6.28396496e-02f,-3.08136716e-02f,-7.99855031e-03f,+2.51342393e-02f,
-3.32954153e-02f,+4.23884280e-02f,-9.78589132e-02f,-9.10140295e-03f,-8.39301497e-02f,
+9.45343226e-02f,-6.40003309e-02f,+5.89616671e-02f,+6.00478575e-02f,+7.72140920e-02f,
+5.25964871e-02f,+8.62745866e-02f,+2.11858675e-02f,+8.23607966e-02f,+1.44197866e-02f,
+6.51901141e-02f,-2.34312043e-02f,+4.64555845e-02f,+4.21177372e-02f,+4.08538431e-03f,
+9.42994654e-03f,+1.67933553e-02f,-1.73401535e-02f,-6.81549907e-02f,-2.26254761e-03f,
+4.50806245e-02f,-1.86941028e-03f,-5.80799952e-02f,+7.66166374e-02f,+8.40417966e-02f,
+6.69640377e-02f,-2.84521431e-02f,+9.66913179e-02f,-5.02557307e-03f,-5.33823334e-02f,
-1.03504196e-01f,-2.54046023e-02f,+1.45520419e-02f,-5.24814576e-02f,-4.29563895e-02f,
-2.27592587e-02f,-7.36273080e-02f,+6.61264062e-02f,-1.07685611e-01f,-7.94576555e-02f,
+1.50491800e-02f,+4.82593961e-02f,-4.39610630e-02f,+1.67183597e-02f,+7.94420019e-02f,
+5.10290600e-02f,-2.58384682e-02f,-7.38829747e-02f,+4.22579870e-02f,-4.27341759e-02f,
+1.09670367e-02f,+2.05790848e-02f,-3.14696021e-02f,-2.59781107e-02f,+7.98502937e-02f,
+8.24908242e-02f,+4.29866537e-02f,-5.23657240e-02f,-9.88993421e-02f,-1.25845168e-02f,
-7.05927387e-02f,+1.83671117e-02f,-2.75911782e-02f,+2.15995051e-02f,-8.71154293e-02f,
+3.13214995e-02f,+3.98035012e-02f,+6.85092853e-03f,-2.89140176e-02f,-6.03141375e-02f,
+2.47200169e-02f,+8.86919200e-02f,-1.60399936e-02f,+2.02440238e-03f,+8.97378661e-03f,
-1.10072948e-01f,+5.88173531e-02f,+1.00051370e-02f,-5.60217872e-02f,+5.94112165e-02f,
+3.81838577e-03f,-2.79274322e-02f,-7.19062015e-02f,+8.68822187e-02f,+5.58657981e-02f,
+6.48329407e-02f,-1.64496973e-02f,-8.68379474e-02f,-6.93459213e-02f,+9.90143567e-02f,
+8.04592371e-02f,+1.14856008e-02f,+7.72722214e-02f,+3.06534152e-02f,-7.72306100e-02f,
+3.74316610e-02f,+8.36324766e-02f,-9.21256840e-02f,-4.50264551e-02f,-7.71789327e-02f,
+5.63752577e-02f,-7.10417628e-02f,-9.71746743e-02f,+4.86999676e-02f,+8.72046575e-02f,
-3.60820144e-02f,+6.42419830e-02f,-2.90654600e-04f,-9.51471478e-02f,+6.38329461e-02f,
-4.88164797e-02f,+8.66483673e-02f,-1.44456998e-02f,-2.15724632e-02f,+8.67386684e-02f,
-9.22591761e-02f,+3.41747031e-02f,-5.87894991e-02f,+1.04810297e-02f,+6.16577044e-02f,
+9.07160342e-04f,-3.33016142e-02f,-9.53772292e-02f,+8.55411217e-02f,-4.00949344e-02f,
+3.56512517e-03f,+8.78266990e-04f,-5.52298091e-02f,-4.35232446e-02f,+8.46291557e-02f,
+8.74220580e-03f,-7.06841573e-02f,-4.00776416e-03f,+2.59612184e-02f,+5.25000244e-02f,
-2.73364130e-02f,-9.56878066e-02f,-2.70027481e-02f,-4.45368886e-02f,-4.02704552e-02f,
-6.75242245e-02f,+2.32539009e-02f,+6.59997910e-02f,-9.26929340e-02f,-3.01258601e-02f,
+3.94480713e-02f,-4.75632260e-03f,-7.12829158e-02f,+7.47739971e-02f,+5.00897206e-02f,
-9.89497378e-02f,-9.32696909e-02f,+9.78894532e-04f,-7.42022842e-02f,+7.96261057e-02f,
+9.62181464e-02f,+6.76693693e-02f,-6.66072965e-02f,-4.24420871e-02f,+4.31067571e-02f,
+2.81958971e-02f,-2.92580035e-02f,+5.31035960e-02f,+8.13234299e-02f,-9.91892740e-02f,
-2.31849663e-02f,+2.75337398e-02f,+5.45014106e-02f,+5.57485223e-03f,-4.49862145e-03f,
-3.14705633e-02f,+1.04485579e-01f,-8.35973322e-02f,+9.91202965e-02f,+4.10755537e-02f,
+1.54987229e-02f,+1.85657237e-02f,-6.41325712e-02f,-1.56375319e-02f,-8.83823186e-02f,
+5.83357438e-02f,+5.17205670e-02f,+1.45271793e-02f,+3.83313075e-02f,+5.16829416e-02f,
-6.22992925e-02f,-6.71398640e-02f,+7.12310523e-03f,+4.41399217e-02f,-3.59855667e-02f,
+6.14244193e-02f,-7.23406300e-02f,+1.27070080e-02f,-9.98465344e-02f,+9.79124829e-02f,
-7.03495294e-02f,-7.41123706e-02f,+8.50026682e-02f,+5.06340899e-02f,-2.37223394e-02f,
-1.62709225e-02f,-4.04560119e-02f,-6.37433007e-02f,-4.81903069e-02f,+4.59923260e-02f,
+1.01492070e-01f,+7.54677653e-02f,+9.63419527e-02f,-5.08366637e-02f,+3.72429788e-02f,
+2.21489370e-03f,+4.61412743e-02f,+2.74148807e-02f,-4.06470299e-02f,-4.89904024e-02f,
+8.99053141e-02f,-8.31414610e-02f,-2.64191977e-03f,-3.25708017e-02f,+7.95983747e-02f,
+8.17029551e-02f,+2.60803103e-03f,+4.31731343e-02f,-1.02860086e-01f,-9.20351967e-03f,
-4.10068184e-02f,-2.27848478e-02f,-9.06515270e-02f,+2.52323542e-02f,+5.51529974e-02f,
-7.35969022e-02f,-6.61293864e-02f,-4.66598347e-02f,-9.86128580e-03f,-2.78378446e-02f,
-5.18034399e-02f,-1.03732899e-01f,-5.54777496e-02f,-4.50775400e-02f,-1.08170569e-01f,
+4.53068502e-03f,-7.13918507e-02f,-7.17565417e-02f,-6.44770339e-02f,-6.17676240e-04f,
+1.00929387e-01f,+5.62549606e-02f,-3.46311275e-03f,-4.22723517e-02f,-9.29392353e-02f,
+7.20192268e-02f,+4.22669910e-02f,+2.50263177e-02f,-8.23791921e-02f,+2.79845949e-03f,
+7.91218728e-02f,-1.04587544e-02f,-1.07933246e-01f,-4.24805358e-02f,-4.68006916e-02f,
-8.32171440e-02f,-9.83582512e-02f,+3.98022011e-02f,+5.79414815e-02f,-6.48475811e-02f,
+5.02744317e-02f,-4.33042571e-02f,-8.72461498e-02f,-1.02520578e-01f,-6.79258928e-02f,
-8.44532624e-03f,+4.79781069e-02f,-1.84006728e-02f,-6.31652847e-02f,-9.58304331e-02f,
+1.16863037e-02f,+6.21234700e-02f,+7.27427974e-02f,+5.00254557e-02f,-5.07831648e-02f,
-2.71875560e-02f,+2.97879218e-03f,-1.94398463e-02f,+7.12881386e-02f,-9.35740024e-02f,
-3.78968194e-02f,+3.11843511e-02f,-2.70551760e-02f,+1.28429718e-02f,-8.69013518e-02f,
+1.65279228e-02f,+7.85654634e-02f,+3.60679775e-02f,-2.02894565e-02f,+2.10202839e-02f,
+6.74513727e-02f,-2.21023727e-02f,-1.09427916e-02f,-6.70712367e-02f,-5.70230186e-03f,
-1.05413586e-01f,+7.91151375e-02f,+3.01353969e-02f,+5.36963865e-02f,+1.48804970e-02f,
-7.68938512e-02f,-8.01126380e-03f,-5.99175729e-02f,+1.98495127e-02f,+1.03168167e-01f,
+9.13741216e-02f,-6.59958124e-02f,+8.50289240e-02f,-1.00072399e-01f,-1.03151351e-02f,
-2.09728833e-02f,-6.95259795e-02f,-3.57834809e-02f,+2.27222666e-02f,-8.91756415e-02f,
-2.99346913e-02f,+8.43000859e-02f,+8.47376734e-02f,+3.82929319e-03f,+7.78449029e-02f,
-9.30583552e-02f,+2.64736339e-02f,+6.34542406e-02f,+1.79973915e-02f,+9.45739150e-02f,
+1.01832552e-02f,+8.99376646e-02f,+7.34576061e-02f,-3.49778645e-02f,+4.79741022e-02f,
+1.53895505e-02f,-9.31272581e-02f,-9.73488837e-02f,-1.07260004e-01f,+1.25869680e-02f,
-1.00448638e-01f,-7.87788630e-02f,+7.76936114e-03f,+9.92895514e-02f,-9.40885469e-02f,
+7.15152174e-02f,-3.41100618e-02f,+5.31923771e-02f,-5.74040674e-02f,-4.26567793e-02f,
+8.51962417e-02f,-1.02305096e-02f,-2.47918256e-02f,-1.70574598e-02f,-7.96300322e-02f,
+7.06563666e-02f,-3.83301862e-02f,-2.03054026e-02f,-4.46340181e-02f,-1.03695780e-01f,
+1.81788858e-02f,-3.52471992e-02f,+3.73232402e-02f,+9.31444112e-04f,+3.24524157e-02f,
+3.59513843e-03f,-8.77338499e-02f,+5.36220744e-02f,-6.90608472e-02f,-7.55657703e-02f,
-5.42642549e-02f,-4.71822098e-02f,+3.38290334e-02f,+1.03762466e-02f,+8.71629491e-02f,
-5.35974726e-02f,-6.29965961e-02f,-5.33956848e-02f,-9.10781026e-02f,+6.45959228e-02f,
+5.92839764e-03f,+6.83057904e-02f,+2.09045466e-02f,+9.23212841e-02f,-1.36787435e-02f,
+5.40956408e-02f,+1.12065256e-01f,+5.94681352e-02f,-4.19154912e-02f,+3.69998924e-02f,
-1.09267838e-01f,-6.55740798e-02f,-5.52325547e-02f,-4.43574227e-02f,+1.21492902e-02f,
-9.79184657e-02f,+9.59112197e-02f,+1.85883325e-02f,+6.00124104e-03f,+1.33965882e-02f,
+6.06789738e-02f,-7.16756657e-02f,+9.00128931e-02f,+4.46312688e-02f,+8.08462426e-02f,
+8.54755342e-02f,-1.21028796e-02f,+5.79280630e-02f,-6.29369169e-03f,-9.83624011e-02f,
+8.20367336e-02f,-3.01654097e-02f,+5.17911166e-02f,+9.23757777e-02f,-7.37771243e-02f,
+7.18631074e-02f,-8.77960399e-02f,-2.04636296e-03f,+1.01850145e-01f,-4.35420945e-02f,
-4.56598625e-02f,+1.67432558e-02f,+5.39991297e-02f,+6.33578449e-02f,+5.91568975e-03f,
+1.11377627e-01f,+9.19441506e-02f,-1.87650695e-02f,-3.34822051e-02f,-3.22484747e-02f,
-8.54483321e-02f,-9.89075229e-02f,+2.09583733e-02f,-3.32651287e-02f,-1.01162307e-01f,
-1.02567375e-02f,-1.02841876e-01f,-9.58660245e-03f,+1.00000016e-01f,+2.25988925e-02f,
+3.17093357e-02f,+1.71171296e-02f,-3.43471058e-02f,+8.89216140e-02f,-1.42980581e-02f,
-5.29332608e-02f,-1.79160871e-02f,+1.21378303e-01f,-5.04627749e-02f,+3.13555412e-02f,
-1.01839043e-02f,-7.17460960e-02f,+2.21876018e-02f,+5.38146636e-03f,-4.80746590e-02f,
-2.56311186e-02f,-9.61606205e-02f,-8.49891528e-02f,+9.19939205e-02f,-8.69707689e-02f,
-1.37542263e-02f,+6.14940263e-02f,-9.52144116e-02f,+3.78307290e-02f,+3.26120891e-02f,
+8.88803825e-02f,+5.29964082e-03f,+2.69045662e-02f,+1.01692425e-02f,+4.78188507e-02f,
-3.92718315e-02f,-7.97105283e-02f,-1.00979291e-01f,-5.46285957e-02f,+7.51423975e-03f,
-1.73493214e-02f,-9.73993763e-02f,-5.27890958e-02f,+6.39138594e-02f,-4.02359031e-02f,
-8.59108865e-02f,-1.88727491e-02f,-4.40970585e-02f,-5.83423413e-02f,-5.36749922e-02f,
-2.14074552e-02f,+1.22289062e-02f,-2.33142972e-02f,+2.01881900e-02f,+6.05045930e-02f,
+6.18911311e-02f,-4.22772765e-03f,+1.57169551e-02f,+3.25187966e-02f,-1.03818640e-01f,
-8.88317972e-02f,-7.31834173e-02f,+6.57504573e-02f,-2.19538584e-02f,-5.24108112e-03f,
+5.14154807e-02f,-4.66911756e-02f,+9.82627645e-02f,-3.42519209e-02f,-4.36259545e-02f,
-7.75715262e-02f,-6.61960989e-02f,-7.52899200e-02f,-2.69036368e-02f,-9.43222642e-02f,
-6.41114563e-02f,-8.64048451e-02f,+2.83337161e-02f,-1.20269880e-02f,+4.51951399e-02f,
+6.48954734e-02f,+3.71610746e-02f,+7.30439872e-02f,+8.64997059e-02f,-1.04951911e-01f,
+7.68596679e-02f,-1.24852778e-02f,-5.67003563e-02f,-1.10631131e-01f,-5.36620170e-02f,
+7.74142072e-02f,+8.62918869e-02f,+8.15181062e-02f,-5.68863116e-02f,+6.96157068e-02f,
-6.29051449e-03f,+9.75538567e-02f,-3.21629383e-02f,-6.48164675e-02f,-1.02337904e-01f,
-7.53535330e-02f,+5.00343964e-02f,-9.39289201e-03f,+7.95155484e-03f,-2.88170371e-02f,
-9.32890698e-02f,+5.30356690e-02f,+5.28625436e-02f,+1.77078657e-02f,-7.98393786e-02f,
+8.16077515e-02f,-6.72167167e-02f,-1.33204600e-02f,+1.03092622e-02f,+7.39651397e-02f,
-9.43345726e-02f,+2.25760918e-02f,-6.89103156e-02f,-2.30905563e-02f,+3.26759517e-02f,
+8.85586515e-02f,+2.60667503e-02f,+7.97617212e-02f,+3.99570204e-02f,-8.27794448e-02f,
-1.00089416e-01f,-6.38726205e-02f,-1.03136465e-01f,-2.62926379e-03f,-6.25896379e-02f,
-1.28431646e-02f,-9.39915702e-02f,+3.55647542e-02f,-9.65487733e-02f,+2.14373227e-02f,
-3.57298404e-02f,+8.04620385e-02f,+1.18907643e-02f,-8.18176102e-03f,+8.99403170e-02f,
-6.67501092e-02f,+1.04650669e-02f,-2.42844075e-02f,+3.60013470e-02f,-2.05529220e-02f,
-2.82656401e-02f,-8.15008581e-02f,-9.60469022e-02f,-7.46494299e-03f,-2.98932679e-02f,
+1.02854632e-01f,-1.90056860e-02f,+2.96335369e-02f,+6.65652901e-02f,+3.27113271e-02f,
+5.26975282e-02f,+1.00583889e-01f,-1.12568341e-01f,+1.96996909e-02f,-8.25009421e-02f,
-2.38032825e-02f,-8.76906887e-02f,+2.15287060e-02f,+7.03997090e-02f,-4.67088185e-02f,
+1.67919770e-02f,-8.58729556e-02f,-5.76239787e-02f,+7.34270886e-02f,-6.92951083e-02f,
+6.56754747e-02f,+4.06930782e-02f,-8.86384845e-02f,-9.31084214e-04f,-7.48771578e-02f,
+1.09267244e-02f,-2.73573566e-02f,+8.32609832e-02f,-3.32786255e-02f,+1.08040136e-03f,
+6.98085949e-02f,-1.04709290e-01f,-6.31762156e-03f,+3.28304842e-02f,-7.75279477e-02f,
-7.86630809e-02f,+6.61556497e-02f,-9.84246135e-02f,+8.34730119e-02f,+2.69158673e-03f,
+4.87818047e-02f,-2.64585558e-02f,+8.44960362e-02f,+3.18385847e-02f,+5.68249896e-02f,
+5.64810559e-02f,-1.57691259e-02f,+7.71915913e-03f,+2.04496551e-03f,+8.28840118e-03f,
-1.04306541e-01f,-5.32423817e-02f,-8.32040906e-02f,-1.00366741e-01f,+6.71376195e-03f,
+8.88732970e-02f,+4.47523594e-02f,+2.19893781e-03f,+5.41379191e-02f,+7.79078156e-02f,
+1.04608275e-02f,-2.57989932e-02f,-6.06487282e-02f,+7.55537376e-02f,+8.42351541e-02f,
+9.78605598e-02f,-5.79506950e-03f,+9.53928679e-02f,-9.00223628e-02f,-1.47266127e-02f,
-8.30429792e-02f,+7.54615813e-02f,+1.75954960e-02f,-7.04521909e-02f,+7.45036304e-02f,
+3.94460261e-02f,-3.57039385e-02f,-4.56229374e-02f,-5.71589321e-02f,+4.82043996e-02f,
+3.81853431e-02f,+2.00993009e-02f,+3.85577455e-02f,-1.11758364e-02f,-6.51222020e-02f,
+1.51139246e-02f,-3.74930203e-02f,+1.64946914e-02f,+1.54501759e-02f,-8.59917104e-02f,
+6.02364913e-02f,+8.25181529e-02f,-1.02753863e-02f,+4.20026109e-02f,+3.28582898e-02f,
+2.90123597e-02f,+8.30297470e-02f,+1.12804614e-01f,-5.17233051e-02f,-5.15021086e-02f,
-8.56627598e-02f,-5.33708325e-03f,+7.23306537e-02f,-4.48088460e-02f,+4.40390315e-03f,
+8.94879922e-02f,+8.01018625e-03f,-9.75290984e-02f,-3.04272473e-02f,+3.69285867e-02f,
+6.48286268e-02f,-7.31928647e-03f,-7.28958845e-02f,-7.19053298e-02f,+2.65888199e-02f,
+8.49184319e-02f,+5.35490736e-02f,+6.35869727e-02f,+1.10353164e-01f,-6.19591624e-02f,
+1.90907568e-02f,-6.25142679e-02f,-8.82225707e-02f,-8.92383754e-02f,-4.99617793e-02f,
+9.01141763e-02f,+8.49563926e-02f,+4.88005057e-02f,-4.03038971e-02f,+7.95967504e-02f,
-8.66530091e-03f,-6.80469489e-03f,+1.10694417e-03f,+4.09563305e-03f,+2.78909598e-02f,
-7.78211579e-02f,-9.30117592e-02f,-5.50460108e-02f,-8.15987140e-02f,+7.64995860e-03f,
-5.56089804e-02f,-3.62892672e-02f,-5.37269972e-02f,-9.76759046e-02f,+6.88690841e-02f,
+1.04246465e-02f,+5.52314259e-02f,+1.59246698e-02f,-6.24259301e-02f,+4.11930569e-02f,
+7.77262375e-02f,-8.64234101e-03f,+4.32694480e-02f,-8.51825029e-02f,-7.14264512e-02f,
-2.08693426e-02f,+4.76905592e-02f,-5.90939485e-02f,-2.09286492e-02f,+6.19001053e-02f,
+6.16492108e-02f,-1.31604671e-02f,-6.18636981e-02f,-8.55169967e-02f,+5.55885956e-02f,
+4.97599095e-02f,+7.71603808e-02f,+7.94325769e-02f,-5.82516752e-02f,-3.78766796e-03f,
-5.61879203e-02f,-7.95523822e-02f,+9.51578692e-02f,-1.02531433e-01f,+6.13060705e-02f,
+8.41479823e-02f,+6.48037568e-02f,-6.40284941e-02f,-7.59831667e-02f,+4.30376455e-02f,
-2.73176432e-02f,-1.59520246e-02f,+3.51188965e-02f,+8.90366137e-02f,+5.50397635e-02f,
+1.19894091e-02f,+1.41241141e-02f,+1.01811513e-01f,+1.16900830e-02f,+7.61769563e-02f,
-9.67009142e-02f,-1.03530414e-01f,+4.97528650e-02f,-5.69118699e-03f,-7.75378139e-04f,
-9.59539190e-02f,+8.56919438e-02f,+1.96187142e-02f,-6.25166222e-02f,+1.04744593e-03f,
-2.34501436e-02f,+7.96077214e-03f,+5.17135337e-02f,-2.66100820e-02f,-3.92950140e-02f,
+4.91828248e-02f,+2.66201906e-02f,-2.87223682e-02f,+2.62795817e-02f,-4.38565873e-02f,
+8.47739279e-02f,+8.32283646e-02f,+8.86216760e-03f,-7.28600919e-02f,-7.47652724e-02f,
-5.03810421e-02f,-8.97470936e-02f,+9.34554115e-02f,+2.88317613e-02f,+8.66492465e-02f,
+5.88344708e-02f,+5.41760251e-02f,-9.36159641e-02f,-7.35952854e-02f,+6.23511449e-02f,
-2.62240022e-02f,-7.63960928e-03f,-3.15111056e-02f,+9.66369137e-02f,-3.88747901e-02f,
-3.29449624e-02f,+1.03213288e-01f,+1.83417127e-02f,+1.28900558e-02f,+3.17385867e-02f,
-4.40367684e-02f,-9.45370197e-02f,-5.78320324e-02f,-7.33880624e-02f,+7.27744028e-02f,
+1.06021687e-02f,-6.05134293e-02f,-8.39840472e-02f,+7.98928067e-02f,+7.59566054e-02f,
-4.92590442e-02f,-5.24762757e-02f,+1.39523074e-02f,-1.03918545e-01f,-3.33607048e-02f,
+7.24788681e-02f,-1.77338198e-02f,+6.89172447e-02f,+8.50964636e-02f,-4.00451906e-02f,
+8.84035230e-02f,+5.76543510e-02f,-5.36893168e-03f,-3.79527807e-02f,-2.57065948e-02f,
+8.47207904e-02f,-9.16932747e-02f,+6.95700273e-02f,-8.49515870e-02f,+2.55608764e-02f,
+4.92051318e-02f,-7.93564990e-02f,-8.67264718e-03f,+9.31883901e-02f,+3.06725726e-02f,
+3.97875346e-02f,+9.65313688e-02f,+5.78030422e-02f,+9.99749079e-02f,+3.90035883e-02f,
-7.74352849e-02f,-6.82078004e-02f,-9.42463353e-02f,-3.38179991e-02f,-5.03701307e-02f,
+6.32451847e-02f,+1.30893309e-02f,-5.03853485e-02f,-3.89901251e-02f,+8.27199072e-02f,
-3.36230248e-02f,+6.15154579e-03f,-4.80419025e-02f,-5.87134585e-02f,+4.64636721e-02f,
-4.61119600e-02f,+9.37422290e-02f,+9.77459326e-02f,-8.46493170e-02f,+7.78698325e-02f,
-1.11410677e-01f,-9.80722308e-02f,-2.50912402e-02f,-1.04855694e-01f,-4.24052728e-03f,
+2.58623958e-02f,-8.60238522e-02f,-3.23307253e-02f,+4.58701476e-02f,+6.04640227e-03f,
+8.43364839e-03f,-9.17556956e-02f,+6.97879726e-03f,-1.07250132e-01f,+7.84609988e-02f,
+9.13699865e-02f,-5.80823123e-02f,-1.92990480e-03f,-3.94466892e-02f,+5.98631799e-02f,
-9.55964103e-02f,-8.28534588e-02f,+6.94754496e-02f,+6.44857213e-02f,+1.67188831e-02f,
-2.22627558e-02f,-6.00910559e-02f,-8.84983018e-02f,-4.52581160e-02f,-3.28244157e-02f,
+7.12785199e-02f,-3.50780264e-02f,-8.18346348e-03f,+2.05170270e-02f,-8.84109735e-02f,
-3.87763008e-02f,+9.33147445e-02f,+8.13040808e-02f,+9.81056020e-02f,+1.21870358e-02f,
+9.46790650e-02f,+8.10895637e-02f,+1.95130799e-02f,+5.67675568e-02f,+1.30206412e-02f,
+9.72974114e-03f,-4.39767959e-03f,-8.53239521e-02f,+9.05051827e-02f,+9.76952538e-02f,
+8.37135687e-03f,+2.86650807e-02f,-8.12297761e-02f,-4.67042550e-02f,-9.39859599e-02f,
+3.67799811e-02f,-2.39059795e-02f,+1.92833375e-02f,-5.89637943e-02f,+9.78315920e-02f,
-5.13171926e-02f,+4.64363843e-02f,-8.82099420e-02f,+1.94200799e-02f,+2.04653759e-02f,
-7.16483146e-02f,+5.27176112e-02f,-7.16573969e-02f,+7.65416995e-02f,+5.66327423e-02f,
+7.11724982e-02f,+6.99435547e-02f,+3.59241888e-02f,-7.85470381e-02f,-7.16812685e-02f,
+8.42537284e-02f,-2.02550907e-02f,+2.48818528e-02f,-3.08687054e-02f,+1.32369921e-02f,
+2.30890252e-02f,-8.95273462e-02f,-6.71346160e-03f,+9.16071311e-02f,-3.53362262e-02f,
+4.35080901e-02f,+2.13703737e-02f,-7.65304789e-02f,+1.68617368e-02f,-5.58083355e-02f,
-4.95786928e-02f,+5.06892726e-02f,+8.67427662e-02f,+5.78444973e-02f,-8.77738222e-02f,
-6.63717836e-03f,-9.45113301e-02f,+7.19703063e-02f,-1.00069419e-02f,-6.62696362e-03f,
+3.02644596e-02f,-3.89205590e-02f,-8.49617720e-02f,-7.11643994e-02f,+3.18501815e-02f,
+8.81071612e-02f,+7.91962072e-02f,+4.94932309e-02f,+6.05468526e-02f,+4.19390202e-03f,
+1.92258656e-02f,+1.75568908e-02f,+4.49727550e-02f,+1.03505246e-01f,-6.90565705e-02f,
-5.09122163e-02f,-3.60768810e-02f,-8.19012970e-02f,-1.06990244e-02f,+1.62887331e-02f,
+3.81325036e-02f,-3.12938429e-02f,+1.65050440e-02f,+8.81717727e-02f,-1.10366203e-01f,
-4.25566249e-02f,+2.12316252e-02f,+2.59734225e-02f,-8.99365321e-02f,-7.97051266e-02f,
+5.45623675e-02f,-4.50856425e-02f,+2.01823488e-02f,+2.43055150e-02f,-1.59415007e-02f,
-2.61908732e-02f,-4.36542742e-02f,-6.45394400e-02f,-3.11768949e-02f,+9.93131753e-03f,
-6.54774299e-03f,+9.30873901e-02f,-7.43380561e-02f,+4.73527648e-02f,-9.43300277e-02f,
-3.26769948e-02f,-8.12383965e-02f,+4.43768576e-02f,+7.15775117e-02f,-7.01822340e-03f,
+2.65728161e-02f,-7.69768208e-02f,-9.60223079e-02f,-1.03926629e-01f,-7.40690455e-02f,
-4.56897914e-02f,+1.78361535e-02f,+5.80490381e-03f,+6.49075136e-02f,+3.43911350e-04f,
+7.63400123e-02f,+5.03127053e-02f,+9.92767736e-02f,-3.91087756e-02f,+8.63383636e-02f,
-5.51543385e-03f,-5.61013073e-03f,-5.57073280e-02f,-3.17245722e-04f,-5.47294803e-02f,
+8.06062445e-02f,-6.54144064e-02f,-3.65467891e-02f,-6.68363720e-02f,+5.89715019e-02f,
-1.90548226e-02f,-4.43369113e-02f,-4.09946069e-02f,+6.95095286e-02f,-4.94941846e-02f,
-1.03456847e-01f,+9.38633978e-02f,-1.10821664e-01f,-8.61350298e-02f,+7.39707351e-02f,
+1.06692031e-01f,-2.13944074e-02f,+8.84999111e-02f,+7.26376027e-02f,-2.04277653e-02f,
-9.82338935e-02f,-4.88104187e-02f,-9.59600210e-02f,-5.46546876e-02f,-2.94007976e-02f,
+8.70321784e-03f,+6.88757896e-02f,+2.08343416e-02f,-2.11413205e-02f,-7.43031874e-02f,
-5.06867394e-02f,-3.54073942e-03f,-3.09657473e-02f,-4.63212729e-02f,-8.18528235e-02f,
+3.10705770e-02f,+9.38187838e-02f,+4.49165292e-02f,-1.19683733e-02f,+2.72414126e-02f,
+5.69319949e-02f,-6.41373172e-02f,+9.88078192e-02f,+1.65831894e-02f,-1.03255942e-01f,
-4.89398763e-02f,-9.88447219e-02f,-8.48719999e-02f,-3.46847139e-02f,+7.99068287e-02f,
-2.69152131e-02f,+7.33058974e-02f,+3.85254025e-02f,+9.52049997e-03f,+1.00076795e-02f,
-1.51450392e-02f,-1.04164727e-01f,-5.15971445e-02f,-1.64825395e-02f,-2.59941462e-02f,
+6.43693283e-02f,-7.92602003e-02f,-1.26201138e-02f,+6.02352805e-02f,+4.28236909e-02f,
-6.41270168e-03f,+1.70357116e-02f,-1.96573120e-02f,-5.70628382e-02f,-5.23466282e-02f,
-6.00725934e-02f,-3.53742018e-02f,+6.05331697e-02f,-3.59816626e-02f,+4.78667431e-02f,
+9.27687436e-03f,+7.75188953e-03f,+4.26727757e-02f,-6.41452521e-02f,+2.73103192e-02f,
+5.52611761e-02f,-2.67367512e-02f,+7.64876828e-02f,-4.88414466e-02f,+6.71440288e-02f,
+5.69643974e-02f,-7.04308152e-02f,-4.52834070e-02f,-5.76221310e-02f,+6.40587434e-02f,
-1.02765471e-01f,+7.33323302e-03f,-6.37464598e-02f,+9.34162512e-02f,-5.31277657e-02f,
+4.46067899e-02f,-6.07002974e-02f,+3.86756286e-02f,-3.60432342e-02f,+1.55964196e-02f,
-9.33098346e-02f,+1.04615308e-01f,+2.34445129e-02f,+1.13075972e-02f,-1.53489858e-02f,
+6.81828633e-02f,+5.75243272e-02f,-4.91395183e-02f,-4.64857742e-02f,+1.83619466e-02f,
-6.07582852e-02f,+1.57447215e-02f,+1.01830117e-01f,+9.43975523e-02f,+7.89888948e-03f,
+9.79128033e-02f,-5.83229475e-02f,-9.87920687e-02f,+2.18802821e-02f,-4.57006209e-02f,
-3.83267887e-02f,-4.50897515e-02f,+2.61363084e-03f,-9.26181152e-02f,-1.02002107e-01f,
-6.47394210e-02f,+4.66146097e-02f,+2.09594760e-02f,+1.24321524e-02f,-9.63628641e-04f,
-2.63324357e-03f,-7.94426054e-02f,+8.29351693e-03f,+1.49509506e-02f,+9.24121439e-02f,
-2.80310288e-02f,-2.72912644e-02f,-6.40938208e-02f,-9.70597714e-02f,-1.16612911e-02f,
-8.48567113e-02f,+9.71368402e-02f,+9.30872187e-02f,-1.79848652e-02f,-6.76486120e-02f,
-6.63203895e-02f,+9.13914964e-02f,-7.10169971e-02f,+7.91412964e-02f,-7.29409531e-02f,
-1.10033222e-01f,-3.80526371e-02f,-6.58212602e-02f,+7.49239847e-02f,+5.49300686e-02f,
-3.85693908e-02f,-4.70662825e-02f,-6.50710016e-02f,+8.11193660e-02f,-4.39567901e-02f,
+1.02545537e-01f,+1.48795769e-02f,-4.36845198e-02f,+5.74483648e-02f,+6.46063238e-02f,
-6.94568232e-02f,+1.07888021e-01f,+7.27036968e-02f,+2.50038486e-02f,-6.91901222e-02f,
-1.17912060e-02f,-3.53700742e-02f,-3.36604193e-02f,-6.40537962e-02f,-8.31700265e-02f,
-7.97535479e-02f,-9.60288122e-02f,+5.10947034e-02f,+3.79749909e-02f,-5.23564108e-02f,
-2.94667371e-02f,-1.66065190e-02f,+1.88871548e-02f,+3.15097384e-02f,+2.22486183e-02f,
+7.34231099e-02f,-8.66654217e-02f,-6.27215803e-02f,+6.34321943e-02f,-1.05532212e-02f,
+1.85624808e-02f,-7.36732036e-02f,-9.55465436e-02f,+5.40370569e-02f,-7.93471932e-03f,
+5.27602620e-02f,+7.91641176e-02f,+6.44635186e-02f,-7.54480064e-02f,-1.74664930e-02f,
-3.37767415e-02f,-7.35938773e-02f,-1.03086904e-02f,+8.49489309e-03f,-8.57090056e-02f,
-3.50891277e-02f,-9.75990593e-02f,+1.10885650e-01f,+6.86975494e-02f,+7.64035434e-02f,
+9.11969915e-02f,-1.07630104e-01f,+6.56210212e-03f,-9.50834379e-02f,-1.10524252e-01f,
+4.10055406e-02f,-5.34687489e-02f,-2.15537753e-02f,+1.37491086e-02f,+1.35239670e-02f,
+2.41482928e-02f,-1.01254515e-01f,+6.17244914e-02f,+1.47758815e-02f,-9.12401006e-02f,
+9.85529348e-02f,-4.74934988e-02f,+6.80220351e-02f,+7.14706676e-03f,+2.59380322e-02f,
+1.28738005e-02f,-3.11606959e-03f,-3.45947295e-02f,+5.64885214e-02f,+3.58201303e-02f,
-6.30190410e-03f,+8.07416663e-02f,-4.40920964e-02f,-2.74609793e-02f,+1.50535293e-02f,
-3.76687050e-02f,+8.86909217e-02f,+2.54689511e-02f,-6.40278161e-02f,+6.93586096e-02f,
-9.86075252e-02f,+9.55340937e-02f,-6.06778115e-02f,-8.76781121e-02f,-1.24567049e-02f,
-1.06856175e-01f,-1.84532721e-02f,-1.98303312e-02f,+8.43834653e-02f,+1.04919769e-01f,
+3.17952745e-02f,+1.65004153e-02f,+6.08499385e-02f,-5.43953329e-02f,+1.97816119e-02f,
-3.90107073e-02f,+4.32627834e-03f,+5.40448949e-02f,+8.19495842e-02f,+4.46221977e-02f,
+5.77103309e-02f,+4.73512411e-02f,+7.48660117e-02f,+3.21135856e-02f,-9.24149305e-02f,
+3.17597836e-02f,+4.14957777e-02f,+2.52152793e-02f,+6.89596459e-02f,-9.22005177e-02f,
+6.66915551e-02f,+5.95176294e-02f,-2.63025369e-02f,+5.37513830e-02f,-4.19451371e-02f,
-8.52533057e-02f,+8.22658464e-02f,+7.23154396e-02f,+4.41932380e-02f,-8.21030959e-02f,
+8.03132057e-02f,+1.51615143e-02f,+1.04104578e-02f,-8.05416182e-02f,+8.65498558e-02f,
+9.24600884e-02f,-4.13419269e-02f,+4.86451536e-02f,+4.46385592e-02f,+6.25647008e-02f,
+1.79057531e-02f,+5.46997227e-02f,+1.72107816e-02f,-5.07679628e-03f,+1.29904198e-02f,
-4.81085014e-03f,-2.48031877e-02f,+3.81472241e-03f,+7.20157707e-03f,+5.16558588e-02f,
+3.94628793e-02f,-3.96234207e-02f,-5.22566251e-02f,-9.83927958e-03f,-7.62612224e-02f,
+3.50882038e-02f,-5.96886650e-02f,-8.24767724e-02f,+7.58378804e-02f,+5.49808368e-02f,
-5.69165014e-02f,+5.81325814e-02f,+4.13898602e-02f,-2.54203007e-02f,+4.57417592e-02f,
-5.06285168e-02f,-1.03436135e-01f,+8.06307644e-02f,+2.45316066e-02f,-4.45314758e-02f,
+9.70626548e-02f,+4.51003127e-02f,+9.53248739e-02f,-3.78769934e-02f,-3.19337286e-02f,
-8.03656131e-02f,-9.81789306e-02f,-1.78299453e-02f,-4.08045612e-02f,-6.18757168e-03f,
+2.14923155e-02f,-1.04056587e-02f,-8.77265781e-02f,-4.39559817e-02f,-4.71590310e-02f,
-3.74317504e-02f,-8.72230083e-02f,+9.58068445e-02f,+6.42191097e-02f,-8.04716814e-03f,
-4.68257554e-02f,-5.59574598e-03f,+4.25725766e-02f,-3.59319076e-02f,+9.49075520e-02f,
+8.81175324e-02f,-1.03903927e-01f,+3.24238301e-03f,+3.57732959e-02f,+6.99943379e-02f,
-3.37062753e-04f,+8.22151080e-03f,-3.85631919e-02f,+1.02973707e-01f,-1.03786759e-01f,
+9.61461514e-02f,+9.57280993e-02f,-5.49934730e-02f,+2.06366889e-02f,-2.42671706e-02f,
+9.31197777e-02f,-3.84430215e-02f,+5.52120386e-04f,-7.62210488e-02f,-5.64029068e-02f,
-1.17942579e-02f,-5.51700182e-02f,-3.65464874e-02f,+6.35903049e-03f,-3.50105725e-02f,
+8.38811249e-02f,-1.02963326e-02f,+4.70927805e-02f,-2.28312407e-02f,+6.98336512e-02f,
+3.96204218e-02f,-2.98438761e-02f,-6.16100132e-02f,-6.73183799e-02f,-4.72249463e-02f,
+5.02778701e-02f,-5.21706790e-02f,+6.99919760e-02f,-8.11957382e-03f,+7.80401900e-02f,
-8.43358114e-02f,-5.55197746e-02f,-9.27141532e-02f,+5.82221970e-02f,+6.91007683e-03f,
-2.59165447e-02f,+2.87795570e-02f,+6.43009767e-02f,-9.89507288e-02f,-4.79873177e-03f,
-1.04323819e-01f,+7.02656806e-02f,-9.70725864e-02f,+6.88927919e-02f,-1.48796849e-02f,
-5.88822598e-03f,-6.43471554e-02f,-3.74212228e-02f,-2.47592069e-02f,-4.97693345e-02f,
-3.12286317e-02f,+3.75298671e-02f,+3.24773043e-03f,-2.14370321e-02f,-4.23308909e-02f,
+7.39525855e-02f,+8.31757113e-03f,+1.57731809e-02f,-1.00875996e-01f,+3.59127671e-03f,
+1.79222727e-03f,+7.18716681e-02f,+8.68821442e-02f,-6.18985333e-02f,+6.81592748e-02f,
-9.93878916e-02f,+2.68205926e-02f,+8.77896398e-02f,-2.90028611e-03f,+2.54176892e-02f,
-3.01653109e-02f,+6.53499514e-02f,-2.56562438e-02f,+5.75682893e-02f,+5.40001728e-02f,
+6.98795915e-02f,+2.16295216e-02f,+6.18370585e-02f,-1.93924084e-02f,+4.24076542e-02f,
+2.08424628e-02f,-9.50725079e-02f,+8.27191398e-02f,-9.76346880e-02f,+1.22589990e-02f,
-7.11224526e-02f,-1.85630322e-02f,+6.88380674e-02f,-5.09662032e-02f,-7.79930726e-02f,
+8.98896381e-02f,+3.01894154e-02f,-5.53838871e-02f,-2.21665986e-02f,-9.82680246e-02f,
+2.73204725e-02f,+7.38223782e-03f,-3.62398513e-02f,-5.84441423e-02f,+8.87011215e-02f,
-9.87710804e-02f,+1.80202350e-02f,-9.31234211e-02f,+4.98554930e-02f,-2.35221460e-02f,
+9.51076075e-02f,-8.60124826e-02f,-9.59474668e-02f,-4.22687903e-02f,-9.37735587e-02f,
-4.77353744e-02f,+4.94899228e-02f,+4.99325618e-02f,-1.01561375e-01f,+2.53843442e-02f,
-2.62006447e-02f,-6.12445921e-02f,-8.36699456e-03f,-5.27154468e-02f,-1.02434509e-01f,
-9.40933079e-02f,+8.71313736e-02f,+9.72288027e-02f,-3.90808359e-02f,+9.59660932e-02f,
-7.70396218e-02f,+6.16873130e-02f,+4.20528129e-02f,+3.83638665e-02f,+5.97832873e-02f,
-7.23820031e-02f,+3.88513878e-02f,+7.97354206e-02f,-6.29290864e-02f,-5.91529384e-02f,
+7.65996873e-02f,+8.60558525e-02f,+2.20091939e-02f,-2.42906995e-02f,-5.04592136e-02f,
-5.96822239e-02f,+4.71100248e-02f,-5.75997643e-02f,+5.18799610e-02f,-1.01683782e-02f,
-8.93359482e-02f,-3.24525572e-02f,-9.79834050e-02f,+8.82703736e-02f,-9.92877707e-02f,
+2.41746008e-03f,+7.38221779e-02f,+8.20929259e-02f,+5.45277260e-02f,-6.86706975e-02f,
+7.45270625e-02f,-5.16322553e-02f,-2.46812105e-02f,+3.89031768e-02f,+2.74461918e-02f,
+3.57365459e-02f,+2.19541695e-02f,+1.43387113e-02f,-1.04717128e-01f,+2.94448547e-02f,
-7.31577072e-03f,-8.91744718e-02f,+3.94839868e-02f,-5.14757447e-02f,-1.01786762e-01f,
+1.46465600e-02f,+9.02095512e-02f,-1.75453089e-02f,-4.24953848e-02f,+7.37803131e-02f,
+5.97433113e-02f,-6.61956295e-02f,+4.27907370e-02f,-9.63833183e-03f,-3.33897956e-02f,
-6.92058504e-02f,+8.28911886e-02f,-8.38174894e-02f,-7.67448917e-02f,+2.82576121e-03f,
-3.83532606e-02f,-6.46534264e-02f,+1.55500071e-02f,+1.01420455e-01f,-6.69686720e-02f,
+9.85614676e-03f,+6.42194673e-02f,+4.93140034e-02f,+3.36274803e-02f,+3.47607918e-02f,
-1.12502418e-01f,+8.21025372e-02f,-4.08394635e-03f,+9.95259508e-02f,-5.50459176e-02f,
+7.88542107e-02f,+5.61215095e-02f,+9.28883478e-02f,+1.85781475e-02f,+6.36551604e-02f,
-3.04786563e-02f,-3.34592946e-02f,+3.81412953e-02f,+3.01050767e-02f,-2.01235968e-03f,
-1.07496664e-01f,+9.12398696e-02f,-3.64492908e-02f,-4.32602465e-02f,+2.61181369e-02f,
+8.18027090e-03f,+8.13940689e-02f,+8.22567567e-02f,+7.22717308e-03f,+1.08633212e-04f,
+4.13296372e-02f,-8.93633887e-02f,+3.17327902e-02f,-8.75864923e-02f,-9.12371092e-03f,
-6.66051209e-02f,+1.05102986e-01f,+4.99638915e-02f,+4.46930937e-02f,+7.35762641e-02f,
+6.23208918e-02f,-3.77696962e-03f,-1.26404567e-02f,-1.03089713e-01f,-7.82563165e-02f,
+1.46788349e-02f,+7.07847700e-02f,+4.97852676e-02f,-1.85033511e-02f,-2.16867123e-03f,
+4.08582129e-02f,-1.09861776e-01f,-6.03932366e-02f,+4.79019322e-02f,+3.11597809e-02f,
+8.24167952e-02f,-9.89089981e-02f,-5.55878170e-02f,+4.45142761e-02f,-5.79672232e-02f,
-9.65369586e-03f,+8.33550990e-02f,-4.36762581e-03f,+5.27103106e-03f,-3.90577056e-02f,
+7.52801895e-02f,+3.41517031e-02f,+5.60899489e-02f,+6.82679936e-02f,-9.53952670e-02f,
-4.74163443e-02f,-1.03008270e-01f,-3.99568155e-02f,-1.95743050e-02f,+8.64181742e-02f,
-4.87917811e-02f,+1.52954971e-02f,+4.85754162e-02f,-3.14033926e-02f,+5.85799292e-02f,
+5.29282428e-02f,-2.23725885e-02f,+2.51514348e-03f,-5.80294244e-02f,-3.77445966e-02f,
-1.41349258e-02f,+3.79864350e-02f,+3.32431383e-02f,-9.18783098e-02f,-5.53330742e-02f,
+1.11689549e-02f,-4.63740081e-02f,-5.95628135e-02f,-2.98496000e-02f,+6.52587935e-02f,
-6.55485392e-02f,+5.55084459e-02f,-2.61148177e-02f,+7.96176046e-02f,-2.58858805e-03f,
+1.03504799e-01f,-9.68580320e-02f,-8.11055228e-02f,-4.19471860e-02f,-5.03400713e-03f,
-4.79729325e-02f,+3.42368558e-02f,+9.54922512e-02f,-7.82066882e-02f,+2.12330893e-02f,
-9.37763080e-02f,-6.79169670e-02f,+8.67808238e-02f,-2.66011618e-02f,+5.92584088e-02f,
-9.25519317e-02f,-5.93939386e-02f,-9.59637687e-02f,+7.76887015e-02f,-5.53219579e-02f,
+1.83989555e-02f,+1.04548492e-01f,-2.29086727e-02f,+2.25191340e-02f,+8.80850852e-03f,
-1.04341149e-01f,-8.17728043e-02f,-9.43728387e-02f,-8.46209079e-02f,+8.05510357e-02f,
-8.86782557e-02f,-2.29929760e-02f,-6.65271133e-02f,-3.32129896e-02f,-3.73292938e-02f,
+5.79648418e-03f,-2.35410258e-02f,-1.33891515e-02f,-1.10421684e-02f,+7.07926899e-02f,
-1.03220798e-01f,+7.98920691e-02f,+4.96366620e-02f,+6.17970601e-02f,-2.69251838e-02f,
+8.88657197e-02f,+1.70904119e-02f,+8.52824971e-02f,-6.83596882e-04f,-2.57901885e-02f,
+2.56004855e-02f,+6.22957461e-02f,-5.18722087e-02f,+5.87129258e-02f,-9.71451700e-02f,
-4.89964746e-02f,-6.13672696e-02f,-2.37383842e-02f,-5.16985357e-02f,-1.04284987e-01f,
+7.38522410e-02f,+1.00795561e-02f,+2.90664323e-02f,+9.02465060e-02f,-8.13368037e-02f,
+8.93749893e-02f,+2.56206114e-02f,+4.54557016e-02f,+4.58150059e-02f,+4.58718324e-03f,
+7.57010281e-02f,+7.09519833e-02f,+9.34054554e-02f,+5.61047010e-02f,-6.64821416e-02f,
+3.04984041e-02f,-3.56893577e-02f,+1.03953719e-01f,-4.48354483e-02f,+2.36634947e-02f,
-2.86877733e-02f,-5.46737984e-02f,+4.57725748e-02f,+2.46699993e-02f,-5.33824600e-02f,
+2.74353083e-02f,+7.33179785e-03f,+7.74853677e-02f,+3.57136200e-03f,+1.82178672e-02f,
-2.99642850e-02f,+3.76111679e-02f,-9.10948738e-02f,-1.20235672e-02f,-2.30572373e-03f,
-8.54087994e-02f,+8.53788555e-02f,+2.10504644e-02f,-5.68371788e-02f,+7.81651661e-02f,
+8.38386789e-02f,-2.41206437e-02f,-3.55824716e-02f,+7.70263048e-03f,+3.27509083e-02f,
-3.34172472e-02f,-1.66621059e-03f,+7.84947276e-02f,+4.84595448e-02f,-8.28599334e-02f,
-1.07119218e-01f,+9.94092003e-02f,+9.75995883e-02f,+7.07127736e-04f,-9.13650841e-02f,
+1.39402021e-02f,+1.30967796e-02f,-4.40135635e-02f,-9.52242240e-02f,+3.36432345e-02f,
-2.92832386e-02f,+5.31119741e-02f,+3.96005362e-02f,-1.19362278e-02f,+8.58505145e-02f,
-9.79505479e-02f,+7.98059404e-02f,-8.44915733e-02f,-5.46010733e-02f,+2.75128111e-02f,
+5.20505682e-02f,-7.77354762e-02f,-2.09601894e-02f,-8.70652422e-02f,-2.21963599e-02f,
-5.36091141e-02f,+8.56269076e-02f,+1.09616816e-02f,+2.19972804e-02f,+1.16807967e-02f,
-2.59456709e-02f,-1.63901001e-02f,+6.42871037e-02f,+4.12151292e-02f,+7.13393763e-02f,
-5.75738326e-02f,-9.98889506e-02f,-8.45199823e-02f,-7.16089457e-02f,-1.14102066e-02f,
-6.77839965e-02f,-5.01684844e-02f,+3.35873291e-02f,-8.44746828e-03f,+8.54317322e-02f,
-7.59062320e-02f,+7.35098869e-03f,+2.21652538e-03f,-2.65415236e-02f,+6.07860833e-03f,
+4.26523164e-02f,+8.33899975e-02f,+1.09557211e-02f,+3.08865402e-02f,+3.09157334e-02f,
+6.89919367e-02f,+2.62000952e-02f,-5.42015843e-02f,+6.61959425e-02f,-4.86533232e-02f,
+3.97278368e-02f,-6.88602775e-02f,+9.34056714e-02f,-1.86822526e-02f,+8.85737911e-02f,
-1.55233815e-02f,+7.76204094e-02f,-5.23475111e-02f,-6.89527392e-02f,-2.92651379e-03f,
+4.12386879e-02f,-6.65149167e-02f,+2.49894038e-02f,-1.72687918e-02f,+5.78522608e-02f,
+4.57210913e-02f,+8.27015266e-02f,-9.71070081e-02f,+4.61916737e-02f,-4.93721701e-02f,
+1.97870880e-02f,+8.17494765e-02f,-7.43678287e-02f,+7.74106896e-03f,+9.07801315e-02f,
+7.02881292e-02f,+6.00981973e-02f,+1.03175677e-01f,-7.09173009e-02f,-7.17443600e-02f,
-2.27448400e-02f,-3.68531831e-02f,+2.98053138e-02f,+7.58883879e-02f,+2.30730660e-02f,
+1.24038327e-02f,+4.37094532e-02f,+5.10914251e-02f,+3.29571217e-02f,+9.23345089e-02f,
+3.92216071e-02f,-1.87813584e-02f,-4.00556251e-02f,+6.04328252e-02f,+8.43539238e-02f,
+1.67194940e-02f,+9.93916616e-02f,+5.50931469e-02f,-4.57814932e-02f,-3.25497761e-02f,
-6.72826320e-02f,-1.67660937e-02f,+3.39187644e-02f,+5.22372834e-02f,+1.12565987e-01f,
-1.65615622e-02f,-9.28771496e-02f,-1.22570852e-02f,-8.35824236e-02f,+6.32893667e-02f,
-9.54796746e-02f,+1.07915029e-02f,-3.92690822e-02f,+5.40644489e-02f,-9.75269675e-02f,
+1.26825422e-02f,+3.37952338e-02f,+7.80343413e-02f,+8.21772665e-02f,+9.78129357e-03f,
-1.06858782e-01f,+1.78287718e-02f,+7.96243921e-02f,+8.45587254e-02f,-7.22084045e-02f,
-3.71512361e-02f,-5.37838973e-02f,-4.43632193e-02f,-1.98925482e-04f,-4.60866913e-02f,
+2.70359013e-02f,-1.78156514e-02f,-3.29114161e-02f,-5.77501059e-02f,-5.47318440e-03f,
-6.95383325e-02f,-2.92139184e-02f,+6.61066175e-02f,-2.57510170e-02f,+8.90877321e-02f,
+8.26005787e-02f,-5.22299483e-02f,-7.66666308e-02f,+7.85904527e-02f,-9.01830569e-02f,
-1.79056879e-02f,-8.53476301e-02f,+9.45402160e-02f,-1.04704648e-01f,+6.61453530e-02f,
-1.91090852e-02f,+8.53880346e-02f,-6.63004071e-02f,-7.19870329e-02f,-5.30813634e-03f,
-7.77809471e-02f,+5.68881407e-02f,-6.66051283e-02f,+8.63607526e-02f,+3.16949636e-02f,
-3.41274950e-04f,-9.33952108e-02f,+3.67745385e-02f,+9.61286500e-02f,-9.25711989e-02f,
-8.49266872e-02f,+4.58768085e-02f,-3.95479016e-02f,-1.58549398e-02f,+5.90548590e-02f,
+6.62022009e-02f,-1.44003034e-02f,-8.01698416e-02f,+8.27482268e-02f,-1.46341696e-02f,
-1.89061463e-03f,-1.06708035e-02f,+8.25539753e-02f,-4.01785374e-02f,-5.88537492e-02f,
-3.92201990e-02f,-1.00988030e-01f,-7.18749091e-02f,-8.67243856e-02f,-5.55319041e-02f,
-8.07775110e-02f,-5.13481945e-02f,-7.06752390e-03f,+7.24667832e-02f,+2.93287411e-02f,
-2.39365175e-02f,-4.06973064e-03f,+2.41030082e-02f,-5.06728180e-02f,-1.93572417e-02f,
+6.19951859e-02f,-7.62585774e-02f,-8.96371901e-03f,+1.91963911e-02f,+9.84930471e-02f,
-2.03697458e-02f,-4.54109833e-02f,-5.52998036e-02f,+9.93704200e-02f,-8.09188411e-02f,
-7.21617490e-02f,-2.89021991e-02f,+1.44912219e-02f,-2.78274668e-03f,-1.75417587e-02f,
-1.00658849e-01f,+7.91613534e-02f,+2.45270948e-03f,-4.24940661e-02f,+8.12359452e-02f,
-2.29503419e-02f,+7.55257905e-02f,+3.88340838e-03f,-1.91762894e-02f,-8.20998624e-02f,
-1.78314224e-02f,+9.42544919e-03f,-1.01677820e-01f,-8.83189887e-02f,+1.73677644e-03f,
-7.58324610e-03f,+4.35623787e-02f,+4.84817512e-02f,-2.93344725e-02f,-9.01475083e-03f,
-1.50562534e-02f,+9.11660492e-02f,+8.28528553e-02f,-7.39110261e-02f,-9.39203128e-02f,
+7.44643137e-02f,-6.15676455e-02f,+1.17092431e-02f,+2.94524506e-02f,-1.15866065e-02f,
-8.36377367e-02f,+2.04267874e-02f,+5.37965223e-02f,-9.11857784e-02f,+5.11598960e-02f,
-2.26511657e-02f,-2.68347040e-02f,+9.35149863e-02f,-1.33129135e-02f,+6.27393946e-02f,
+7.86263496e-03f,+7.20002502e-03f,+9.95984674e-03f,-1.01766817e-01f,-8.38257298e-02f,
-8.02305341e-02f,+8.11588243e-02f,-6.94649071e-02f,-3.56917828e-02f,+7.03448579e-02f,
+7.57503584e-02f,+9.26031843e-02f,-4.04802710e-03f,+7.99368098e-02f,+5.77616468e-02f,
-7.92330876e-02f,+1.96321066e-02f,+9.27162394e-02f,-2.62783188e-02f,+4.61644586e-03f,
+3.03735025e-02f,-6.27952293e-02f,+8.43856707e-02f,-2.66510118e-02f,+7.97227696e-02f,
+1.25834858e-02f,-3.35989036e-02f,+8.74324813e-02f,-9.38719586e-02f,+5.26861101e-03f,
-4.19361107e-02f,-8.08598548e-02f,-6.03392348e-02f,+2.40924302e-02f,+5.07781580e-02f,
+3.26524302e-02f,-6.76631033e-02f,-8.21781754e-02f,+3.34045291e-02f,-4.60097976e-02f,
-9.86629445e-03f,-4.51978995e-03f,-9.02357996e-02f,-3.39724459e-02f,-5.88170849e-02f,
-9.62142348e-02f,-1.92623995e-02f,+6.25354424e-02f,+7.88173173e-03f,-2.98441034e-02f,
-9.11214203e-02f,-9.56958309e-02f,+1.02210179e-01f,+6.50106072e-02f,-7.81857893e-02f,
-9.59814787e-02f,+1.04131006e-01f,-8.21998529e-03f,+8.03023279e-02f,-7.39517957e-02f,
+8.85592699e-02f,+4.14830893e-02f,-1.02086999e-01f,-1.95351876e-02f,-5.01215868e-02f,
-7.50182047e-02f,-9.21896920e-02f,+6.79924712e-03f,-5.53106181e-02f,-1.96024291e-02f,
+9.35970061e-03f,+3.55894044e-02f,-9.34281945e-02f,+8.00750181e-02f,+1.10680452e-02f,
-3.11153922e-02f,-6.48585930e-02f,+4.32900228e-02f,-4.65752855e-02f,+7.02902153e-02f,
-1.63507685e-02f,+6.41568676e-02f,-7.20966756e-02f,-7.64339268e-02f,-7.04849958e-02f,
-4.62217927e-02f,+7.36395493e-02f,+5.98661676e-02f,-8.50683153e-02f,-5.11669889e-02f,
+2.70493105e-02f,-3.58958766e-02f,-1.02390267e-01f,+1.09354183e-02f,+4.67213914e-02f,
-7.68445134e-02f,+1.00442767e-02f,-5.42734973e-02f,+6.98167011e-02f,-2.77565122e-02f,
-5.21180667e-02f,+8.65840390e-02f,-6.03869855e-02f,-2.95738652e-02f,-7.08473101e-02f,
+8.94828513e-02f,+9.52495560e-02f,+7.63570517e-03f,+2.68109888e-03f,-1.00460440e-01f,
-2.24567130e-02f,-7.12330937e-02f,-5.62912636e-02f,+1.16609130e-02f,+9.00060236e-02f,
-2.06347313e-02f,-6.08278960e-02f,-1.39972018e-02f,+6.58708811e-02f,-6.25040010e-02f,
+8.53363872e-02f,+2.26167310e-02f,-2.75348127e-03f,+9.15063620e-02f,+5.31281345e-02f,
+3.97304585e-03f,+2.72041671e-02f,+4.92171571e-02f,-4.76325899e-02f,-3.32935862e-02f,
-1.04385689e-02f,+8.70254859e-02f,-1.07950203e-01f,+4.39768881e-02f,-9.11900476e-02f,
-2.96784230e-02f,-7.01649347e-03f,-5.01162931e-02f,+2.09196620e-02f,+4.74391133e-02f,
+1.19576063e-02f,-4.28118668e-02f,-1.80989821e-02f,+2.06376817e-02f,+5.36497645e-02f,
+1.16672114e-01f,+7.12384954e-02f,-2.14307327e-02f,+8.77304375e-02f,+6.34286553e-03f,
+8.43937099e-02f,-4.77981456e-02f,-1.08628245e-02f,-2.12377086e-02f,+3.50438356e-02f,
+3.31028551e-02f,-6.89666569e-02f,+2.89723799e-02f,+1.01539738e-01f,+7.90921003e-02f,
+2.23653242e-02f,-1.52847851e-02f,+1.00798689e-01f,+3.63340974e-02f,-8.56523439e-02f,
+5.49756959e-02f,-8.37357342e-02f,+3.72905508e-02f,+7.00836927e-02f,-5.28729260e-02f,
+7.39291236e-02f,-3.91280800e-02f,+2.91275755e-02f,-7.13207275e-02f,+1.53016252e-03f,
+5.53052574e-02f,+3.44144590e-02f,+7.69382641e-02f,-2.67197266e-02f,+1.10692345e-02f,
+9.60382149e-02f,+2.26485226e-02f,-9.48682055e-02f,+5.08549437e-02f,-2.67278608e-02f,
-4.94907945e-02f,+7.38257915e-03f,+1.00425467e-01f,+6.43413141e-02f,-9.07804221e-02f,
-3.75306457e-02f,-2.46752426e-03f,+3.85235474e-02f,-4.91860509e-02f,-3.65891531e-02f,
-1.15302196e-02f,+9.48152542e-02f,+7.50084072e-02f,-8.01895186e-02f,+5.41125759e-02f,
+7.68714398e-02f,-6.42743111e-02f,+2.33636647e-02f,-8.66654962e-02f,+3.34158428e-02f,
+9.78087187e-02f,+1.10280909e-01f,+9.82301086e-02f,+7.43657202e-02f,+7.43716955e-02f,
+1.95685141e-02f,-8.91450420e-02f,-8.29405189e-02f,-1.07072122e-01f,+4.96955104e-02f,
-9.75601003e-02f,+7.65227303e-02f,+1.96223538e-02f,+7.82367308e-03f,+7.18165487e-02f,
-9.38882455e-02f,-9.70214605e-02f,+2.48788688e-02f,+4.98010106e-02f,-4.42010984e-02f,
+1.18073681e-02f,-2.20567957e-02f,+2.53921896e-02f,+1.14645120e-02f,+9.12271999e-03f,
+6.28447905e-02f,-3.96181010e-02f,+1.08616360e-01f,-1.01178534e-01f,-4.00774367e-02f,
-9.69626158e-02f,-7.00341240e-02f,-5.53648956e-02f,-8.66695419e-02f,+3.54955569e-02f,
+5.06040342e-02f,-2.61866711e-02f,+9.55802277e-02f,+5.44081703e-02f,+1.05053179e-01f,
+1.19173797e-02f,-1.94886364e-02f,-2.15549190e-02f,-8.38657692e-02f,+4.82281111e-02f,
-7.42188096e-02f,-8.87553096e-02f,+7.02797100e-02f,-1.07382879e-01f,+3.38683389e-02f,
+1.26508821e-03f,-8.35911930e-02f,-4.24439609e-02f,-2.25188360e-02f,+8.01824778e-02f,
-7.52685964e-02f,+8.37574005e-02f,-9.18448269e-02f,-3.99092659e-02f,+7.29781091e-02f,
-5.52338548e-04f,+4.84535694e-02f,+6.81160539e-02f,+9.87665206e-02f,-9.39829834e-03f,
+8.90156254e-02f,+3.88531424e-02f,+5.74651100e-02f,-7.90895075e-02f,-6.69544414e-02f,
+6.39264211e-02f,-1.82149652e-02f,+4.68211621e-02f,-6.66362494e-02f,+4.70505431e-02f,
-2.74651423e-02f,-3.71141732e-02f,+5.72047196e-02f,-1.75349303e-02f,+7.78081417e-02f,
+4.60746326e-02f,-1.00077659e-01f,+3.83366272e-02f,+2.56301835e-02f,+8.58933628e-02f,
+8.95773098e-02f,+8.50494355e-02f,+5.63310832e-02f,+2.02325284e-02f,-5.82589135e-02f,
+8.22969824e-02f,-8.67140070e-02f,+6.73189163e-02f,+9.07936022e-02f,+2.38804463e-02f,
-1.01112902e-01f,-4.51489538e-02f,-6.42533600e-02f,+1.19984169e-02f,+2.20831260e-02f,
-1.49686811e-02f,-7.62743875e-02f,+8.94501284e-02f,+5.87750077e-02f,-3.68208885e-02f,
+7.61841005e-03f,-6.82277679e-02f,-4.43138704e-02f,+6.97717816e-02f,-1.47611671e-03f,
+5.91884851e-02f,+2.80199684e-02f,+1.56521928e-02f,+2.33582407e-02f,+2.19159313e-02f,
-8.47092569e-02f,+9.48780961e-03f,-8.60256776e-02f,-5.27073108e-02f,+2.09936425e-02f,
-8.60962346e-02f,+9.16248783e-02f,-4.97351103e-02f,-6.40164763e-02f,+7.69478153e-04f,
-5.71004413e-02f,+7.48113394e-02f,-3.85417370e-03f,+3.58301848e-02f,+4.87484857e-02f,
+6.67746663e-02f,+8.97387639e-02f,+1.37090283e-02f,-1.00729711e-01f,-8.80319159e-03f,
-5.27426675e-02f,+1.43104447e-02f,-2.76179649e-02f,+5.05323075e-02f,-1.05270952e-01f,
+4.81137186e-02f,+6.91717863e-02f,-1.99213121e-02f,-1.04185231e-01f,+1.68944560e-02f,
+6.29858449e-02f,-3.06210406e-02f,-6.21867329e-02f,-6.88018799e-02f,-4.96457964e-02f,
+6.84596822e-02f,+5.92695549e-02f,-9.18062106e-02f,+4.55875769e-02f,+7.21311495e-02f,
-9.13537815e-02f,-3.71288359e-02f,-5.14282882e-02f,+7.29400739e-02f,+8.76121745e-02f,
+2.63077356e-02f,+2.25731861e-02f,-7.04783350e-02f,+8.50850344e-02f,-5.89562953e-02f,
-1.35207968e-02f,-5.74666709e-02f,+9.91621837e-02f,-5.12749813e-02f,+3.94088849e-02f,
+7.34825656e-02f,+4.81191091e-02f,-3.75041515e-02f,+1.16788702e-04f,-2.45252904e-02f,
-7.45209977e-02f,-2.05908678e-02f,+7.78655242e-03f,+8.90883524e-03f,-5.32745421e-02f,
+8.34500939e-02f,-3.85127217e-02f,-6.95916219e-03f,-5.06089292e-02f,+8.29337686e-02f,
-1.78934019e-02f,-8.62680078e-02f,-4.08441350e-02f,+4.68262620e-02f,-2.33346950e-02f,
+7.39072785e-02f,-1.77244600e-02f,+2.25487798e-02f,+2.01984774e-02f,-4.34885174e-03f,
+9.64289457e-02f,+2.73206756e-02f,-1.56867467e-02f,-2.69757137e-02f,-4.29667300e-04f,
+2.36817524e-02f,-9.97821391e-02f,-5.30789122e-02f,-4.44899239e-02f,+6.07137084e-02f,
+4.54086661e-02f,+6.58697635e-03f,-3.44602317e-02f,+9.26650390e-02f,-4.76776436e-02f,
+2.56539066e-03f,-3.27747241e-02f,-7.68438503e-02f,-9.85747799e-02f,+5.14679514e-02f,
+7.96971470e-02f,-8.80565718e-02f,+6.12836666e-02f,+7.16919824e-02f,-8.91953632e-02f,
-1.74224600e-02f,+5.69168665e-02f,-4.64736260e-02f,-4.71592620e-02f,+2.15441231e-02f,
-6.25639223e-03f,+4.66574803e-02f,+6.26661479e-02f,+6.89803362e-02f,+7.47393817e-02f,
-5.86939715e-02f,+4.34011891e-02f,-8.83279892e-04f,+7.27584511e-02f,-5.12223318e-02f,
+9.58617255e-02f,-8.27926546e-02f,-5.17239906e-02f,+6.24510683e-02f,-8.61001909e-02f,
+1.03754376e-03f,-1.01247199e-01f,-8.18676800e-02f,-7.63607621e-02f,+2.32176855e-02f,
-1.70050114e-02f,+9.44439173e-02f,+3.14571932e-02f,+5.99576607e-02f,-1.43576320e-02f,
-8.43038857e-02f,-9.79856327e-02f,-9.98725835e-03f,+8.57629627e-02f,+9.44010913e-02f,
+1.00451559e-01f,-1.03405491e-01f,-6.06265254e-02f,-7.85908103e-02f,-9.75056663e-02f,
+4.61578369e-03f,-2.98677236e-02f,-3.65940407e-02f,+8.47709253e-02f,-2.64082178e-02f,
-4.74636257e-03f,+4.02850583e-02f,-6.28285334e-02f,-1.01307109e-02f,-7.21969604e-02f,
+2.12869272e-02f,-1.00057058e-01f,+7.72866830e-02f,+1.00557767e-01f,+1.50645375e-02f,
+4.05359790e-02f,+2.47229636e-03f,+3.88454720e-02f,+8.13165680e-02f,+6.67262450e-02f,
+2.00939700e-02f,+8.03924128e-02f,+5.87250963e-02f,+5.97507134e-02f,+7.84821808e-04f,
+3.87747511e-02f,-1.48148537e-02f,+2.12520137e-02f,-1.00278527e-01f,-6.29262850e-02f,
-7.88968056e-02f,-5.52107766e-02f,+6.49956167e-02f,-1.61723122e-02f,+8.66742283e-02f,
+9.63400528e-02f,-7.17782453e-02f,-1.93397813e-02f,+1.14181772e-01f,+4.56305221e-03f,
+6.46157330e-03f,+3.25525738e-02f,+5.38016595e-02f,-9.55853462e-02f,+6.84111491e-02f,
-9.75421630e-03f,-8.77421722e-02f,+5.28705120e-03f,-5.22033833e-02f,+2.26555988e-02f,
+3.33844684e-02f,+9.96958558e-03f,+5.70891686e-02f,+8.44555423e-02f,-9.70330015e-02f,
-6.03200085e-02f,-6.99176043e-02f,-2.74921861e-02f,+8.56389552e-02f,+7.56394565e-02f,
+9.32398066e-02f,+5.87719046e-02f,+6.73466772e-02f,+7.23781213e-02f,-7.13117719e-02f,
+1.92825645e-02f,+1.03655607e-01f,+4.19102646e-02f,-6.80477247e-02f,-9.87038165e-02f,
-7.02890158e-02f,-8.83903727e-02f,+9.37943980e-02f,+2.87882201e-02f,-5.49370311e-02f,
+1.17468054e-03f,-4.47049849e-02f,-9.99086499e-02f,-7.13541731e-02f,-8.45501572e-02f,
+8.13525021e-02f,+7.45199546e-02f,+7.64592411e-03f,-2.13789511e-02f,+8.78259614e-02f,
+6.86845779e-02f,-5.72070188e-04f,+1.03704013e-01f,+8.88449028e-02f,-2.66353157e-03f,
-7.45232031e-02f,+3.17309014e-02f,+4.71112505e-02f,+3.19380350e-02f,-7.20428526e-02f,
+5.19522205e-02f,-6.79149032e-02f,-6.61605522e-02f,+3.97334285e-02f,+5.17719649e-02f,
+3.35136987e-02f,+2.72811782e-02f,+8.07164684e-02f,+3.34316120e-02f,-9.66331363e-02f,
-2.94625983e-02f,+1.10509396e-01f,-5.33224642e-02f,-4.42538038e-02f,+1.16638159e-02f,
+3.25626247e-02f,-8.16520974e-02f,+3.49220596e-02f,-4.77667972e-02f,+3.04010026e-02f,
-4.56475541e-02f,-1.79636963e-02f,-7.16020986e-02f,+9.63612832e-03f,+7.23637268e-02f,
-1.46528026e-02f,-6.90947101e-02f,+2.25564763e-02f,-7.41510391e-02f,+8.89837444e-02f,
+9.14198309e-02f,-6.20281398e-02f,-1.93829108e-02f,-5.92959560e-02f,-1.07314050e-01f,
+4.71169204e-02f,-9.00808796e-02f,-5.25869951e-02f,+9.20292139e-02f,+8.93234015e-02f,
+5.66255264e-02f,-3.53279747e-02f,+9.00022388e-02f,-4.48575988e-03f,-1.05402961e-01f,
-3.36626917e-02f,+6.05154559e-02f,+6.82317242e-02f,-6.08305745e-02f,+3.49049717e-02f,
-5.95904700e-02f,-5.56844622e-02f,-5.60170300e-02f,+7.60438368e-02f,+1.06459446e-01f,
-2.49986928e-02f,-4.86580320e-02f,+1.77602991e-02f,+5.33849932e-02f,-6.59541115e-02f,
+3.10184620e-02f,+1.62703320e-02f,+3.01553458e-02f,-9.21713114e-02f,+8.37053284e-02f,
-8.24110061e-02f,-5.94986081e-02f,+8.25123768e-03f,+2.86859944e-02f,-3.58399525e-02f,
+7.09218308e-02f,-1.45383999e-02f,-2.90629510e-02f,+9.01879966e-02f,+6.77015027e-03f,
+1.04223043e-02f,+5.20305298e-02f,+9.70969349e-02f,+2.23470274e-02f,-1.64404884e-02f,
+1.37899071e-02f,+5.43559082e-02f,+3.21858749e-02f,-1.18119223e-03f,-9.42207500e-02f,
-1.25278607e-02f,-6.87930062e-02f,-9.29946899e-02f,+7.47878337e-04f,-7.94974789e-02f,
+4.29227725e-02f,-7.48868510e-02f,+1.43084005e-02f,+2.46550478e-02f,-3.18506174e-02f,
+7.54525438e-02f,-8.35692883e-03f,-9.43477750e-02f,-4.50851507e-02f,+9.30432454e-02f,
-2.05486193e-02f,+7.80953392e-02f,+3.50420251e-02f,-8.49512070e-02f,-8.46748203e-02f,
+8.94779935e-02f,+5.31067029e-02f,+4.81781438e-02f,-8.20917636e-03f,+6.41765073e-02f,
-2.25564241e-02f,+3.20616290e-02f,+3.77329364e-02f,+6.85832426e-02f,-1.65128410e-02f,
-3.87039781e-03f,+9.54804197e-02f,-8.74224454e-02f,+9.85508636e-02f,-4.56528850e-02f,
+9.76062939e-02f,-9.31849405e-02f,+1.00714482e-01f,-3.90025601e-02f,-4.10719290e-02f,
+7.85769895e-02f,+6.28118291e-02f,+8.97968113e-02f,-9.00083929e-02f,+1.97929982e-02f,
-8.45555067e-02f,-2.43265349e-02f,+3.15973684e-02f,+2.90798023e-02f,+8.30348656e-02f,
+5.99359348e-02f,+1.98858343e-02f,+6.57183379e-02f,+3.16825062e-02f,-5.28418869e-02f,
+5.92732802e-02f,-7.91764408e-02f,-6.79859594e-02f,+4.64760885e-02f,+4.64757606e-02f,
-7.20784515e-02f,-9.62410122e-03f,-3.46958153e-02f,-1.72572993e-02f,+2.37882230e-03f,
+4.23218496e-02f,-3.92118841e-02f,+1.10122479e-01f,-2.20018253e-02f,-9.40877050e-02f,
+4.15195199e-03f,+6.48513287e-02f,+9.99036208e-02f,-3.27693149e-02f,+5.59344776e-02f,
+6.58002645e-02f,+7.76234940e-02f,-4.35710661e-02f,+4.54805680e-02f,+7.06283748e-02f,
+1.42367491e-02f,+5.14219403e-02f,+8.30400586e-02f,+1.07396141e-01f,+3.10341120e-02f,
-1.84599124e-02f,+9.60966870e-02f,+6.66142702e-02f,-1.00036666e-01f,-9.11315531e-02f,
-6.01153336e-02f,-4.75279242e-03f,-1.03260372e-02f,-5.22600859e-03f,+1.04510099e-01f,
+3.46820951e-02f,-1.46873826e-02f,+7.05576763e-02f,-4.43892553e-02f,-2.82194018e-02f,
-7.55359046e-03f,+4.78331894e-02f,-9.94556025e-02f,+5.50219789e-02f,+2.54373904e-03f,
+8.66091177e-02f,-8.57503563e-02f,+6.22152165e-03f,-7.04883263e-02f,+1.75238755e-02f,
+7.12031797e-02f,+8.93527865e-02f,+9.74776745e-02f,-1.59731321e-02f,+1.17186531e-02f,
-9.47223455e-02f,-6.26834184e-02f,+8.12794268e-02f,+1.14924133e-01f,+2.61320919e-02f,
-4.90523465e-02f,-2.33868565e-02f,-4.23188172e-02f,-7.98746571e-02f,-4.23846627e-03f,
-7.84571245e-02f,+5.53531423e-02f,+9.05817822e-02f,-9.13878754e-02f,+6.04689531e-02f,
-5.07636368e-02f,-8.87825713e-03f,+6.29468262e-02f,-7.34339282e-02f,+3.12901381e-03f,
-1.50650591e-02f,-6.71916306e-02f,-1.55577471e-03f,+4.20071185e-03f,-8.34314898e-02f,
-4.35492620e-02f,-4.07983810e-02f,-7.01861829e-03f,+2.64555588e-02f,-7.80841410e-02f,
+1.15748867e-02f,+9.41714719e-02f,+4.74755988e-02f,+7.07957223e-02f,+1.44276768e-03f,
-9.14311111e-02f,+2.43918225e-02f,-7.06170499e-02f,-7.42164999e-02f,-2.84409299e-02f,
-3.99809852e-02f,-5.15444763e-02f,-7.20839202e-03f,+3.94356325e-02f,+3.44925150e-02f,
+3.31494585e-02f,+7.64582306e-03f,+6.25567064e-02f,+6.15787134e-02f,+9.01759341e-02f,
-7.29443282e-02f,+8.80198553e-02f,+5.90998009e-02f,+8.70545581e-02f,+5.17785922e-02f,
-5.87211885e-02f,+3.72401997e-02f,+1.81139447e-03f,-3.83426845e-02f,+2.30533478e-04f,
+5.53519689e-02f,-9.17732939e-02f,+7.82622024e-02f,+8.75453651e-02f,-7.92177245e-02f,
+8.56094509e-02f,-5.27059101e-02f,+2.20403709e-02f,-8.89038816e-02f,-1.99221969e-02f,
+6.04608431e-02f,+4.05264609e-02f,+4.11376134e-02f,-4.77560908e-02f,-1.84608996e-02f,
+1.01885810e-01f,+5.45493439e-02f,+2.09476873e-02f,-3.39616686e-02f,+2.27756798e-03f,
-1.09162182e-01f,+8.07067901e-02f,-4.57130186e-02f,-1.00055128e-01f,+7.49733970e-02f,
-5.96657880e-02f,-9.13426001e-03f,-1.27960350e-02f,-2.74046343e-02f,-3.80576067e-02f,
+4.29582670e-02f,+2.92111151e-02f,+6.58378154e-02f,-4.79716174e-02f,-1.54057518e-02f,
+2.65139583e-02f,+9.92806703e-02f,-1.84937101e-02f,+5.89860650e-03f,-3.10363714e-02f,
-4.65938151e-02f,-5.26749529e-02f,-7.55167529e-02f,-3.87148606e-03f,-2.06763744e-02f,
-1.15443207e-02f,+4.11287621e-02f,-1.00886278e-01f,-4.82681990e-02f,+9.72176269e-02f,
+2.98005696e-02f,-1.19857993e-02f,+2.52464544e-02f,+7.02882707e-02f,-4.48123999e-02f,
-5.77129517e-03f,-9.52876918e-03f,-4.15072925e-02f,-1.24767073e-03f,-6.38882592e-02f,
-2.98930295e-02f,+8.25925171e-02f,+1.00640759e-01f,+1.02528341e-01f,-7.50173023e-03f,
-4.92368042e-02f,+5.25250807e-02f,-6.27385899e-02f,+1.08567737e-02f,+4.68782224e-02f,
-8.39033797e-02f,-5.59247509e-02f,+1.71031412e-02f,+1.25578139e-02f,-1.10154413e-01f,
-6.18065596e-02f,-9.79952291e-02f,-1.07488602e-01f,+6.35995790e-02f,-5.73251359e-02f,
-2.04022322e-02f,-3.61383371e-02f,-8.48863572e-02f,-1.42440908e-02f,-4.85081151e-02f,
+4.60326998e-03f,-2.53669508e-02f,-7.25556239e-02f,+8.93596783e-02f,+6.05161913e-05f,
+1.05944857e-01f,-5.84208556e-02f,+8.83300081e-02f,-8.75758752e-02f,-1.55171677e-02f,
-6.97952211e-02f,-6.00601844e-02f,-9.53555182e-02f,-7.87220448e-02f,-6.68759719e-02f,
-5.60024157e-02f,+6.58926889e-02f,-5.09476662e-02f,+4.20915559e-02f,+8.80366843e-03f,
+4.00874689e-02f,-2.83001661e-02f,-6.22594962e-04f,-4.18838933e-02f,-5.69992512e-02f,
+4.79949489e-02f,-2.19208356e-02f,-5.84696569e-02f,+9.30691957e-02f,-3.09861787e-02f,
+1.18270013e-02f,+3.53525952e-02f,-6.72398275e-03f,-8.45072344e-02f,+5.30053340e-02f,
-7.39682019e-02f,+3.25780660e-02f,+4.67557786e-03f,+9.55052450e-02f,-6.04697131e-02f,
-5.74849956e-02f,-4.26286794e-02f,-7.32063800e-02f,+6.92001507e-02f,-2.25702673e-02f,
-6.77933097e-02f,+4.21237722e-02f,-6.77725226e-02f,+1.03541352e-01f,+3.03188190e-02f,
-5.88205978e-02f,-2.66687199e-02f,-8.93585607e-02f,-8.49415362e-02f,-6.77536204e-02f,
-7.46909901e-02f,-2.00351253e-02f,+9.56304446e-02f,-2.59080529e-03f,+1.02370314e-01f,
-9.08202082e-02f,-3.51792872e-02f,+5.03991172e-02f,-6.38712794e-02f,+8.19693580e-02f,
+1.63957328e-02f,-6.25215545e-02f,-2.07562745e-03f,-6.18004091e-02f,-5.09885624e-02f,
+1.41735887e-02f,+1.89645533e-02f,-9.34576243e-02f,-4.25396562e-02f,+9.55992565e-02f,
+9.04747546e-02f,-6.93286881e-02f,-1.02746159e-01f,+1.00613564e-01f,-9.66217220e-02f,
+4.34095189e-02f,-6.12408072e-02f,-2.15301923e-02f,+4.07938566e-03f,-2.96474751e-02f,
-1.06428958e-01f,+6.68997839e-02f,-3.46568972e-02f,+2.34768223e-02f,+6.36752471e-02f,
+6.86820410e-03f,-2.53874380e-02f,-3.08437329e-02f,+8.92352015e-02f,-2.81057972e-02f,
-6.09338433e-02f,+8.11906978e-02f,+2.94594374e-03f,-5.10867313e-02f,-6.90337494e-02f,
-9.64806229e-02f,+7.64251919e-03f,+1.00867651e-01f,-7.77611658e-02f,+3.27912197e-02f,
-1.12470239e-02f,+1.70520544e-02f,-3.46917287e-02f,-2.06832588e-02f,+4.95902672e-02f,
-1.86968893e-02f,+6.17311522e-02f,-7.08611831e-02f,+2.87633315e-02f,-8.19579512e-02f,
-4.02801484e-03f,-4.41133119e-02f,-1.00327581e-02f,+1.32774860e-02f,-8.87228251e-02f,
-3.18686590e-02f,+9.27711502e-02f,-2.32833549e-02f,+1.00132056e-01f,+5.20557240e-02f,
-2.63733640e-02f,+3.70073318e-03f,-4.95816730e-02f,-6.59886301e-02f,+4.92523834e-02f,
+5.20656332e-02f,+5.07428572e-02f,-4.11448926e-02f,-2.16294006e-02f,-4.74297218e-02f,
+1.90929212e-02f,-3.36329266e-02f,+5.41043468e-02f,+8.69809464e-02f,-3.28284167e-02f,
-7.07473606e-02f,+3.26690450e-02f,+8.21781158e-02f,+4.68056127e-02f,+1.21167731e-02f,
+5.01722693e-02f,-1.09085497e-02f,-9.46514606e-02f,-4.53621708e-02f,+2.95534488e-02f,
+8.76844674e-02f,-6.15211986e-02f,-3.79081778e-02f,-5.95071912e-02f,+8.64389353e-03f,
-8.56045112e-02f,-6.31948560e-02f,-9.38017368e-02f,+9.62423459e-02f,+7.46556595e-02f,
+1.17327116e-01f,-7.63989091e-02f,+3.42915505e-02f,+4.81215641e-02f,-5.03013358e-02f,
+7.19905943e-02f,-9.55316424e-02f,+6.15184568e-02f,-8.34324397e-03f,+5.32644102e-04f,
+7.52993971e-02f,-1.55189279e-02f,+3.39507125e-02f,-1.02753952e-01f,-1.02572821e-01f,
+6.71282858e-02f,+4.45462279e-02f,+8.12405422e-02f,-8.22881237e-02f,+4.39430848e-02f,
-5.92872463e-02f,+6.21951111e-02f,-4.46225107e-02f,+1.96528062e-02f,+3.93393822e-02f,
-9.92160514e-02f,+2.33327262e-02f,+6.04714118e-02f,-5.59697114e-02f,+5.51069044e-02f,
-9.51387361e-02f,-4.84760553e-02f,-2.12859381e-02f,-8.34192112e-02f,-1.09363005e-01f,
-2.86495946e-02f,+4.91723046e-02f,-6.37621507e-02f,+7.93284252e-02f,-8.06838870e-02f,
+3.82881537e-02f,+4.99140844e-02f,+9.51544121e-02f,-9.01400521e-02f,+7.93426707e-02f,
+8.74919817e-02f,-9.09985155e-02f,+5.09470478e-02f,-8.09587166e-02f,-5.52076772e-02f,
+5.70289567e-02f,+5.65628037e-02f,+3.11987177e-02f,+1.37172937e-02f,-5.27941436e-03f,
+2.40097567e-02f,-9.85775813e-02f,-8.16351697e-02f,+4.10015509e-02f,+7.25615546e-02f,
+9.20734629e-02f,+7.81401768e-02f,-8.17476958e-02f,+8.35180059e-02f,+2.91833058e-02f,
+6.46916777e-03f,+8.79597291e-02f,-5.35520986e-02f,-7.15385377e-03f,+9.24619660e-02f,
+6.68976456e-02f,-5.37859388e-02f,-1.69278160e-02f,+2.40748357e-02f,-1.07102068e-02f,
+7.69034624e-02f,-4.30290028e-03f,-7.27939755e-02f,-5.50454333e-02f,+9.70091149e-02f,
+5.78856654e-02f,-4.81412783e-02f,-7.79548958e-02f,+3.26528288e-02f,+5.69772422e-02f,
-6.80477917e-02f,+6.35583624e-02f,+3.81611958e-02f,+7.40147606e-02f,-3.18282992e-02f,
-1.91991050e-02f,+4.64238152e-02f,+1.31075215e-02f,-7.89070874e-02f,-4.12127711e-02f,
+1.86349582e-02f,+7.26152062e-02f,-1.01514883e-01f,+4.11394984e-02f,-1.08836638e-02f,
+4.55139503e-02f,-8.38139504e-02f,+5.79036064e-02f,+2.67137382e-02f,-5.80067709e-02f,
+3.70272920e-02f,-8.63619223e-02f,-5.50160110e-02f,-9.54605788e-02f,+5.69774918e-02f,
+1.10155120e-02f,+5.98311387e-02f,-5.11599891e-02f,+8.57294425e-02f,+1.02271602e-01f,
+8.25663432e-02f,-6.18314743e-03f,-1.23491883e-03f,+4.90898900e-02f,+2.24801973e-02f,
-4.95558865e-02f,-4.47088629e-02f,-4.90892120e-02f,-9.02623907e-02f,-6.87987208e-02f,
+8.06343183e-02f,+1.17750689e-02f,+3.01997028e-02f,+6.42917901e-02f,-5.58562726e-02f,
+2.98005864e-02f,+1.49466032e-02f,-2.22120471e-02f,+2.57984381e-02f,+8.42033178e-02f,
-4.15448546e-02f,-3.32916491e-02f,-1.15632461e-02f,-4.25913744e-02f,+3.61411944e-02f,
-1.99898779e-02f,+7.87665397e-02f,+5.65775707e-02f,-1.08852409e-01f,+6.13247566e-02f,
-4.05018292e-02f,+9.51597542e-02f,-7.22424313e-02f,+4.70419154e-02f,-2.99600661e-02f,
+1.08473608e-02f,+9.45900753e-02f,-9.37957130e-03f,-5.83227240e-02f,+8.24733600e-02f,
+6.27969876e-02f,+4.46108654e-02f,-4.08633798e-02f,-1.50639433e-02f,-9.53344852e-02f,
+5.00113033e-02f,+8.11157748e-02f,-2.95159519e-02f,+7.57250637e-02f,+7.70355240e-02f,
+9.16817933e-02f,-5.34237362e-02f,-4.91166152e-02f,+7.33279660e-02f,-2.03075726e-02f,
-5.75026236e-02f,+5.00072613e-02f,+8.76441374e-02f,+6.35172129e-02f,+2.28376351e-02f,
-8.29808712e-02f,-3.45330015e-02f,+1.29894996e-02f,-4.42838594e-02f,-8.74799490e-02f,
-2.28595901e-02f,-1.08278245e-01f,+1.60460994e-02f,+6.33474365e-02f,+6.68501705e-02f,
+3.55251506e-02f,-7.45593905e-02f,+4.46594581e-02f,-2.92956531e-02f,-6.25214204e-02f,
-7.02377548e-03f,+1.06232412e-01f,-3.67016643e-02f,-3.50443088e-02f,+6.40330389e-02f,
+4.28572670e-02f,-2.25691367e-02f,-9.45882127e-02f,-1.00993842e-01f,-6.00362308e-02f,
-4.33004387e-02f,-2.98249200e-02f,-6.77014515e-02f,-2.75779366e-02f,-2.10812669e-02f,
+8.08029175e-02f,+2.14650556e-02f,-7.58863315e-02f,+3.99359241e-02f,-1.11942932e-01f,
-8.77486020e-02f,+2.82311216e-02f,+4.92322147e-02f,-4.12911475e-02f,+3.51982415e-02f,
+6.21019974e-02f,+9.92405713e-02f,+8.27317312e-02f,-2.83087064e-02f,+8.37975964e-02f,
+3.76378968e-02f,-4.64267880e-02f,+8.47113281e-02f,+2.50514466e-02f,-8.26675594e-02f,
-1.01408750e-01f,-4.58635204e-02f,-6.30318522e-02f,-3.79693136e-02f,+2.72231698e-02f,
-7.48263448e-02f,-7.81764369e-03f,-6.74185343e-04f,+8.82530510e-02f,+2.26596389e-02f,
+2.51457710e-02f,+4.08394039e-02f,-3.52029391e-02f,+7.07247555e-02f,+1.37431892e-02f,
+2.97607649e-02f,+5.08494042e-02f,-7.86454693e-05f,-1.05391994e-01f,+2.83032749e-02f,
-1.35347843e-02f,+2.37507038e-02f,+2.69823894e-02f,-1.40146744e-02f,-6.62292689e-02f,
-5.22945486e-02f,-1.08801335e-01f,-2.55781375e-02f,-1.65757034e-02f,-4.54871915e-02f,
+6.06269017e-02f,+7.83147737e-02f,-9.06818882e-02f,+3.54122892e-02f,-2.66750567e-02f,
+9.27210152e-02f,-4.69862334e-02f,-5.32334596e-02f,-6.60198927e-02f,+8.31059217e-02f,
-4.77889404e-02f,+7.09067211e-02f,+8.02024826e-03f,+6.73254505e-02f,+8.20955783e-02f,
+3.02665848e-02f,-7.84732029e-02f,-1.15278456e-02f,+2.05511153e-02f,-7.39614516e-02f,
+3.64894830e-02f,+9.01795030e-02f,+4.96409740e-03f,-9.79180858e-02f,-7.89879486e-02f,
+9.27136913e-02f,-1.97378099e-02f,+8.42310265e-02f,-7.23754289e-03f,-6.91828206e-02f,
+3.87821272e-02f,-8.32365267e-03f,-2.87832823e-02f,-9.47824046e-02f,+1.53746633e-02f,
-1.25368722e-02f,-3.51879038e-02f,+1.64493453e-02f,-6.58163044e-05f,-6.45928383e-02f,
+3.60965058e-02f,-1.94923184e-03f,-1.01158526e-02f,-7.49879330e-02f,-5.38526103e-02f,
-4.68376279e-03f,+1.70817263e-02f,+2.85327295e-03f,-3.03009041e-02f,-3.15939821e-02f,
-2.99595259e-02f,+2.55245585e-02f,-1.04101717e-01f,-3.00430786e-02f,-7.19330683e-02f,
-6.89974576e-02f,+3.77414301e-02f,-6.51367083e-02f,+2.37326249e-02f,-4.42624092e-02f,
-3.01525537e-02f,-7.97922164e-02f,+6.75656423e-02f,-6.61581848e-03f,-4.49109674e-02f,
+2.91481912e-02f,-1.24701457e-02f,+8.89869705e-02f,-5.06794490e-02f,+7.00330958e-02f,
-2.48776637e-02f,+2.33123638e-02f,+7.47252554e-02f,+4.61754799e-02f,+6.13735169e-02f,
+4.02403884e-02f,-9.51899663e-02f,-8.88603106e-02f,-6.94126114e-02f,-3.96290272e-02f,
-1.01972036e-01f,+8.33954755e-03f,-1.06682919e-01f,+8.81424472e-02f,-3.51041853e-02f,
-7.50017315e-02f,+1.02347424e-02f,+7.06273913e-02f,-1.17273703e-02f,-9.14819688e-02f,
-6.45799339e-02f,-4.48283851e-02f,+1.69184897e-02f,-6.02698438e-02f,-7.72233009e-02f,
+7.61253461e-02f,+5.46280183e-02f,+1.00089155e-01f,-1.58832613e-02f,-8.24758410e-02f,
-7.56621659e-02f,-1.72010455e-02f,+6.69570491e-02f,-9.16587934e-02f,-3.77116837e-02f,
+5.10574579e-02f,-8.32823813e-02f,-9.03220177e-02f,+8.01736023e-03f,+3.55863906e-02f,
+4.57162112e-02f,+8.19578022e-02f,-6.82587102e-02f,+3.10727172e-02f,+7.31770918e-02f,
-5.11827581e-02f,-4.69972901e-02f,-4.92672548e-02f,-2.04086639e-02f,-1.14922881e-01f,
-8.45537111e-02f,+6.21537119e-02f,+4.23356891e-04f,-3.10261231e-02f,-9.39721912e-02f,
-1.55143756e-02f,+8.82974416e-02f,-4.97774966e-02f,+7.56231472e-02f,-9.04066935e-02f,
-1.08007647e-01f,+2.07190346e-02f,-5.82482666e-03f,-6.04227260e-02f,+7.51459599e-02f,
-1.03527509e-01f,-1.01662047e-01f,-2.98187155e-02f,-1.73983350e-02f,+1.04868725e-01f,
-4.64897826e-02f,+7.94370025e-02f,+7.03413561e-02f,+3.10824718e-02f,+7.56734684e-02f,
-2.14052461e-02f,-5.80846667e-02f,+1.02843001e-01f,+3.21715474e-02f,+6.44720718e-02f,
-1.08724497e-01f,+1.19774798e-02f,+9.15691033e-02f,-6.49590194e-02f,+8.30693319e-02f,
+3.06887552e-02f,+5.83066195e-02f,+8.61559510e-02f,+5.31698205e-02f,-1.79408565e-02f,
+9.27851126e-02f,+4.27380055e-02f,-9.10165235e-02f,-7.60260895e-02f,-5.07728569e-02f,
-4.30578180e-02f,-1.74294598e-02f,-1.10591576e-02f,+1.00417547e-01f,+7.78306797e-02f,
-9.57971811e-02f,+8.58361796e-02f,+3.32947001e-02f,-9.55210999e-02f,+4.96585593e-02f,
-1.18757263e-02f,-5.06723933e-02f,+2.72050276e-02f,+1.02300644e-02f,-2.84612626e-02f,
+1.20771378e-02f,+2.53918096e-02f,+7.72128180e-02f,-8.22721124e-02f,+8.14081654e-02f,
-6.01174906e-02f,-8.27075094e-02f,+9.61220935e-02f,+9.76375416e-02f,+3.24710235e-02f,
-4.69266921e-02f,-1.03739426e-02f,+6.96771070e-02f,-4.00554761e-02f,-9.98976827e-02f,
-6.64851218e-02f,-9.10779834e-03f,+4.88616303e-02f,-4.55816239e-02f,-9.07659233e-02f,
-5.57838008e-02f,+4.13313061e-02f,+6.84669390e-02f,-6.27735704e-02f,-7.31545985e-02f,
+4.84354720e-02f,-5.71975671e-02f,-3.59501690e-02f,-8.62832218e-02f,+1.24142552e-03f,
+1.47317909e-02f,-4.49599400e-02f,-2.73599668e-04f,-7.85016790e-02f,+2.03993190e-02f,
+6.61187395e-02f,-9.15496945e-02f,-7.30415508e-02f,+2.97336206e-02f,-4.13721539e-02f,
+9.64360218e-03f,-9.03754160e-02f,+2.54514348e-02f,-4.49581780e-02f,+6.58055544e-02f,
-8.50171223e-02f,-8.01663194e-03f,+1.04294218e-01f,-4.92972601e-03f,+7.93731958e-02f,
+3.42998467e-02f,+2.11939728e-03f,+6.64509386e-02f,-6.26256540e-02f,-1.27950050e-02f,
-4.18608338e-02f,+5.95338158e-02f,-3.57654206e-02f,-2.81655206e-03f,-2.78695654e-02f,
-2.77148001e-02f,+6.06143614e-03f,+6.75637349e-02f,+1.05486192e-01f,-7.44715184e-02f,
-5.86134046e-02f,+3.11477501e-02f,+1.06641911e-01f,-3.46175879e-02f,+3.88420653e-03f,
-7.24974275e-02f,+5.68684898e-02f,-8.06685537e-02f,+1.44136697e-02f,-9.76637155e-02f,
-5.72473146e-02f,-2.77397614e-02f,+1.71692260e-02f,-4.32271287e-02f,+7.01041194e-04f,
-7.33986273e-02f,+7.69261196e-02f,+1.04954869e-01f,+3.53281037e-03f,-3.52358222e-02f,
+4.89514181e-03f,-8.06367472e-02f,-9.44159627e-02f,+7.57140741e-02f,+1.51167903e-02f,
+4.36783880e-02f,-7.42123416e-03f,+8.54276568e-02f,-7.51758665e-02f,+8.94741938e-02f,
-1.90259796e-02f,+5.44941463e-02f,+6.71406686e-02f,+4.25183177e-02f,+1.61534678e-02f,
+8.85402411e-03f,+6.13799654e-02f,-1.70139968e-02f,-6.60169944e-02f,+3.78913656e-02f,
-1.02110088e-01f,+2.75810324e-02f,-1.37799755e-02f,+8.63813907e-02f,-5.58660254e-02f,
+1.02705911e-01f,-3.29557527e-03f,+6.45098537e-02f,+5.27975149e-02f,+6.92029521e-02f,
-9.15343985e-02f,-9.29779708e-02f,-2.29887851e-02f,+2.29232572e-02f,-7.69449323e-02f,
-1.14691006e-02f,+4.21154127e-02f,-1.04154333e-01f,+8.95339921e-02f,+9.75425020e-02f,
-1.01753809e-01f,+6.50876313e-02f,+3.22944894e-02f,+4.46559228e-02f,+7.88080040e-03f,
+4.52621374e-03f,-1.47536844e-02f,-4.01172489e-02f,+7.24086687e-02f,+1.44998357e-02f,
+1.01952031e-01f,+5.85198179e-02f,-9.38693359e-02f,-1.19901793e-02f,-7.95930177e-02f,
-7.49324411e-02f,+5.50391823e-02f,-8.11858326e-02f,+8.27063322e-02f,-8.33492577e-02f,
+5.97034991e-02f,+2.52024010e-02f,+6.24332950e-02f,+4.20500450e-02f,-3.77051234e-02f,
+8.28888640e-02f,+8.28534365e-02f,-1.19710881e-02f,+6.65667877e-02f,-2.14661546e-02f,
-1.76681150e-02f,+7.79349133e-02f,+3.73228006e-02f,-4.86322828e-02f,+8.51887837e-02f,
-5.50350957e-02f,+1.25556850e-04f,+3.03991605e-02f,-6.44870624e-02f,+1.99568048e-02f,
+4.39881422e-02f,+6.77917823e-02f,-3.87077518e-02f,+4.45058718e-02f,+6.75870031e-02f,
+5.07375039e-03f,+3.48194465e-02f,+3.35239992e-02f,-4.07924615e-02f,+5.20452224e-02f,
+6.57845289e-02f,+8.53980035e-02f,-9.28071439e-02f,+5.94007447e-02f,-9.33831483e-02f,
-1.29701570e-02f,+3.73814404e-02f,-8.91381428e-02f,-8.79064351e-02f,+1.11432411e-01f,
+2.56814584e-02f,-2.43663862e-02f,+6.65692315e-02f,-3.36249359e-02f,-9.07105580e-02f,
-1.19105354e-02f,+3.64890248e-02f,-7.37449452e-02f,-3.72717902e-02f,-1.21933222e-02f,
+1.00819074e-01f,-1.60295889e-02f,+3.56789827e-02f,-1.00471579e-01f,+1.00197412e-01f,
+2.88181826e-02f,-4.82742116e-02f,+4.52833101e-02f,-2.15302408e-03f,+4.50108899e-03f,
+6.22391999e-02f,+5.78343756e-02f,-5.97927608e-02f,+2.59332452e-02f,-2.25120038e-03f,
+9.78719667e-02f,+6.99543357e-02f,+7.78920949e-02f,+5.26551120e-02f,+3.94979790e-02f,
+7.84429312e-02f,-2.04837769e-02f,-1.92301106e-02f,+4.45417427e-02f,-4.10820581e-02f,
-6.72890693e-02f,-1.04456618e-02f,+9.50327367e-02f,+9.38366801e-02f,+3.99066173e-02f,
+3.63331065e-02f,+8.83360356e-02f,+3.49786989e-02f,+1.04555927e-01f,+6.81889877e-02f,
+4.51677516e-02f,-5.19103259e-02f,+6.51086867e-02f,+3.05318199e-02f,-7.61478767e-02f,
+1.10999495e-02f,+8.36890005e-03f,-3.43797617e-02f,-7.93748051e-02f,+7.93379173e-02f,
+1.20539837e-01f,+3.98040339e-02f,+3.93141583e-02f,+3.61643992e-02f,+5.30320369e-02f,
-4.83842231e-02f,+3.41477431e-02f,-2.69512236e-02f,+5.40018491e-02f,-6.80239424e-02f,
+9.72722918e-02f,-5.06894030e-02f,-8.02030414e-02f,+5.49350455e-02f,-3.50298136e-02f,
-2.37964503e-02f,-2.74220090e-02f,-4.67668194e-03f,+5.38062491e-02f,+9.19789523e-02f,
-6.43637925e-02f,-1.62411258e-02f,-2.26601362e-02f,-8.51927400e-02f,-7.49621764e-02f,
+1.07991090e-03f,+9.44447592e-02f,+2.15478837e-02f,-1.03000723e-01f,-8.77476558e-02f,
+1.82973742e-02f,+9.68647152e-02f,-4.33091819e-03f,-3.57620083e-02f,+6.75051734e-02f,
+3.90270725e-02f,+3.75905111e-02f,-7.85187110e-02f,+4.20407876e-02f,-1.66844521e-02f,
-6.75774515e-02f,+1.72951221e-02f,+8.24056342e-02f,+5.78089543e-02f,+6.38990700e-02f,
-9.68150571e-02f,-6.35262486e-03f,+1.10818155e-01f,+1.72346830e-04f,+7.04175457e-02f,
+8.05433914e-02f,+9.55868885e-02f,+2.80506238e-02f,-1.92576461e-02f,-6.77893013e-02f,
+9.65164453e-02f,-7.21268356e-02f,+4.72808518e-02f,+8.31240490e-02f,+4.93808612e-02f,
-1.15794996e-02f,-7.89803639e-02f,+9.53403562e-02f,-5.25418557e-02f,-1.09647736e-01f,
-4.62977737e-02f,+8.01966339e-02f,-1.90168172e-02f,+4.44612280e-02f,-4.45784852e-02f,
+8.67421851e-02f,+1.17047876e-02f,+5.23811802e-02f,-1.00570135e-01f,+7.65364394e-02f,
-5.99844083e-02f,+7.91063383e-02f,+3.08811441e-02f,+9.34587196e-02f,+5.71560040e-02f,
+2.07614824e-02f,+7.28433952e-02f,-7.95941055e-03f,-2.48706490e-02f,+7.37695768e-02f,
-2.23015025e-02f,+5.69891706e-02f,-2.90450156e-02f,+3.86872962e-02f,+3.03007439e-02f,
-4.20674011e-02f,+2.31427029e-02f,-1.58130080e-02f,+9.26273689e-02f,-5.70566021e-02f,
+1.92742869e-02f,-4.74020056e-02f,+1.50221735e-02f,+7.48649910e-02f,+4.93550338e-02f,
-5.69506437e-02f,+4.82921265e-02f,-9.72803384e-02f,-3.27186994e-02f,-2.91786361e-02f,
+1.96078382e-02f,+2.28581950e-02f,-2.40333807e-02f,-1.19506149e-03f,+8.15843642e-02f,
+7.18887225e-02f,+8.89943764e-02f,-7.69731700e-02f,-3.74978483e-02f,-3.06413248e-02f,
-5.37092984e-02f,-2.45495960e-02f,+3.39734592e-02f,+3.58993337e-02f,+8.61584246e-02f,
+1.54719502e-02f,-8.00501555e-02f,+7.87608474e-02f,-6.73558563e-02f,+3.63896079e-02f,
-2.86053382e-02f,-1.05271101e-01f,-2.13188659e-02f,-3.55484560e-02f,-7.08374828e-02f,
+1.13358200e-02f,-9.12741721e-02f,+2.50114724e-02f,+8.82299319e-02f,-1.38506005e-02f,
-6.40548319e-02f,-8.38866830e-02f,+6.90539107e-02f,-1.07736878e-01f,-6.84390366e-02f,
-9.11268294e-02f,-6.94078067e-03f,+3.71054038e-02f,+7.23766349e-03f,+3.01361028e-02f,
-5.37506416e-02f,+8.33481923e-02f,-3.29825026e-03f,+3.27475592e-02f,-1.28635839e-02f,
-7.23131150e-02f,-3.12540419e-02f,-1.15252864e-02f,+7.89032504e-02f,-6.77487180e-02f,
+7.95728192e-02f,-3.85851711e-02f,-9.57806334e-02f,-2.01410651e-02f,-3.59060653e-02f,
+1.21755712e-02f,+3.98858525e-02f,-3.28795463e-02f,+7.62953237e-02f,-8.61682445e-02f,
-3.10817808e-02f,-1.03882581e-01f,+1.91554818e-02f,+6.85040578e-02f,-9.57224425e-03f,
-3.63185890e-02f,-6.56915382e-02f,-3.42016816e-02f,-6.02325574e-02f,-2.78452635e-02f,
+3.90941948e-02f,-2.33039074e-02f,+4.01472896e-02f,+8.67197365e-02f,+9.60766673e-02f,
-1.96608678e-02f,+7.56702945e-02f,-1.17525458e-03f,+8.21086168e-02f,-1.02732614e-01f,
+2.04361007e-02f,-1.12144295e-02f,+7.65053630e-02f,+5.01429215e-02f,-2.39708484e-03f,
-4.53297272e-02f,-5.15950993e-02f,-5.74524179e-02f,-7.65535831e-02f,-3.80976591e-03f,
-2.40097307e-02f,-2.19083112e-02f,+1.99352112e-02f,+4.15055454e-02f,+4.39380016e-03f,
-8.75819102e-02f,+7.30205253e-02f,-6.04861649e-03f,-2.02233288e-02f,-9.90960672e-02f,
+9.46306810e-02f,-5.67747951e-02f,-1.01821102e-01f,-4.04872447e-02f,-6.22047745e-02f,
-5.67322858e-02f,+3.79855707e-02f,-6.91648424e-02f,-5.78887388e-02f,+5.18338755e-02f,
+1.01466700e-02f,-4.66060080e-03f,-2.25695060e-03f,+4.54322509e-02f,-4.70017605e-02f,
+8.58133584e-02f,-5.49197802e-03f,+1.48149924e-02f,+5.04570417e-02f,-5.95693067e-02f,
-2.61563417e-02f,-5.56325279e-02f,+4.07187566e-02f,+2.32718810e-02f,-6.99256212e-02f,
-4.56508808e-02f,-3.91065702e-02f,-5.80074564e-02f,-6.47596866e-02f,-1.77443102e-02f,
-8.36658552e-02f,+8.08120891e-02f,+8.17362741e-02f,-1.36427581e-03f,+5.14564887e-02f,
-4.30319794e-02f,-3.05670574e-02f,+1.00023150e-02f,-1.89502388e-02f,-8.93603116e-02f,
-9.84810293e-02f,-2.72969231e-02f,-7.53597319e-02f,+9.12188068e-02f,+2.55971774e-02f,
+3.83613184e-02f,+2.56220177e-02f,-9.93821025e-03f,-4.79380637e-02f,-6.89775497e-02f,
+7.06863627e-02f,+2.38659605e-02f,+2.53511891e-02f,-1.01977549e-01f,-1.11490205e-01f,
-1.96150318e-02f,+7.47636408e-02f,-2.54201889e-02f,+8.29768330e-02f,-4.86826524e-02f,
+6.68025017e-02f,+2.83061638e-02f,-1.86705347e-02f,+1.57451034e-02f,-9.70297456e-02f,
-3.87823284e-02f,+3.02183330e-02f,+1.66718720e-03f,-7.47538731e-02f,+5.14253043e-02f,
-2.20689420e-02f,+9.49343815e-02f,-4.42476794e-02f,+6.09142259e-02f,+8.78710747e-02f,
-1.34776458e-02f,-4.56458405e-02f,-9.46602896e-02f,+1.14107011e-02f,-9.18957591e-02f,
+3.81704755e-02f,-2.30960120e-02f,-5.28715365e-02f,-9.71209407e-02f,-6.61296397e-02f,
-2.07065642e-02f,-3.30788419e-02f,-9.05228704e-02f,+2.75543556e-02f,-6.93222582e-02f,
+1.00312538e-01f,+8.17081854e-02f,-1.84697658e-03f,-4.15922925e-02f,+4.87220064e-02f,
+9.23828706e-02f,+1.18062422e-02f,+3.64091471e-02f,-6.29024208e-02f,+7.68725350e-02f,
-9.19801146e-02f,+7.48633817e-02f,-3.89566272e-03f,+2.16431990e-02f,-3.94056663e-02f,
+6.62600920e-02f,-7.92114735e-02f,+8.35431144e-02f,+7.11590126e-02f,+1.02885135e-01f,
-5.71407080e-02f,-5.36443926e-02f,-4.97081429e-02f,-1.02046758e-01f,+4.76541296e-02f,
+2.16661915e-02f,+5.57299703e-03f,+3.34458128e-02f,+4.61944453e-02f,-3.20712067e-02f,
-4.15593907e-02f,-1.08069368e-01f,-5.21543063e-02f,+1.73708163e-02f,+8.06495845e-02f,
+4.63798344e-02f,+3.59300710e-02f,+7.65342489e-02f,-9.55658555e-02f,-2.25360855e-03f,
-4.55464236e-02f,+2.95218471e-02f,+1.74454320e-02f,-1.05825186e-01f,+2.33159792e-02f,
+6.45860955e-02f,-6.07199036e-02f,+3.43749151e-02f,-7.02469423e-02f,+2.55543832e-02f,
-1.02286331e-01f,+4.97352257e-02f,+8.45327526e-02f,-1.11359172e-02f,+5.53378463e-02f,
+8.48907977e-02f,+6.95647597e-02f,-5.06205596e-02f,-5.93561493e-02f,+1.33547271e-02f,
+6.55429764e-03f,-1.11933604e-01f,+8.55375677e-02f,+4.56827842e-02f,+3.76563370e-02f,
+5.80067970e-02f,-7.48087391e-02f,+3.28945927e-02f,+3.39696705e-02f,+2.39900015e-02f,
-5.12946062e-02f,+2.72549745e-02f,-6.55729547e-02f,-4.93271239e-02f,+4.98488322e-02f,
-3.91322235e-03f,+4.73138392e-02f,+6.32584766e-02f,-9.98171195e-02f,+5.05749956e-02f,
-1.00366779e-01f,+1.21021764e-02f,-9.28634405e-03f,-3.15486975e-02f,+3.03802602e-02f,
+5.05707487e-02f,-1.93422940e-02f,-3.78745124e-02f,-9.21135396e-02f,-5.95689416e-02f,
+1.05235865e-02f,+3.98969166e-02f,-2.48428509e-02f,+7.19015822e-02f,-1.12119690e-02f,
-8.06756020e-02f,-8.21227282e-02f,-3.62046361e-02f,+6.51212260e-02f,-5.71511760e-02f,
+9.56682786e-02f,+6.92335293e-02f,+3.07609662e-02f,+7.84846395e-03f,-1.87005997e-02f,
-5.41894659e-02f,-1.92582384e-02f,+7.71864429e-02f,+2.00287178e-02f,+6.08453676e-02f,
+3.84922698e-02f,-2.70999223e-03f,+6.61244616e-02f,+1.00516267e-01f,+3.05285081e-02f,
-8.86360109e-02f,+9.75458696e-02f,-2.20417678e-02f,+5.74914739e-02f,+7.01913461e-02f,
-1.35207623e-02f,+7.97368661e-02f,-4.86005209e-02f,-3.78613845e-02f,-4.03876193e-02f,
-6.67177290e-02f,-1.07002514e-03f,+5.62709197e-02f,-2.23163441e-02f,+9.27491561e-02f,
+6.99905679e-03f,-6.92113489e-02f,+9.97491777e-02f,+1.02004051e-01f,+1.62064936e-02f,
-3.69392112e-02f,+5.92443570e-02f,-7.95846879e-02f,-1.87511574e-02f,-8.48709270e-02f,
+6.24801591e-02f,+4.82857004e-02f,-3.23253348e-02f,-5.06837368e-02f,+4.51796614e-02f,
+3.97780910e-03f,+5.83344512e-02f,+3.67240869e-02f,+4.56333458e-02f,-4.06415761e-02f,
-2.96660159e-02f,+1.03750810e-01f,+1.93199944e-02f,-8.42147842e-02f,+9.02942568e-02f,
+7.87419379e-02f,+3.96750867e-02f,-3.43751833e-02f,+1.41212130e-02f,-2.10422426e-02f,
+7.67791569e-02f,+3.70361134e-02f,+9.96377543e-02f,+9.12570432e-02f,-6.72306418e-02f,
-8.38348493e-02f,+8.53200629e-03f,+3.97715569e-02f,+1.07354082e-01f,-3.03938687e-02f,
+3.77605110e-03f,+7.44789317e-02f,-2.99965497e-02f,+9.26398709e-02f,-5.40203638e-02f,
+9.84304324e-02f,-3.33808586e-02f,-5.98574616e-02f,-5.32183573e-02f,-7.74820596e-02f,
+4.22531143e-02f,+2.92971195e-03f,-1.90459229e-02f,-4.88076033e-03f,+8.56873468e-02f,
-7.43495747e-02f,+4.13490757e-02f,+6.32156357e-02f,-1.12724081e-01f,+7.31745437e-02f,
+8.40443894e-02f,+5.83093166e-02f,-8.41060504e-02f,-4.77914028e-02f,-3.52648199e-02f,
-2.04739682e-02f,+7.04408512e-02f,-1.11190505e-01f,-5.79877011e-02f,-4.81623113e-02f,
-9.64050554e-03f,-1.03566319e-01f,-6.18818253e-02f,-6.60533309e-02f,+1.40008936e-02f,
-2.46756449e-02f,-9.11136195e-02f,+7.74352327e-02f,+1.05813749e-01f,-2.12321356e-02f,
+7.00770095e-02f,+8.27645287e-02f,-7.09901601e-02f,+2.37477086e-02f,+7.60907829e-02f,
+6.36754483e-02f,-1.19564589e-04f,-6.92648664e-02f,-9.22285020e-02f,-2.41524372e-02f,
+4.88088131e-02f,+4.68311459e-02f,+6.02843091e-02f,-1.00065380e-01f,+3.81038599e-02f,
+2.54550274e-03f,+9.23816264e-02f,-8.39032605e-02f,-1.74245778e-02f,-6.93395734e-02f,
-1.93570089e-02f,-1.06734611e-01f,+8.10764581e-02f,-1.90290082e-02f,+7.23313317e-02f,
+3.56307402e-02f,-1.00461468e-01f,-6.21567145e-02f,+8.47153515e-02f,+9.24566016e-02f,
+4.93803471e-02f,-1.05604075e-01f,+3.09687983e-02f,+8.00363347e-02f,+4.11940515e-02f,
+2.90769450e-02f,-4.79845852e-02f,+8.03815350e-02f,+8.87944102e-02f,-4.75156568e-02f,
+5.30930497e-02f,-2.13507656e-02f,+9.67760086e-02f,+6.45221258e-03f,+1.37495389e-02f,
+4.02281620e-02f,+6.09255433e-02f,-6.93378374e-02f,+2.07338668e-02f,-4.43539806e-02f,
+4.08042371e-02f,+9.21881720e-02f,+7.95201883e-02f,-8.36192444e-02f,+5.87235205e-02f,
+6.95087388e-02f,+5.44448495e-02f,-9.17381346e-02f,+1.35022225e-02f,+8.07729587e-02f,
-4.00593802e-02f,+2.57726237e-02f,-7.15391785e-02f,-4.89311442e-02f,+3.29940878e-02f,
-7.34726638e-02f,+4.31707576e-02f,+6.87964857e-02f,-6.69658780e-02f,+6.75107241e-02f,
-4.22493741e-02f,+2.46163756e-02f,+1.67237222e-02f,-7.08223879e-02f,+2.01656371e-02f,
+6.49008527e-02f,-1.01164458e-02f,-6.90858671e-03f,+5.32370023e-02f,+1.42134968e-02f,
+8.27525184e-02f,+9.32440385e-02f,-1.01275472e-02f,-4.23729643e-02f,-4.50899415e-02f,
-6.48693927e-03f,-2.93686315e-02f,+8.42717011e-03f,-1.08736649e-01f,-1.37182642e-02f,
+3.99131440e-02f,-6.82421029e-02f,+4.14560549e-02f,+1.53902248e-02f,-2.60575600e-02f,
+2.68365946e-02f,-6.20706305e-02f,+3.57175320e-02f,+8.94787014e-02f,+4.75554615e-02f,
+1.01022325e-01f,+2.40021087e-02f,-3.80868502e-02f,+7.53133819e-02f,-1.05503790e-01f,
-5.16394712e-02f,+5.95842749e-02f,-8.73611048e-02f,-2.97705922e-02f,+9.95237976e-02f,
-5.92191145e-02f,+9.95929018e-02f,+4.43406254e-02f,+6.88810721e-02f,-1.12231551e-02f,
+4.72662821e-02f,+1.45273227e-02f,-9.96570960e-02f,+3.17785665e-02f,+9.24053695e-03f,
-1.29766790e-02f,-4.78321351e-02f,+1.07076131e-01f,+2.94510499e-02f,-6.69884542e-03f,
-5.14838547e-02f,+5.13626076e-02f,+3.45045216e-02f,-7.79308751e-02f,+9.05772895e-02f,
+7.69856274e-02f,-5.93070947e-02f,+1.26821818e-02f,+1.03048451e-01f,+5.56705408e-02f,
-7.19018504e-02f,-4.37736660e-02f,-2.02772301e-02f,-8.33568722e-03f,-6.63274005e-02f,
-9.49653611e-02f,+6.00596778e-02f,+7.87172839e-02f,-8.95797536e-02f,-3.26774828e-02f,
-6.09695613e-02f,-7.94779956e-02f,+1.02840714e-01f,+5.44883683e-02f,-8.30611512e-02f,
+2.52425727e-02f,-1.09750800e-01f,-9.56579000e-02f,+3.75476889e-02f,+1.33142080e-02f,
-5.74346893e-02f,+1.02458104e-01f,-9.94721949e-02f,+1.78546179e-02f,-8.75835940e-02f,
+6.71426728e-02f,-1.07645065e-01f,+4.39409874e-02f,-4.89802510e-02f,-4.05352823e-02f,
-7.81003712e-03f,+3.03135198e-02f,-7.91446939e-02f,-3.97742614e-02f,+4.01074328e-02f,
+1.70453591e-03f,+6.96900189e-02f,+6.52830526e-02f,+3.42469029e-02f,-4.72101122e-02f,
-2.17494275e-03f,-6.41426370e-02f,-1.55699635e-02f,-2.02527808e-04f,-2.19231397e-02f,
+4.25644517e-02f,+1.86835676e-02f,+1.15461620e-02f,+6.85455054e-02f,-3.67013016e-03f,
-8.53775418e-07f,+6.41214177e-02f,+4.39853147e-02f,-9.89132896e-02f,+7.99087659e-02f,
-6.13827333e-02f,-1.39516657e-02f,+1.12318080e-02f,+8.93898830e-02f,+5.36823133e-03f,
-2.80814208e-02f,+6.09737374e-02f,+3.10827531e-02f,+4.73145545e-02f,-5.36613166e-02f,
-5.60128242e-02f,+4.06434722e-02f,+2.17111856e-02f,-6.89111575e-02f,-3.28054428e-02f,
+6.28458560e-02f,-9.19626877e-02f,-4.51670028e-02f,+8.47291499e-02f,-2.57467404e-02f,
+9.59149823e-02f,+8.26295540e-02f,-7.26043135e-02f,+1.23758428e-02f,-2.55066529e-02f,
+6.32683262e-02f,-1.03805423e-01f,+4.50238725e-03f,+3.12614292e-02f,+1.60495713e-02f,
-7.91265666e-02f,+3.38414535e-02f,+5.77425733e-02f,+4.76422794e-02f,+4.47541215e-02f,
-8.40273947e-02f,+8.29952881e-02f,+6.32715374e-02f,-7.03966990e-02f,+5.88306822e-02f,
-7.04017356e-02f,+1.20263018e-01f,+2.55246162e-02f,-8.10063034e-02f,+6.32746294e-02f,
-2.88882907e-02f,+7.28608966e-02f,-1.13015855e-03f,+3.77091654e-02f,+7.04645813e-02f,
+8.83557349e-02f,+5.81799969e-02f,+7.08621833e-03f,-5.32092303e-02f,-1.76815446e-02f,
+5.36333993e-02f,-2.76504476e-02f,+1.18492302e-02f,+3.56186666e-02f,-7.23293573e-02f,
-8.33263248e-03f,-4.26143073e-02f,+9.50984284e-02f,-1.29978210e-02f,-3.67694348e-02f,
+7.41458908e-02f,-2.84017418e-02f,-8.93610865e-02f,-3.62843014e-02f,-1.00004211e-01f,
+7.52597228e-02f,-8.52115229e-02f,-1.52182030e-02f,-3.96320224e-02f,-1.08624585e-01f,
-4.77729877e-03f,+8.71550366e-02f,+2.98649147e-02f,-3.35168988e-02f,+4.14687023e-02f,
+2.18247846e-02f,-2.69350335e-02f,+8.29129294e-02f,+7.89250210e-02f,+5.11416271e-02f,
-3.30359265e-02f,+8.29292014e-02f,-3.76094207e-02f,-3.89267206e-02f,+7.01834261e-03f,
+4.09955606e-02f,-3.03829461e-02f,-2.12679431e-02f,-2.97216475e-02f,-9.67934057e-02f,
+5.26332632e-02f,+3.78067568e-02f,+4.69141975e-02f,+2.92033330e-02f,-5.14833070e-02f,
-8.09268951e-02f,-9.04354379e-02f,-9.10368487e-02f,+1.74190775e-02f,+1.78592131e-02f,
+4.30444255e-02f,-4.78658751e-02f,+5.80163226e-02f,-6.53053075e-02f,-1.81994308e-02f,
+2.58679260e-02f,+1.96744651e-02f,+8.21323171e-02f,+5.18774427e-02f,-1.05117716e-01f,
+2.94041894e-02f,+7.00132363e-03f,+3.74219194e-02f,+9.35366303e-02f,+4.29608971e-02f,
+4.07736860e-02f,+3.18584405e-02f,-3.99442986e-02f,-5.32110408e-02f,+2.19359268e-02f,
+7.32154176e-02f,-1.01259455e-01f,+9.07359794e-02f,-3.78520973e-02f,-3.34050395e-02f,
-5.50615340e-02f,-9.41097066e-02f,+8.36478099e-02f,+2.47175386e-03f,+1.75565723e-02f,
+1.09993704e-01f,-5.48220985e-02f,-9.30849537e-02f,+5.43579981e-02f,+5.89438565e-02f,
-5.16848043e-02f,+6.03574514e-02f,+9.60951000e-02f,+7.22237527e-02f,+1.99212302e-02f,
+8.04939792e-02f,+7.37595633e-02f,+6.15748353e-02f,-2.99563482e-02f,+4.42047715e-02f,
-4.93814461e-02f,-3.64960171e-02f,+5.54677658e-02f,-3.68148759e-02f,+7.71235377e-02f,
+4.72413376e-02f,+3.68146002e-02f,+8.71020555e-03f,-5.85299404e-03f,-8.57634172e-02f,
+4.32940898e-03f,+4.14261818e-02f,-1.03689715e-01f,+9.84085947e-02f,-1.00146398e-01f,
+2.22972389e-02f,-9.93784145e-02f,+6.48206100e-02f,+1.60335898e-02f,+9.44341347e-02f,
-1.59697887e-02f,-4.80497070e-02f,-2.85239667e-02f,-4.47521880e-02f,+9.46938321e-02f,
+8.34345669e-02f,+7.39085898e-02f,+9.86735821e-02f,-5.95163815e-02f,+5.56298643e-02f,
-5.65806665e-02f,+5.36105148e-02f,+1.00951560e-01f,+9.17308405e-02f,+7.37956986e-02f,
+7.79380426e-02f,-5.91915697e-02f,+2.11799648e-02f,-9.85897928e-02f,-5.23658805e-02f,
+1.28087932e-02f,+1.02561362e-01f,+7.04557598e-02f,-7.12447986e-02f,+3.49255688e-02f,
-9.13549066e-02f,-5.55422797e-04f,-3.93729955e-02f,+4.09004726e-02f,-3.19966078e-02f,
+4.34236303e-02f,+6.89004436e-02f,-1.04656398e-01f,+2.00626459e-02f,-1.51644154e-02f,
-7.42482021e-02f,-7.66705126e-02f,-1.01059720e-01f,-3.98935936e-02f,+1.87325906e-02f,
-4.30479087e-02f,-1.11715928e-01f,-3.91415432e-02f,-8.08428880e-03f,+3.29922624e-02f,
-2.50284933e-02f,-8.56074765e-02f,-5.84765524e-02f,-3.67488898e-02f,+8.61595571e-02f,
+6.00864515e-02f,-8.59297812e-02f,-2.83742081e-02f,+6.45661131e-02f,+9.77561995e-03f,
+7.42220208e-02f,-7.92433396e-02f,+1.98387895e-02f,-1.04682550e-01f,+8.40552002e-02f,
+2.91141439e-02f,+3.14580277e-02f,-9.39197466e-03f,+3.33315730e-02f,+2.37221923e-02f,
+7.94208422e-02f,-2.27296241e-02f,+8.03372860e-02f,+8.13609660e-02f,+7.90967047e-02f,
-3.40121388e-02f,+9.17767957e-02f,+2.46426612e-02f,-6.09883033e-02f,+7.94581249e-02f,
-6.62786216e-02f,-3.15438360e-02f,-2.97486708e-02f,-5.01162335e-02f,-3.23384255e-02f,
-7.07609579e-02f,-1.10131353e-01f,+4.76642745e-03f,-2.07124799e-02f,-4.12555896e-02f,
-4.59628403e-02f,+9.38659757e-02f,-4.51838970e-02f,-4.97667268e-02f,-6.97412714e-02f,
-6.54782578e-02f,+5.40484749e-02f,-9.11557898e-02f,-1.59356147e-02f,+9.15598050e-02f,
+7.65317455e-02f,-6.89360127e-02f,+9.58466306e-02f,+3.33627835e-02f,-7.58682191e-02f,
+5.63453883e-03f,-9.11942944e-02f,-3.93956974e-02f,-7.80573487e-02f,-9.02576745e-03f,
+6.71832040e-02f,+9.98062640e-03f,-1.00296810e-01f,+3.49115580e-03f,+1.98993385e-02f,
-5.47516160e-02f,+3.31327841e-02f,-7.07630813e-02f,+1.08469278e-02f,+4.12874147e-02f,
+8.99154022e-02f,+2.26062313e-02f,-1.99220330e-03f,+3.00624743e-02f,-6.93984553e-02f,
-4.85768579e-02f,+2.96094939e-02f,-2.63870284e-02f,+7.30160847e-02f,+4.48374078e-02f,
+3.13668326e-02f,+3.27867642e-02f,-3.34994718e-02f,+9.44757536e-02f,+9.31679383e-02f,
+7.52286091e-02f,-2.52957158e-02f,-1.09765925e-01f,-5.89839257e-02f,+5.01425564e-02f,
-7.46011958e-02f,-4.95461002e-02f,-9.30675417e-02f,-9.68337655e-02f,-7.98280314e-02f,
-8.77298191e-02f,-5.76748587e-02f,-9.40913111e-02f,+4.49258387e-02f,+8.16283599e-02f,
-8.76323208e-02f,-6.10856758e-03f,-6.79248124e-02f,+1.14903115e-01f,-7.17235506e-02f,
-1.57837346e-02f,+2.05152892e-02f,+1.91890933e-02f,-8.10943842e-02f,-1.02383882e-01f,
+1.92595250e-03f,-1.05690053e-02f,-1.16308533e-01f,-6.68483302e-02f,-5.47079854e-02f,
-3.01574916e-02f,+2.27582902e-02f,-6.58140406e-02f,+8.69571324e-03f,+8.73897970e-02f,
+6.35370761e-02f,-9.14417356e-02f,+7.87781179e-02f,+4.74266075e-02f,-3.25188637e-02f,
-9.29977074e-02f,-9.85926315e-02f,+7.48042539e-02f,+2.12394651e-02f,+7.12627918e-02f,
-1.00640475e-03f,-2.52899394e-04f,-8.16804469e-02f,+7.32435212e-02f,-1.71960145e-03f,
+8.65712315e-02f,+4.79921699e-03f,-5.86241707e-02f,+3.67395803e-02f,-1.64043773e-02f,
+3.98327224e-02f,-6.86660260e-02f,-6.70244247e-02f,+8.64240713e-03f,+2.11637020e-02f,
+5.48659079e-03f,+5.76018170e-03f,-5.56963217e-03f,-4.18283008e-02f,-6.31864965e-02f,
-5.29935360e-02f,-8.36633295e-02f,-6.98659867e-02f,+2.55946126e-02f,+7.17300326e-02f,
-1.82876382e-02f,-8.75198469e-02f,+7.07653165e-02f,+9.43531692e-02f,+9.67853051e-03f,
-8.41642022e-02f,-6.44504279e-02f,+5.08774146e-02f,+2.90374532e-02f,+3.59341415e-04f,
+5.29934559e-03f,+4.21493873e-02f,-7.54107833e-02f,+2.25811452e-03f,-1.03824086e-01f,
-1.68789476e-02f,+4.57187276e-03f,+5.05282059e-02f,-4.51981016e-02f,-9.08672139e-02f,
-7.93857500e-02f,-5.01306951e-02f,-4.42906283e-03f,-4.56954055e-02f,-9.07003209e-02f,
-3.95499356e-02f,-7.26210922e-02f,-7.59486854e-03f,-8.06253254e-02f,-9.08390880e-02f,
-2.69709378e-02f,+7.78839365e-02f,+6.91939145e-03f,-3.26508284e-02f,+5.29233441e-02f,
+7.52421692e-02f,-7.20114708e-02f,-4.42078114e-02f,-2.60508060e-03f,-1.88694820e-02f,
+8.23951587e-02f,-7.83311054e-02f,-6.86196983e-02f,+5.96782342e-02f,-3.79920900e-02f,
-5.82874678e-02f,+5.84072247e-02f,+1.02765672e-01f,-6.84995800e-02f,-2.22331956e-02f,
-8.09877664e-02f,-2.75664404e-02f,-6.93309009e-02f,-6.10721484e-02f,+1.04248784e-01f,
+3.95979360e-02f,+9.96032357e-03f,+2.07397714e-02f,+8.35560411e-02f,-6.71236515e-02f,
-4.11846042e-02f,+7.07073435e-02f,+6.84164613e-02f,+8.67773816e-02f,-7.90114626e-02f,
+3.62382010e-02f,+7.22839162e-02f,-2.34847534e-02f,+7.55098015e-02f,-7.85704926e-02f,
-4.18379530e-02f,+4.03273776e-02f,+1.71905234e-02f,+3.94829586e-02f,+5.57881109e-02f,
-5.31944185e-02f,+7.70693496e-02f,+7.38825873e-02f,-4.69942428e-02f,+8.09488967e-02f,
+3.96750234e-02f,+6.85158148e-02f,-1.12345815e-02f,+7.96195567e-02f,+1.10741116e-01f,
-3.68939489e-02f,-1.60948187e-02f,+8.96877125e-02f,+9.19951946e-02f,+1.12980582e-01f,
+8.16239119e-02f,-4.36098427e-02f,-5.94527870e-02f,+6.04915572e-03f,+1.00002717e-02f,
-5.09339198e-02f,+7.37893060e-02f,-4.72242795e-02f,-7.07023516e-02f,-1.71099398e-02f,
-6.42366335e-02f,-4.13586237e-02f,-2.72122957e-02f,-8.56033247e-03f,+6.18541948e-02f,
-2.67315712e-02f,-4.64895070e-02f,-9.26726162e-02f,+4.98505197e-02f,-6.78568557e-02f,
-3.03440206e-02f,-3.50720324e-02f,-2.21257862e-02f,+6.02325797e-02f,-3.90539803e-02f,
-5.05993254e-02f,+8.90946686e-02f,+2.47990116e-02f,+3.26223224e-02f,-1.60356108e-02f,
+8.67569372e-02f,-1.07911630e-02f,-5.44652157e-02f,-6.37805089e-02f,-1.93612240e-02f,
+5.35211004e-02f,+3.38443788e-03f,+4.92440769e-03f,-4.12727557e-02f,-7.67826885e-02f,
-5.59325255e-02f,-5.38142398e-02f,+9.12992433e-02f,-7.78485462e-02f,+8.17552805e-02f,
-5.79753378e-03f,-1.09254941e-01f,+9.07460749e-02f,+9.67919677e-02f,-5.32402396e-02f,
+7.69052804e-02f,+4.82563674e-03f,-4.63831834e-02f,-1.02798596e-01f,+7.88972229e-02f,
-5.55071831e-02f,-2.52436232e-02f,+2.23666001e-02f,+2.13216711e-02f,+7.42489845e-02f,
-4.86546829e-02f,+4.81506735e-02f,-9.70182999e-04f,-6.96120411e-03f,-1.03447407e-01f,
-1.52388830e-02f,+9.13111567e-02f,+9.35748592e-02f,-6.59201890e-02f,-8.64024162e-02f,
-1.01599265e-02f,-4.26744744e-02f,-1.00177780e-01f,-6.67691901e-02f,-4.31880467e-02f,
-8.06189254e-02f,-8.75577778e-02f,-4.74290662e-02f,+4.88422103e-02f,+1.08419545e-02f,
+9.46877748e-02f,+3.71665284e-02f,+3.45053617e-03f,+9.85467359e-02f,+1.17143681e-02f,
-1.08608874e-02f,-3.35518308e-02f,-6.54648840e-02f,-6.41090721e-02f,-3.22950371e-02f,
-5.31884022e-02f,-9.18679610e-02f,-5.69196865e-02f,+1.38088148e-02f,-9.90806594e-02f,
-2.90631559e-02f,-2.75274813e-02f,+2.65438482e-02f,+8.13073143e-02f,-5.71337231e-02f,
+7.23036453e-02f,+8.41373578e-02f,-8.83169919e-02f,+5.30716032e-03f,-8.55256245e-02f,
-7.86869600e-02f,-1.24548301e-02f,-2.67417058e-02f,-7.03959316e-02f,+1.01608552e-01f,
-4.52195108e-02f,+6.47183731e-02f,+1.97418183e-02f,-9.03975293e-02f,+9.94450822e-02f,
+4.77114543e-02f,-1.52544826e-02f,+1.86152384e-02f,+6.47777840e-02f,+7.32802600e-03f,
-6.36091679e-02f,-9.00784060e-02f,-8.92063528e-02f,-1.29972249e-02f,+9.72946808e-02f,
-5.07747382e-03f,+5.88181391e-02f,+4.93659899e-02f,+2.99507156e-02f,-4.12672525e-03f,
-8.09860528e-02f,+8.09758082e-02f,-5.13453633e-02f,-9.74968076e-02f,+5.66520505e-02f,
-9.17214453e-02f,+2.02320851e-02f,-5.61659001e-02f,-9.10973549e-02f,+1.95810851e-02f,
-9.32301134e-02f,+3.65882739e-02f,+4.76877615e-02f,-9.05621648e-02f,+1.44506190e-02f,
-8.58068839e-02f,-2.90472843e-02f,+4.62896749e-02f,-2.38840366e-04f,+5.26434742e-02f,
-1.04154758e-01f,+1.35107692e-02f,-6.90855384e-02f,-6.26971654e-04f,+3.72636206e-02f,
-9.38929990e-02f,-1.78235248e-02f,-4.11780514e-02f,+7.01605305e-02f,+1.00013025e-01f,
-8.68841112e-02f,-9.23036486e-02f,-9.51732844e-02f,-3.60689983e-02f,+7.16699883e-02f,
-4.87488769e-02f,+7.32960179e-02f,-9.90525484e-02f,+2.04306170e-02f,+4.44696173e-02f,
+9.37403515e-02f,-5.15182093e-02f,-9.74542350e-02f,-2.17477381e-02f,-7.71524161e-02f,
-1.97255164e-02f,-8.12728330e-02f,-1.32258311e-02f,-6.95940107e-03f,+7.54758939e-02f,
+2.51879618e-02f,+7.26233050e-02f,-1.02047004e-01f,+9.32216272e-02f,-3.47685516e-02f,
+5.50324544e-02f,+4.78038117e-02f,+5.14513254e-03f,-4.11053821e-02f,+7.89706409e-03f,
+2.40065530e-02f,+7.85216689e-03f,-1.50190704e-02f,-2.90725157e-02f,+1.05658518e-02f,
-4.76630032e-02f,-5.91171123e-02f,-5.57978153e-02f,+9.65412408e-02f,+2.92212721e-02f,
+5.08204624e-02f,+1.02950800e-02f,-3.63904499e-02f,-5.44089898e-02f,+1.50864199e-02f,
+8.46247226e-02f,+4.11942378e-02f,-2.61980947e-02f,+9.49393734e-02f,-5.62833995e-02f,
-3.13850716e-02f,+5.02419546e-02f,+8.16820711e-02f,+5.62662892e-02f,+1.21793766e-02f,
+8.17941278e-02f,+6.96620196e-02f,+1.00357719e-01f,+9.30903703e-02f,-4.65930998e-02f,
-2.32977476e-02f,-6.35650679e-02f,-1.82944499e-02f,-9.35976878e-02f,+6.05989546e-02f,
-9.77860764e-02f,+3.00689768e-02f,+9.67277661e-02f,+4.36788015e-02f,+4.11527343e-02f,
-2.21387018e-02f,+4.59191203e-02f,-5.91163896e-02f,+1.04511832e-03f,+3.17790210e-02f,
-7.85651878e-02f,+5.12987114e-02f,+2.20539398e-03f,+4.82350141e-02f,-6.45345971e-02f,
+3.49002250e-04f,-8.91496837e-02f,-2.64238287e-02f,-1.31994411e-02f,-6.19565658e-02f,
-7.68602313e-03f,+6.50542751e-02f,+2.61689294e-02f,+7.99175911e-03f,-4.15475741e-02f,
-8.25169310e-02f,+7.40496442e-02f,+4.70287539e-02f,-2.70682592e-02f,-5.99678606e-02f,
-9.43840146e-02f,-1.03230245e-01f,+6.60255551e-04f,-2.94478908e-02f,+4.10936773e-04f,
-1.17610767e-02f,+6.86532483e-02f,-8.28200430e-02f,+1.01466231e-01f,-2.68022493e-02f,
+5.36778942e-02f,-6.57562166e-02f,-5.32650761e-02f,+1.00879483e-01f,-4.51237597e-02f,
-6.67089447e-02f,+7.92083666e-02f,+8.07996467e-02f,-1.02579661e-01f,-2.68992037e-02f,
-5.62804453e-02f,+1.42591372e-02f,+9.52551439e-02f,+9.07765254e-02f,+3.92230228e-02f,
-3.88961956e-02f,-8.30437839e-02f,-5.96412979e-02f,+7.03693405e-02f,+8.10303614e-02f,
+4.34331074e-02f,-4.59411554e-02f,-6.55038953e-02f,-5.73650785e-02f,-4.12574336e-02f,
-2.03299243e-02f,+9.53262895e-02f,-3.24115381e-02f,-6.51920736e-02f,-6.59723356e-02f,
-5.24754934e-02f,-5.78562617e-02f,+1.03143491e-01f,-7.09304139e-02f,+4.78414409e-02f,
-1.50460303e-02f,-1.04686365e-01f,-6.70124069e-02f,+8.06485862e-03f,-6.43955693e-02f,
-6.22964054e-02f,-1.35926083e-02f,-1.49500370e-03f,+6.03928119e-02f,+2.56132968e-02f,
-3.28949466e-02f,-6.25730753e-02f,-4.85061780e-02f,+1.05894938e-01f,-8.08347091e-02f,
+2.20527276e-02f,+2.50554327e-02f,-2.56801620e-02f,-1.86965950e-02f,-7.31467977e-02f,
+2.59558968e-02f,+9.28483233e-02f,-6.83885738e-02f,+8.84619132e-02f,-9.72575843e-02f,
-2.56752502e-02f,-1.00656666e-01f,-5.54346293e-02f,-8.69829655e-02f,-6.12203740e-02f,
+5.45743760e-03f,-3.25774848e-02f,-6.78949282e-02f,+1.45077705e-04f,-4.86743115e-02f,
-9.06070322e-02f,-5.55279106e-02f,-3.34623158e-02f,-8.46437141e-02f,+2.62913331e-02f,
-1.06745645e-01f,-8.32458287e-02f,+3.85736004e-02f,+9.28565785e-02f,+7.48108998e-02f,
+7.81766698e-03f,+1.25025278e-02f,-1.09423496e-01f,+2.49214545e-02f,-3.71194333e-02f,
-8.42206180e-02f,-1.10211577e-02f,+5.64740375e-02f,-2.64809709e-02f,+9.75477099e-02f,
-6.33495823e-02f,-3.75602096e-02f,-6.67229760e-03f,-6.74018711e-02f,-8.84800479e-02f,
-9.45349708e-02f,+5.20062149e-02f,+9.17761847e-02f,+2.19430439e-02f,+7.47196302e-02f,
+2.13936642e-02f,+7.84695745e-02f,+8.17904100e-02f,+5.85988238e-02f,-6.01194166e-02f,
+2.51456853e-02f,-1.68841183e-02f,+3.49637563e-03f,+4.57604453e-02f,+9.18976143e-02f,
+8.73114094e-02f,-6.81701973e-02f,+6.05387054e-02f,-7.39983395e-02f,+7.30863959e-02f,
+2.74179056e-02f,+4.54301462e-02f,-3.92721519e-02f,-9.01820511e-02f,+8.80772173e-02f,
+6.56274287e-03f,-3.13567780e-02f,-8.49964097e-02f,-5.73113263e-02f,-5.77692017e-02f,
-5.61071485e-02f,-9.26039889e-02f,-9.40233395e-02f,-6.43324107e-02f,-7.37260282e-02f,
-9.74958688e-02f,+4.03327867e-02f,-1.84099730e-02f,-2.41900329e-02f,-9.74175707e-02f,
+3.44755165e-02f,+5.93087301e-02f,+5.50378077e-02f,+9.13147256e-02f,-8.99759829e-02f,
+7.44823441e-02f,-5.44127710e-02f,+8.67980123e-02f,-7.20282644e-02f,-8.96420404e-02f,
+1.50435930e-02f,+2.94310926e-03f,+8.69717598e-02f,+1.10751837e-02f,+5.56269586e-02f,
+1.03580572e-01f,-9.39758569e-02f,-7.67089948e-02f,-7.77074471e-02f,-7.70724043e-02f,
-2.90529020e-02f,-2.35134978e-02f,+3.24425958e-02f,+7.33471587e-02f,-1.76249295e-02f,
-2.48309709e-02f,+7.02178180e-02f,-9.13706794e-02f,+4.67897467e-02f,+5.67792058e-02f,
+5.20547554e-02f,+1.18963178e-02f,+1.85342529e-03f,+8.58781263e-02f,+6.07337337e-03f,
+5.30876219e-03f,-7.95648769e-02f,+9.91931558e-03f,-9.89445224e-02f,+3.41379568e-02f,
-1.75303756e-03f,+9.49232876e-02f,+9.45259705e-02f,+6.39204308e-02f,-3.73638570e-02f,
+1.01647079e-01f,+7.13136196e-02f,-1.46007445e-02f,+5.25237471e-02f,-4.56021689e-02f,
-1.04377061e-01f,-9.66896638e-02f,-6.99150860e-02f,+4.87993285e-02f,-5.67454100e-02f,
-3.02991122e-02f,+7.81288147e-02f,+1.01586521e-01f,-9.90817603e-03f,-4.31951918e-02f,
-9.54559669e-02f,-7.07638562e-02f,+7.95293078e-02f,-3.47073413e-02f,-1.07484840e-01f,
+2.14640275e-02f,+3.66331935e-02f,-8.47470611e-02f,+5.36423512e-02f,+7.68353790e-02f,
-2.70380024e-02f,-8.95018280e-02f,+1.40950875e-03f,+3.42032500e-02f,+9.37556699e-02f,
-1.03640333e-01f,+3.89320217e-02f,+9.53007564e-02f,+9.32432562e-02f,+9.45575014e-02f,
-4.70711961e-02f,+8.78870785e-02f,+3.44939455e-02f,-2.50331704e-02f,+4.55693267e-02f,
+6.64914772e-02f,+9.67928693e-02f,+1.48087256e-02f,-8.60396177e-02f,+7.91166872e-02f,
-4.95333970e-02f,-4.75091152e-02f,+2.27756798e-02f,+4.97231893e-02f,+6.07289840e-03f,
+7.56848156e-02f,+1.02716990e-01f,-1.89879686e-02f,+5.86821623e-02f,+7.45320693e-02f,
+8.63580927e-02f,-5.07708155e-02f,+4.39154394e-02f,-1.05913067e-02f,+3.90576757e-02f,
-1.27628827e-02f,-6.98183030e-02f,+2.24970169e-02f,-8.44189227e-02f,+7.85320550e-02f,
+5.09992391e-02f,-7.93516934e-02f,-1.09319702e-01f,+6.88449070e-02f,+8.17406923e-02f,
+1.00239314e-01f,-3.44442762e-02f,-9.48458984e-02f,-3.73829976e-02f,+2.48389207e-02f,
+3.84707414e-02f,+6.63511157e-02f,+5.46032041e-02f,-2.03863229e-03f,+6.94184750e-02f,
-9.20412317e-03f,+2.55282279e-02f,-5.11943176e-02f,-1.20616555e-02f,+7.77877346e-02f,
+3.16125974e-02f,-5.77342324e-02f,+9.54579264e-02f,-5.21982573e-02f,+6.60973713e-02f,
-1.00584410e-01f,-3.24671976e-02f,+6.31458983e-02f,-2.94809435e-02f,+8.00473690e-02f,
+7.82906264e-02f,-6.61643445e-02f,+9.11637396e-02f,-5.30390404e-02f,-4.33324724e-02f,
+3.35276946e-02f,-4.28701900e-02f,+7.55342469e-02f,+3.15851420e-02f,-7.38513917e-02f,
-7.08469674e-02f,-1.04729019e-01f,+8.61599445e-02f,+6.32835366e-03f,-9.15625989e-02f,
-4.11830507e-02f,+5.86626492e-02f,+7.51170889e-02f,+6.13821857e-02f,-1.92143191e-02f,
+7.82885328e-02f,-7.50433654e-02f,+4.18275557e-02f,-2.21494585e-03f,-9.48234797e-02f,
+7.89091215e-02f,-3.76274087e-03f,+2.78053209e-02f,-7.17137530e-02f,-4.43488732e-02f,
+8.06076154e-02f,+2.38186643e-02f,+7.68745616e-02f,+5.80905005e-02f,+8.67664523e-04f,
-5.97700896e-03f,+6.11589812e-02f,-9.14193466e-02f,+5.53747155e-02f,-1.07578322e-01f,
+5.61346412e-02f,+3.75851430e-02f,-2.60971719e-04f,-9.80204344e-02f,+4.71244454e-02f,
-1.03508867e-01f,-7.07263350e-02f,-7.70781189e-02f,-1.65541396e-02f,+2.80728191e-02f,
-5.30474596e-02f,-2.21974123e-02f,-1.67882070e-02f,-3.48304212e-02f,-4.14072126e-02f,
-1.00199103e-01f,-2.84193829e-02f,-1.28792068e-02f,+6.35472015e-02f,+5.34893684e-02f,
-5.15113473e-02f,+1.17632356e-02f,-8.77337754e-02f,+7.46355206e-02f,+3.58870141e-02f,
+5.61811365e-02f,-6.11118004e-02f,+7.54131377e-02f,-4.57855351e-02f,-6.82056323e-02f,
+3.78616154e-02f,+4.39643860e-02f,+4.49362583e-02f,-5.51519617e-02f,+9.82196331e-02f,
+7.01623410e-02f,+1.47284409e-02f,-3.92767042e-02f,+9.19596180e-02f,+5.79935126e-02f,
+4.31005172e-02f,-8.62974972e-02f,+8.42243657e-02f,+1.79098304e-02f,+6.82336539e-02f,
+8.23076889e-02f,+1.48272691e-02f,-9.74685550e-02f,-7.05150291e-02f,-8.05427358e-02f,
-3.54267769e-02f,+9.22089219e-02f,+2.24184860e-02f,-8.84995311e-02f,+4.78488542e-02f,
+6.57099709e-02f,-4.43906197e-03f,+7.02574179e-02f,+6.64041638e-02f,-3.09460834e-02f,
+1.05017371e-01f,+9.45034996e-02f,+3.95700708e-02f,-2.10906938e-02f,+9.11549851e-02f,
-9.67200696e-02f,+6.77643195e-02f,+2.68152356e-03f,-9.55327675e-02f,+6.63411543e-02f,
+8.49756971e-02f,-3.81752476e-02f,+1.04843937e-01f,+2.15602145e-02f,-8.02544504e-02f,
+9.40284505e-02f,-7.54230022e-02f,-8.16972181e-02f,+4.82505187e-02f,-7.30554760e-02f,
+2.18877941e-03f,-8.26641917e-02f,+8.74059722e-02f,+1.20327994e-02f,-3.01722437e-02f,
+9.30914655e-02f,-1.59077495e-02f,+2.31958106e-02f,-2.78789029e-02f,-9.95227545e-02f,
+9.78904888e-02f,-8.79295170e-04f,-5.55987172e-02f,+5.36915287e-02f,+7.19821751e-02f,
-7.38159288e-03f,-1.12908650e-02f,-4.75410633e-02f,-4.94305929e-03f,-6.28698468e-02f,
-5.11298167e-05f,-3.52336951e-02f,+7.94317424e-02f,+6.99065924e-02f,-7.06054196e-02f,
-1.07460283e-01f,-7.33348727e-03f,-7.05717877e-02f,-1.53862210e-02f,-2.44543254e-02f,
+4.07491345e-03f,+2.21849903e-02f,+6.98478296e-02f,+9.47668701e-02f,+5.40005453e-02f,
-5.52559271e-02f,-7.36454651e-02f,+1.76082868e-02f,+5.02368808e-02f,+5.23839518e-02f,
-9.72089767e-02f,-8.32914859e-02f,-8.59354157e-03f,+2.54334323e-02f,-7.85780549e-02f,
-4.02143337e-02f,+8.51132721e-02f,+2.03637034e-02f,+6.22591414e-02f,+5.00035062e-02f,
+9.74501446e-02f,+1.66075467e-03f,-6.58548251e-02f,-2.80075371e-02f,-1.37262801e-02f,
-4.63317111e-02f,+3.19772922e-02f,-4.35246257e-05f,+5.03189303e-02f,+6.14576042e-02f,
+2.84873024e-02f,-9.11565349e-02f,-7.62314871e-02f,-9.62229148e-02f,+5.06681055e-02f,
-4.80811670e-02f,+1.12196873e-03f,-5.51531091e-03f,+3.13162282e-02f,+9.81687233e-02f,
+1.04250856e-01f,+6.10190332e-02f,-5.72233088e-03f,+5.22771385e-04f,+7.52167180e-02f,
-5.49320970e-03f,+4.67367321e-02f,+4.45348844e-02f,+7.88003355e-02f,-1.16151422e-02f,
+4.88205589e-02f,+3.59470733e-02f,-1.10097557e-01f,-3.84806730e-02f,-9.42388251e-02f,
+4.41978574e-02f,+5.93307279e-02f,-4.27169427e-02f,+7.06495196e-02f,+8.19361061e-02f,
-7.46820420e-02f,+8.74006934e-03f,-4.23457883e-02f,-4.53718714e-02f,+1.77655257e-02f,
+9.90271047e-02f,-4.52572294e-02f,+6.61649555e-02f,-2.08460074e-02f,-2.38096453e-02f,
+8.22213739e-02f,+4.14771624e-02f,+9.10378993e-02f,-4.60739955e-02f,+7.93326348e-02f,
+3.04829665e-02f,+4.77535352e-02f,+8.32401589e-02f,+5.37327044e-02f,+2.49853004e-02f,
-5.02630509e-03f,-9.83342975e-02f,+5.72157204e-02f,-3.43711674e-02f,+6.78102598e-02f,
+3.51037271e-02f,-4.79442328e-02f,-6.53269589e-02f,+8.62984732e-02f,+5.74672706e-02f,
-3.52999680e-02f,-5.88050252e-03f,-8.74296501e-02f,+6.91333786e-03f,-3.03318258e-02f,
-3.22745144e-02f,+4.78448384e-02f,+6.21186569e-02f,+1.09071778e-02f,-1.53499553e-02f,
-7.66410585e-03f,-7.68287256e-02f,-1.04536861e-01f,+4.03639115e-02f,+1.00269429e-01f,
+8.97975080e-03f,+1.27725098e-02f,+1.86459087e-02f,-5.48120514e-02f,+6.77607441e-03f,
-5.09911850e-02f,-3.24884951e-02f,+7.79938465e-03f,-2.15248624e-03f,-2.88761705e-02f,
+1.51598975e-02f,-2.94482410e-02f,-3.70979756e-02f,-6.18746951e-02f,-2.52340343e-02f,
+2.46468261e-02f,-5.13297208e-02f,-2.30009817e-02f,+3.06203365e-02f,-2.86894967e-03f,
-4.24494408e-03f,-4.88065742e-02f,-5.23955747e-02f,+2.41928846e-02f,-6.33012205e-02f,
+1.03549592e-01f,-2.54397485e-02f,-6.15587234e-02f,-6.17518909e-02f,-7.18337595e-02f,
+8.88719484e-02f,-5.46120517e-02f,-7.22973719e-02f,+3.26492637e-02f,-8.10978413e-02f,
+9.53003690e-02f,+6.08023480e-02f,+3.70569155e-02f,+9.71999839e-02f,-7.25842863e-02f,
-5.46070151e-02f,+3.91403064e-02f,+5.93904220e-02f,-1.63240731e-02f,+5.23737445e-02f,
-6.27238452e-02f,-1.15920566e-02f,-8.96046013e-02f,+9.78367031e-03f,-1.74314082e-02f,
+2.95194238e-03f,-3.70288640e-03f,+2.24349126e-02f,-7.54140913e-02f,-5.34293093e-02f,
-5.03392741e-02f,-6.91520274e-02f,-7.35735614e-03f,-8.95654559e-02f,-7.27764368e-02f,
-3.91081721e-02f,-4.99937125e-02f,-2.67031081e-02f,-7.91916624e-02f,+3.34425718e-02f,
-7.93129802e-02f,-6.17988892e-02f,-1.71769783e-02f,+7.46707693e-02f,-1.89588945e-02f,
-7.01754540e-02f,+2.43473258e-02f,+8.87973532e-02f,+4.11908235e-03f,+1.61769576e-02f,
+2.36239359e-02f,+8.36941525e-02f,-7.45956153e-02f,-1.08096167e-01f,-3.52382064e-02f,
-2.41066683e-02f,-2.49852967e-02f,-6.92950338e-02f,-2.75675654e-02f,-1.80245023e-02f,
+9.08915177e-02f,+9.42346975e-02f,-6.85878545e-02f,-4.73760143e-02f,+7.24394456e-04f,
-8.52329805e-02f,-8.43204409e-02f,+1.56703535e-02f,+7.43826851e-02f,+6.81087822e-02f,
+1.07822247e-01f,-1.47903934e-02f,+7.31079727e-02f,+1.07399439e-02f,-2.17162874e-02f,
+9.51010436e-02f,+6.25214130e-02f,+8.80634785e-03f,-9.61521342e-02f,+1.99044012e-02f,
+7.60307834e-02f,+9.68919173e-02f,-1.01710670e-01f,-5.56560904e-02f,+3.36795598e-02f,
+2.61007939e-02f,+1.15702795e-02f,+4.01842594e-02f,-5.68577275e-02f,-6.12701382e-03f,
-1.01328604e-01f,-6.87932745e-02f,-5.64580001e-02f,-1.62474290e-02f,-4.76962812e-02f,
-5.06639816e-02f,-8.33548456e-02f,-3.02201007e-02f,+2.13989709e-03f,-2.74477936e-02f,
+2.32810285e-02f,-6.09060638e-02f,+4.14492935e-02f,+3.27537395e-03f,+5.26983961e-02f,
-6.35129362e-02f,+2.07683304e-03f,+2.05227584e-02f,+1.65828019e-02f,+1.06287353e-01f,
-2.19766088e-02f,-8.25023428e-02f,-5.82770966e-02f,+3.20232809e-02f,-7.56767243e-02f,
-9.74690244e-02f,-8.82944390e-02f,+1.02752320e-01f,+7.06086308e-03f,+5.48467040e-02f,
-6.21362329e-02f,-1.45220160e-02f,-4.91641462e-04f,-4.22877111e-02f,-1.05301976e-01f,
+9.50859562e-02f,-8.58282894e-02f,-6.90203905e-02f,+3.23863477e-02f,-5.33936694e-02f,
-1.67213678e-02f,-1.08777411e-01f,-2.68129930e-02f,+3.78035158e-02f,-1.88942458e-02f,
-1.13647558e-01f,+7.96921775e-02f,+3.51960249e-02f,+6.04148470e-02f,-9.79177654e-02f,
-5.19885905e-02f,+1.42114609e-02f,+7.86048546e-02f,+1.21842548e-02f,+2.35696509e-02f,
+7.72678033e-02f,-6.24073520e-02f,-7.13990629e-02f,-3.31005305e-02f,+7.82461986e-02f,
-6.83212280e-02f,-6.16480447e-02f,+3.84569392e-02f,-2.41272673e-02f,-2.58174688e-02f,
-8.29832703e-02f,-2.76874304e-02f,+1.43924654e-02f,-3.38675231e-02f,-2.57209241e-02f,
-4.12785783e-02f,+6.77145049e-02f,-1.56736150e-02f,+5.36524579e-02f,+7.64134899e-02f,
+1.65358782e-02f,-3.98776010e-02f,+9.26264450e-02f,-7.81251565e-02f,+1.47346035e-02f,
+7.68132135e-02f,+5.46696559e-02f,+8.24966133e-02f,-9.54553783e-02f,+8.19033906e-02f,
-1.24646425e-02f,-1.06165260e-01f,+7.54499659e-02f,+8.41431245e-02f,+1.02775358e-01f,
-3.23539786e-02f,+5.79636171e-02f,-3.33200358e-02f,-5.14287427e-02f,+5.99312149e-02f,
-5.16576283e-02f,-7.66196400e-02f,+7.31546208e-02f,-3.82504724e-02f,+6.13962337e-02f,
+6.52172640e-02f,-5.02198637e-02f,+6.18131943e-02f,-9.78668258e-02f,-6.43042549e-02f,
-9.85155627e-02f,+4.75632772e-02f,+3.67995054e-02f,-8.07154849e-02f,-6.30328059e-02f,
-7.98014179e-02f,+4.96604368e-02f,-7.75816739e-02f,-5.91552332e-02f,+4.88728881e-02f,
-1.03710026e-01f,+9.30506811e-02f,+3.91844511e-02f,+9.96578708e-02f,-1.10355755e-02f,
+7.60630444e-02f,+2.14095693e-04f,+7.52341449e-02f,-6.27513975e-02f,-7.25048557e-02f,
-9.17623341e-02f,-4.80592735e-02f,+5.43071516e-02f,+3.51068638e-02f,+2.48481128e-02f,
+2.63573229e-02f,-7.70318061e-02f,-1.42106442e-02f,-3.45505849e-02f,+8.07663277e-02f,
-5.69294160e-03f,-5.16686440e-02f,-2.94140596e-02f,+5.74431196e-02f,+1.69062614e-02f,
-2.91721355e-02f,-3.17526087e-02f,+9.95393917e-02f,+2.46121716e-02f,+3.75164784e-02f,
+3.92073989e-02f,-4.91748191e-02f,+3.27914916e-02f,+8.33268538e-02f,-1.07490629e-01f,
+7.86380544e-02f,+2.00634971e-02f,-2.99418066e-02f,+6.50219480e-03f,-8.23327899e-02f,
+3.98476087e-02f,+6.38170540e-02f,+5.84742101e-03f,-8.87326971e-02f,-1.10205039e-01f,
-6.84695644e-03f,+3.48874368e-02f,-1.49798356e-02f,-3.37224677e-02f,+4.57272306e-02f,
+1.79461986e-02f,-6.70252964e-02f,+6.02594204e-02f,-1.43312607e-02f,-5.43325469e-02f,
+9.86657222e-04f,-8.17825273e-02f,+4.77537960e-02f,-5.61593957e-02f,-1.24824271e-02f,
-3.82687673e-02f,+3.45100872e-02f,-5.22389337e-02f,+3.83773595e-02f,-8.77353828e-03f,
+4.10389751e-02f,-5.76120876e-02f,+9.48681384e-02f,-3.03198732e-02f,-3.55560705e-02f,
-1.07971802e-01f,+5.29500172e-02f,+3.77742872e-02f,-3.36611345e-02f,-7.41119729e-04f,
+4.31046337e-02f,-8.36346373e-02f,-7.16609731e-02f,-2.55251601e-02f,+7.50745982e-02f,
-3.27149555e-02f,+5.79730533e-02f,+1.62360147e-02f,-2.28005741e-02f,-5.50206415e-02f,
+6.15509525e-02f,-1.09409420e-02f,-8.06693286e-02f,+2.01080777e-02f,+4.51009013e-02f,
+2.75558420e-02f,+1.93374287e-02f,-2.26704273e-02f,+5.07526249e-02f,+4.87609170e-02f,
+9.95965227e-02f,+1.24024749e-02f,-9.97005031e-02f,+9.57840309e-02f,-7.71367699e-02f,
+8.65077749e-02f,-8.33854973e-02f,+6.05953261e-02f,-4.98718731e-02f,-1.00766540e-01f,
-4.68558297e-02f,-8.86409730e-02f,-4.01509553e-03f,+4.85902056e-02f,+7.00383708e-02f,
-8.60973597e-02f,-2.29186863e-02f,-4.92486283e-02f,+6.93804994e-02f,+3.92414853e-02f,
-6.38352260e-02f,-4.90082279e-02f,+1.10944360e-02f,-5.83597794e-02f,+2.25698873e-02f,
+1.21327266e-02f,-1.26770213e-02f,+8.78646895e-02f,-3.88801992e-02f,-9.43718106e-03f,
+5.09819314e-02f,-7.30343610e-02f,+7.21558705e-02f,+5.47270216e-02f,-7.70774260e-02f,
-7.48370737e-02f,-9.82027873e-02f,-2.41898894e-02f,+8.28719065e-02f,+6.57117441e-02f,
-9.47454572e-02f,+8.12569708e-02f,-1.12662334e-02f,+3.02196033e-02f,+6.91693649e-02f,
+4.08718176e-02f,-1.89341925e-04f,-9.15012211e-02f,+8.52082223e-02f,+4.30931225e-02f,
+9.90354940e-02f,+1.02934636e-01f,+3.76627780e-02f,-2.41378043e-03f,+6.17991053e-02f,
-1.03029914e-01f,-9.77354590e-03f,+1.56342704e-02f,-1.56172384e-02f,+9.73249152e-02f,
-8.57025571e-03f,-5.15273474e-02f,+2.65735332e-02f,+5.45868604e-03f,+8.44274387e-02f,
+2.58332416e-02f,-2.24574655e-03f,+2.45814696e-02f,-2.15110183e-02f,+9.04565975e-02f,
+4.01854590e-02f,+3.86024639e-02f,-9.64185223e-02f,+7.10553899e-02f,-6.37774318e-02f,
-3.30927223e-03f,-4.88807820e-02f,-2.49148682e-02f,-3.21731567e-02f,-1.02200672e-01f,
-1.72106549e-02f,+7.51206353e-02f,+3.79566625e-02f,+5.23398891e-02f,+6.27057180e-02f,
+8.08564648e-02f,+3.11284587e-02f,-4.12860364e-02f,+3.28806117e-02f,-2.79903263e-02f,
-4.79807071e-02f,+1.01597287e-01f,+4.25735638e-02f,-3.22433189e-02f,+5.72386160e-02f,
+2.43953839e-02f,+8.10288712e-02f,-1.07066229e-01f,+7.97333643e-02f,+4.54177633e-02f,
+7.75408670e-02f,+1.01760328e-02f,+3.01182065e-02f,+2.81768516e-02f,+7.47504691e-03f,
-5.88524155e-02f,+6.50968626e-02f,+2.25327034e-02f,+5.47314761e-03f,+4.16530594e-02f,
-7.88514838e-02f,+5.66290170e-02f,-2.71467096e-03f,+9.31547657e-02f,+5.44113629e-02f,
+6.88092336e-02f,+3.83013636e-02f,+5.64467199e-02f,-3.54335755e-02f,-9.33743417e-02f,
-8.42107683e-02f,-9.92832705e-02f,-6.31492883e-02f,+2.44988408e-03f,+4.34079841e-02f,
-5.02315946e-02f,+7.31154084e-02f,+6.64013531e-03f,+6.35051653e-02f,-9.71295312e-02f,
+5.49016558e-02f,-1.04557142e-01f,-1.03534140e-01f,-6.85365545e-03f,-2.63505057e-02f,
+4.21995595e-02f,-3.24368477e-03f,-9.22659561e-02f,-6.55335858e-02f,+1.27001284e-02f,
+9.30299144e-03f,-8.91823545e-02f,+1.06510688e-02f,-7.22806752e-02f,-8.82467479e-02f,
-9.87994000e-02f,-8.48380476e-02f,+7.97094777e-02f,+2.77801380e-02f,-1.01042800e-01f,
-9.49427262e-02f,+7.30354921e-04f,+3.30719538e-03f,+9.68134329e-02f,-8.93372893e-02f,
-8.68100002e-02f,-1.28720258e-03f,+5.55324890e-02f,-7.85741955e-02f,-2.24424079e-02f,
+4.19223830e-02f,+3.15630808e-02f,+4.29916903e-02f,+4.55536321e-02f,+4.71403226e-02f,
-8.93549025e-02f,+2.28261426e-02f,+6.95401207e-02f,-4.83155511e-02f,+1.02880798e-01f,
+5.15433475e-02f,-8.02377164e-02f,-7.30126277e-02f,+1.94444060e-02f,-9.23307613e-02f,
+4.16556671e-02f,+4.35601845e-02f,-6.49250150e-02f,-4.13351431e-02f,+4.02161554e-02f,
+7.24990591e-02f,-4.45886515e-02f,-3.26786190e-02f,+7.78358430e-03f,+6.02271780e-02f,
+5.78660518e-03f,-5.08580580e-02f,-7.19077140e-02f,+3.95244434e-02f,-9.93270949e-02f,
+4.53746542e-02f,+2.87658349e-02f,-5.56941219e-02f,+2.51135156e-02f,-8.27126652e-02f,
-4.58207242e-02f,-1.93575714e-02f,+3.42371361e-03f,+8.91247615e-02f,-4.41527255e-02f,
-8.61290917e-02f,-3.83626409e-02f,+9.81440693e-02f,+9.91963316e-03f,-2.65817158e-02f,
+2.38723122e-02f,-4.87088971e-02f,+3.87220047e-02f,+1.96690578e-02f,-1.04709394e-01f,
-8.55082646e-02f,-5.61796874e-03f,-7.87242651e-02f,-8.88464134e-03f,-1.21359536e-02f,
-5.11347130e-02f,-9.12882462e-02f,+9.94831324e-02f,+4.89638820e-02f,+3.19029354e-02f,
+9.44046676e-02f,+1.13023572e-01f,+6.68705404e-02f,+8.74467194e-02f,-3.72371376e-02f,
-8.19306076e-02f,-3.30163278e-02f,-7.73732364e-02f,-7.39999786e-02f,+4.94824499e-02f,
+1.39634982e-02f,+8.65849778e-02f,-4.27742563e-02f,+5.42022549e-02f,+7.60302469e-02f,
+1.00880586e-01f,-4.27609161e-02f,-1.03494033e-01f,+4.16860655e-02f,+5.52305058e-02f,
+2.70428807e-02f,-5.78519665e-02f,-2.71037985e-02f,+1.32421404e-03f,-1.45889204e-02f,
+3.52752432e-02f,-9.49012637e-02f,-1.69461221e-03f,-5.99828288e-02f,+7.24486113e-02f,
-1.50000229e-02f,+2.91713420e-02f,-3.55597511e-02f,+1.73338670e-02f,-9.61425453e-02f,
+1.05063796e-01f,-4.88031395e-02f,+2.65115537e-02f,+4.39701639e-02f,+7.05642626e-02f,
+6.80108517e-02f,+1.02727130e-01f,-1.57502294e-03f,-3.08963899e-02f,+5.43337874e-02f,
+3.09595186e-02f,-6.41305521e-02f,+2.23980676e-02f,-1.56365335e-02f,-9.63505432e-02f,
-9.11273509e-02f,-7.96065181e-02f,+2.21557003e-02f,+2.45235041e-02f,+4.16092537e-02f,
-4.70578186e-02f,+1.19471215e-01f,-3.14733735e-03f,+6.47029057e-02f,+9.80329588e-02f,
-5.77244423e-02f,+5.07570021e-02f,+8.68928991e-03f,-8.40232670e-02f,-1.16425380e-02f,
+5.78963608e-02f,-9.79551673e-03f,+1.16562299e-01f,-6.72306046e-02f,-4.70312499e-02f,
-4.76212986e-02f,+8.97102524e-03f,+1.09879553e-01f,-8.45513865e-03f,+9.12864655e-02f,
-6.73327297e-02f,-2.28749905e-02f,-8.19728151e-02f,+6.31075874e-02f,-6.22448213e-02f,
-1.54838583e-03f,+7.31806457e-02f,+5.33074252e-02f,-4.62779477e-02f,+6.08224422e-02f,
-8.74134153e-02f,+6.91442564e-02f,-4.56513055e-02f,+1.04972951e-01f,-9.02765542e-02f,
-5.92239760e-02f,+3.78963351e-02f,-9.85634550e-02f,-8.06099474e-02f,+3.69079299e-02f,
+7.68292248e-02f,-3.20136920e-02f,-4.94376905e-02f,+5.00007980e-02f,-3.56628411e-02f,
-2.39211842e-02f,-3.62200551e-02f,-3.28387320e-02f,-1.60512533e-02f,-6.21861443e-02f,
+1.01802625e-01f,-8.20888951e-03f,-3.19155715e-02f,+6.34822175e-02f,+6.83867484e-02f,
+8.45167786e-02f,+5.83353676e-02f,-9.30109397e-02f,-1.06649868e-01f,-1.69598665e-02f,
+2.46272292e-02f,+5.59061244e-02f,-6.39633238e-02f,+4.57940362e-02f,-9.92622003e-02f,
+1.51539398e-02f,-9.29135382e-02f,+5.39351255e-02f,+4.83677648e-02f,+6.94818199e-02f,
-5.69841824e-02f,+2.81441975e-02f,+2.03841273e-02f,+3.90877016e-02f,-4.75489125e-02f,
+8.79127905e-02f,+8.11212510e-02f,+3.54323015e-02f,-3.54844555e-02f,-4.04898599e-02f,
+1.22417724e-02f,+1.13385599e-02f,+8.90177637e-02f,+5.91885597e-02f,-8.42602849e-02f,
+2.79386621e-02f,-6.05253652e-02f,+8.37102979e-02f,-1.07073076e-01f,+6.74701035e-02f,
-2.28227582e-02f,+9.46237706e-03f,+1.98614933e-02f,+7.39322156e-02f,-1.95574015e-03f,
+6.65863305e-02f,-3.26018482e-02f,-1.03334382e-01f,-7.72891417e-02f,+3.67112868e-02f,
-3.44289951e-02f,-1.58207007e-02f,+4.72298414e-02f,+1.08693272e-03f,-3.78914140e-02f,
-3.74069600e-03f,-7.15982243e-02f,+5.37204258e-02f,-9.48023573e-02f,+1.89884473e-03f,
+9.13116187e-02f,-1.72047690e-02f,+8.96925181e-02f,+1.90731697e-02f,-9.74789262e-02f,
-7.55237415e-02f,+8.50848034e-02f,+1.79079324e-02f,+2.31669284e-02f,-7.76139945e-02f,
-3.65335569e-02f,-7.18553364e-02f,-8.23567659e-02f,-4.86252233e-02f,-1.81791149e-02f,
-7.41664171e-02f,-1.98073909e-02f,-5.22174798e-02f,-2.05863044e-02f,+9.27667394e-02f,
+7.19002774e-03f,-6.62769284e-03f,-8.47887695e-02f,+5.11858314e-02f,-7.95909390e-02f,
+7.90096000e-02f,+2.04913151e-02f,+5.52746877e-02f,+7.37531632e-02f,-1.43941958e-02f,
+8.87824669e-02f,-7.60250818e-03f,+2.72082090e-02f,-8.37498531e-02f,+2.30724830e-03f,
-3.30541767e-02f,-7.02847913e-02f,+3.87036651e-02f,-3.11628599e-02f,+4.87670302e-02f,
+7.61531014e-03f,+9.58263278e-02f,+2.69441474e-02f,-7.41131678e-02f,-4.14754190e-02f,
-9.70040634e-02f,+7.80131668e-02f,+9.55649614e-02f,+9.41997990e-02f,-6.04158863e-02f,
+6.92015812e-02f,+1.01133332e-01f,+1.38385473e-02f,+1.80892479e-02f,+2.84451842e-02f,
-1.40356328e-02f,-8.89250115e-02f,+1.31218601e-02f,+8.57941657e-02f,-7.59870782e-02f,
-8.80503431e-02f,-7.79143721e-02f,-9.76059064e-02f,-4.42335270e-02f,+7.74474144e-02f,
+1.93138700e-02f,-8.36450085e-02f,+9.38780308e-02f,-3.91901359e-02f,-5.76181561e-02f,
+2.49403175e-02f,-5.50021492e-02f,+3.78519371e-02f,-2.04337332e-02f,+8.33896026e-02f,
+5.06003350e-02f,-8.02643523e-02f,+5.26729375e-02f,-5.08516133e-02f,-7.93593377e-02f,
-7.86798969e-02f,+9.92155075e-02f,-6.12340271e-02f,+6.08742759e-02f,-9.29041207e-02f,
+3.92790399e-02f,+9.07816216e-02f,-3.94911021e-02f,-5.52444607e-02f,+9.20853466e-02f,
-3.69519368e-02f,-6.16321228e-02f,-1.79277081e-02f,-8.67948085e-02f,+1.60525795e-02f,
+9.35219750e-02f,+3.23593654e-02f,-6.42142817e-02f,-3.10459808e-02f,-6.39691278e-02f,
+5.67174479e-02f,-2.45477054e-02f,+1.48828812e-02f,-1.00294918e-01f,+5.87961413e-02f,
+8.84111151e-02f,+4.20895871e-03f,-2.47186646e-02f,-8.57483223e-02f,-9.59401801e-02f,
-2.61218753e-02f,-7.50179812e-02f,+9.73589793e-02f,+1.00733945e-02f,-7.18169659e-03f,
-3.58149819e-02f,-4.36962657e-02f,-6.10741302e-02f,-6.14903606e-02f,-2.40258239e-02f,
+3.94587852e-02f,-1.92551855e-02f,-8.51682052e-02f,-1.99901294e-02f,+6.42905235e-02f,
-1.43116405e-02f,+1.10596851e-01f,-2.57068556e-02f,+4.25253101e-02f,-1.49377957e-02f,
-3.48022990e-02f,-4.73928032e-03f,-8.98263603e-02f,-6.97863698e-02f,+3.85266431e-02f,
+9.12681594e-02f,+9.93764028e-02f,-1.00689463e-01f,-9.97831002e-02f,-7.72309825e-02f,
+2.92874351e-02f,-6.56732321e-02f,-3.18881567e-03f,+4.53792699e-02f,-1.13814324e-03f,
+4.74411771e-02f,-9.71831381e-02f,+3.78999710e-02f,+7.91884586e-02f,+7.38057354e-03f,
+4.80292030e-02f,-1.04308031e-01f,+1.08364798e-01f,+2.61970349e-02f,-5.77717014e-02f,
-9.15365368e-02f,-3.58734019e-02f,+4.98280115e-02f,+9.74740535e-02f,+1.48780718e-02f,
+6.54601529e-02f,+3.11567262e-02f,+3.08986977e-02f,-5.12586795e-02f,+3.97312418e-02f,
-1.00585803e-01f,-1.36317089e-02f,-4.74498309e-02f,-4.43072915e-02f,+2.19487771e-02f,
+6.18121698e-02f,-8.10873210e-02f,+1.75513327e-03f,-5.78171350e-02f,+3.75536606e-02f,
-1.51154175e-02f,+7.80859962e-02f,+7.43131265e-02f,-8.84955451e-02f,+2.82867178e-02f,
-8.20184648e-02f,+9.82602313e-02f,-1.20717809e-02f,+1.00964122e-01f,-7.07689896e-02f,
+6.29760101e-02f,+1.03778116e-01f,+7.43459091e-02f,-1.69076845e-02f,-4.82594147e-02f,
-2.53493935e-02f,-7.35614002e-02f,-6.27704784e-02f,-8.03793222e-02f,+7.76388571e-02f,
+6.86918274e-02f,-8.19466915e-03f,+4.48451526e-02f,-4.94829118e-02f,-1.53366234e-02f,
+1.06219560e-01f,+2.24470347e-02f,-3.79169248e-02f,-1.67804472e-02f,-9.55852643e-02f,
+2.61293575e-02f,-7.49859735e-02f,-3.86419222e-02f,-6.50353655e-02f,-5.90009429e-02f,
+3.13870609e-03f,+4.42367606e-02f,-1.03213064e-01f,-4.91279289e-02f,+9.27299410e-02f,
+3.14931944e-02f,-1.30335409e-02f,-2.37155072e-02f,-9.03012156e-02f,+2.81090867e-02f,
+6.89851046e-02f,+4.16043662e-02f,-1.70754455e-02f,+7.87953511e-02f,+4.71461117e-02f,
-3.78095731e-02f,+1.84405036e-02f,+8.13826546e-02f,+9.49403942e-02f,+5.55610210e-02f,
+3.74371856e-02f,+3.43847126e-02f,+9.87232253e-02f,+5.44179305e-02f,+2.30139047e-02f,
-7.11614545e-03f,-5.81284286e-03f,-7.36506134e-02f,-1.05622681e-02f,+2.56841443e-02f,
+5.07990941e-02f,-6.18060865e-02f,+4.57619056e-02f,-4.81609814e-03f,-8.12016502e-02f,
-8.72614980e-02f,+1.60485096e-02f,-4.36622985e-02f,+9.04237777e-02f,+9.12866965e-02f,
-6.42656535e-02f,+8.40751603e-02f,-6.92771524e-02f,-3.50021906e-02f,-1.72075175e-03f,
+7.30151087e-02f,-3.48088443e-02f,-3.71146724e-02f,+6.39940277e-02f,-9.34053212e-04f,
-9.94827971e-03f,+1.60026923e-02f,-7.64099732e-02f,-4.23389720e-03f,+3.04516014e-02f,
-7.40814731e-02f,+7.10889697e-02f,-5.17841578e-02f,+8.02115351e-02f,-1.00190371e-01f,
-3.60914692e-02f,-6.49932548e-02f,-8.64765272e-02f,-4.24781404e-02f,+3.14157084e-02f,
-6.64493293e-02f,-1.91343240e-02f,-5.29044792e-02f,-1.03464998e-01f,-1.82089750e-02f,
-6.11313879e-02f,+1.01680189e-01f,-5.21877259e-02f,-2.32452638e-02f,-9.46498290e-03f,
-8.29883218e-02f,+4.65586782e-02f,-8.88769478e-02f,-7.30117932e-02f,+1.06771283e-01f,
+1.42920930e-02f,-8.92741531e-02f,-4.04899344e-02f,-9.50821862e-03f,-8.76497403e-02f,
+6.61299825e-02f,+1.58409663e-02f,+3.58558185e-02f,-2.17384417e-02f,-6.63250610e-02f,
+3.05758025e-02f,-9.26951785e-03f,+5.69488071e-02f,-5.92938326e-02f,+8.77451971e-02f,
-3.85088772e-02f,+8.93421099e-02f,+1.10962521e-02f,-1.42415483e-02f,-1.05815820e-01f,
-6.33286908e-02f,+2.83372384e-02f,+3.18587311e-02f,-7.52743334e-02f,-6.94661308e-03f,
+9.70060080e-02f,+2.29481887e-02f,-1.03263900e-01f,+9.28450525e-02f,+3.64027061e-02f,
+7.28918985e-02f,-6.54157624e-02f,-1.05639629e-01f,-8.54843557e-02f,+4.68055569e-02f,
+7.02097416e-02f,-8.78616050e-02f,-6.77842200e-02f,+1.01664089e-01f,-4.64637531e-03f,
+1.70347246e-03f,-4.46973369e-02f,-4.02254686e-02f,-8.71795118e-02f,+1.15550235e-02f,
+8.29110518e-02f,-8.26357529e-02f,-6.28314242e-02f,-5.55846877e-02f,+5.04900403e-02f,
+9.24963802e-02f,+6.27304316e-02f,+3.67923863e-02f,+3.90034169e-02f,+1.00572921e-01f,
+9.93383452e-02f,-1.58139970e-02f,-7.75798187e-02f,+8.36427957e-02f,-7.28447959e-02f,
+8.17214400e-02f,+1.07670836e-02f,+7.21364394e-02f,-7.98899233e-02f,-7.19772726e-02f,
+5.58610708e-02f,-2.55003944e-02f,+6.34196326e-02f,+4.39503416e-02f,-2.22249553e-02f,
-4.45547774e-02f,+6.47919253e-02f,+2.51544937e-02f,-3.44530144e-03f,+3.49260643e-02f,
+8.37815627e-02f,-7.45350718e-02f,-5.79451583e-02f,-4.41852249e-02f,-3.27379368e-02f,
-1.41418278e-02f,+3.37309204e-02f,+4.93112728e-02f,-8.77333879e-02f,+7.30176270e-03f,
+1.74631253e-02f,-3.19250785e-02f,+6.13331944e-02f,+7.23133683e-02f,-2.87451223e-02f,
-3.58916372e-02f,+5.44615090e-03f,-2.02326719e-02f,+6.26259344e-03f,-4.52236235e-02f,
+7.83732831e-02f,-2.77080908e-02f,-6.99003637e-02f,-5.81025667e-02f,-2.13500131e-02f,
+6.01637624e-02f,-7.45382607e-02f,+7.60848150e-02f,-2.61183530e-02f,+4.33779545e-02f,
+5.00277914e-02f,+3.51208150e-02f,-5.98182008e-02f,+6.33999631e-02f,+9.21157449e-02f,
-4.69843037e-02f,-5.29224612e-02f,-5.57802618e-03f,-2.19072402e-02f,+2.93501336e-02f,
+1.24449274e-02f,-1.41352192e-02f,+7.86839500e-02f,-7.35141337e-02f,-7.29795732e-03f,
-4.74413969e-02f,-6.25814423e-02f,+1.62925608e-02f,+5.49892783e-02f,-6.98923618e-02f,
-7.33740777e-02f,+8.30898359e-02f,+2.29293481e-02f,+6.07742406e-02f,+8.00592974e-02f,
+2.90413611e-02f,-2.74710190e-02f,+8.71102437e-02f,+6.03988022e-02f,+3.87404822e-02f,
+8.17855261e-03f,-8.96703750e-02f,-6.92749992e-02f,+5.13423793e-02f,-4.58949655e-02f,
+7.44905695e-02f,-3.40913720e-02f,+3.95602509e-02f,-5.05238846e-02f,+1.41260326e-02f,
-9.83752906e-02f,+1.48620540e-02f,+3.78032401e-03f,-4.20797579e-02f,-1.01132900e-01f,
-9.59677994e-02f,-2.34384905e-03f,+1.02961108e-01f,+9.28078219e-02f,+1.10664286e-01f,
-1.25572877e-02f,-2.30571311e-02f,+3.26882605e-03f,-5.95706962e-02f,+1.99850351e-02f,
-4.92438227e-02f,-5.73066585e-02f,-9.48775336e-02f,+4.68116775e-02f,+2.70864908e-02f,
-5.92027530e-02f,+3.72467414e-02f,+6.91874176e-02f,-4.52616625e-02f,+5.23479693e-02f,
+3.48285660e-02f,+9.06891301e-02f,-8.37268680e-02f,+7.05643371e-02f,+3.07596102e-02f,
+5.65123707e-02f,+2.85050496e-02f,-7.56982118e-02f,-7.08470047e-02f,+8.67419094e-02f,
+9.34366658e-02f,-6.93313032e-02f,+5.41014643e-03f,+6.76440969e-02f,+5.19350776e-03f,
+1.82054599e-03f,-8.76149908e-02f,-5.32233082e-02f,+1.09390551e-02f,+1.80485547e-02f,
-8.66874605e-02f,-3.34783643e-02f,+8.54168311e-02f,-3.89573649e-02f,+8.62739980e-03f,
+7.82443658e-02f,+2.69033536e-02f,+8.84781778e-03f,-2.59469002e-02f,+2.97583714e-02f,
+2.50917897e-02f,-2.66836211e-02f,+2.06853077e-02f,-5.99725880e-02f,-6.89960048e-02f,
-6.78835958e-02f,+7.67729357e-02f,-7.30687678e-02f,-7.87094980e-03f,+1.89333111e-02f,
-6.99618459e-03f,+3.51232216e-02f,+7.04350397e-02f,-2.94916332e-03f,-1.96274146e-02f,
+4.80560213e-03f,-1.85505897e-02f,+3.87474671e-02f,-1.00108340e-01f,+2.18521282e-02f,
-1.92367285e-02f,-4.48042207e-04f,+3.51850204e-02f,-6.82336604e-03f,+7.64459893e-02f,
+8.24208781e-02f,+9.83651821e-03f,+2.98462063e-03f,+8.52926597e-02f,+3.49022001e-02f,
+1.28553831e-03f,+3.74012701e-02f,+6.68196529e-02f,+4.13115583e-02f,+1.83418393e-02f,
+2.95380577e-02f,+1.62473321e-02f,+6.00856543e-02f,-3.76631767e-02f,+9.29733142e-02f,
+7.71498904e-02f,-1.67188304e-03f,-6.97127432e-02f,-8.81698430e-02f,-6.68132827e-02f,
+6.79797158e-02f,-3.92340915e-03f,+5.17882109e-02f,+7.09738657e-02f,-7.52591491e-02f,
-7.94440135e-02f,-6.32273853e-02f,-4.85628806e-02f,-1.04356229e-01f,+9.50163528e-02f,
+1.35997152e-02f,-9.52708162e-03f,+4.33767699e-02f,+5.86462803e-02f,+4.22823355e-02f,
-4.79718624e-03f,-8.29456672e-02f,-2.24492289e-02f,-6.17876239e-02f,+8.83227661e-02f,
+7.12336972e-02f,-9.44307148e-02f,-3.51030566e-02f,-4.21310253e-02f,-4.47991453e-02f,
+8.83259848e-02f,+1.15079759e-02f,-2.33944282e-02f,-9.18222666e-02f,+5.69148175e-02f,
-3.52472104e-02f,-3.18871662e-02f,+9.09438878e-02f,+6.05658442e-02f,+1.03183538e-01f,
+6.52846768e-02f,-4.87576984e-02f,-6.75390065e-02f,-4.96393889e-02f,-8.55959952e-02f,
+2.11840030e-02f,-6.94850311e-02f,+1.48061384e-02f,+8.23028535e-02f,+6.20436966e-02f,
-6.88192993e-02f,-4.50239778e-02f,-2.66789589e-02f,+4.82582301e-02f,+3.51300351e-02f,
-4.64057885e-02f,-6.11270703e-02f,+9.34986696e-02f,-9.59416553e-02f,+4.65076752e-02f,
-1.00676186e-01f,-9.41940621e-02f,-6.32297322e-02f,-5.02107479e-02f,+2.97417268e-02f,
+3.05974633e-02f,+5.01538925e-02f,-3.67686488e-02f,+1.06727483e-03f,+2.31624115e-02f,
+1.32236732e-02f,-3.48650850e-02f,-2.73428336e-02f,-9.83059183e-02f,+9.91058499e-02f,
-1.63156986e-02f,+3.44126718e-03f,-1.03214167e-01f,+4.30849083e-02f,+8.37761238e-02f,
+4.98713925e-03f,+7.30469003e-02f,+4.37569655e-02f,+5.28074093e-02f,+6.96444884e-02f,
-4.97780703e-02f,+1.92879029e-02f,+1.24372775e-02f,-5.19847535e-02f,+4.62476872e-02f,
-5.24880476e-02f,+7.33153969e-02f,-2.50351168e-02f,+6.77543953e-02f,+9.55031067e-03f,
+5.36403507e-02f,-5.36453202e-02f,-1.77324656e-02f,-8.88161287e-02f,-6.62783608e-02f,
-8.90136063e-02f,+1.16866454e-02f,-2.91341320e-02f,+5.79935126e-02f,-1.23686129e-02f,
+1.55130513e-02f,+6.44274801e-02f,-7.81444162e-02f,-8.05830117e-03f,-1.84807032e-02f,
+3.50121781e-02f,-5.63263148e-02f,-5.21518216e-02f,+8.13333765e-02f,+2.20747516e-02f,
-9.89650115e-02f,-3.64793614e-02f,+5.50291762e-02f,+5.66724613e-02f,-8.11877996e-02f,
+2.89333984e-02f,+9.28151682e-02f,-5.03958128e-02f,-2.21386477e-02f,+7.07271174e-02f,
+5.69816306e-02f,+1.32279098e-02f,+1.34082139e-02f,-2.48064995e-02f,+5.38473651e-02f,
-9.55411345e-02f,-2.83336639e-02f,+7.48552158e-02f,+5.19548133e-02f,-5.79683967e-02f,
+5.04204258e-02f,-2.93256044e-02f,-5.58726341e-02f,+4.32316139e-02f,-3.84949446e-02f,
+7.10664019e-02f,-8.60227346e-02f,+9.58904549e-02f,-8.12751576e-02f,+4.30773757e-02f,
+6.14782050e-02f,+2.32020523e-02f,-7.76974633e-02f,+8.24939162e-02f,+2.33858032e-03f,
+8.23852420e-02f,+3.89879681e-02f,+2.06470210e-02f,-2.46844552e-02f,-5.84638827e-02f,
-5.02264909e-02f,-1.20139709e-02f,-3.94272767e-02f,+2.74209902e-02f,+3.31545547e-02f,
-4.61031832e-02f,+3.93930860e-02f,-3.77803482e-02f,+3.97885107e-02f,-4.16300185e-02f,
-8.72287620e-03f,-1.02887042e-02f,-6.22242913e-02f,-3.47210914e-02f,-1.41336303e-03f,
-5.09953834e-02f,-6.87343627e-02f,+2.83934623e-02f,-5.96477576e-02f,-3.69378999e-02f,
+6.83665201e-02f,+4.69692275e-02f,+7.83987343e-03f,+6.89418986e-02f,+8.17425922e-02f,
+4.26350534e-03f,+6.51879236e-02f,-4.54690978e-02f,+5.57792932e-03f,-5.85350022e-02f,
+7.36489668e-02f,-3.27723399e-02f,+8.91885236e-02f,-4.57422473e-02f,+7.41546378e-02f,
+1.46348998e-02f,+4.32850197e-02f,+2.50082687e-02f,-8.50306749e-02f,+1.01302341e-02f,
-2.81238556e-02f,-3.21038738e-02f,+4.42002937e-02f,-3.04073840e-02f,+1.19119361e-02f,
+1.79361552e-03f,-3.09362635e-02f,+1.92448720e-02f,+7.43542090e-02f,-9.14840475e-02f,
-1.84438750e-02f,-1.02624789e-01f,+1.40301464e-02f,+1.73872162e-03f,+9.33462083e-02f,
-2.81111337e-02f,+9.50626954e-02f,-5.65118566e-02f,+4.03950624e-02f,-5.32391518e-02f,
-1.71104502e-02f,-1.00446865e-01f,+9.58718657e-02f,-2.22252831e-02f,+9.31041837e-02f,
+8.54070038e-02f,-5.32386079e-02f,-9.79296491e-02f,+4.53279307e-03f,+9.49292108e-02f,
-1.05338037e-01f,-3.31624760e-03f,+3.95091400e-02f,-9.33672935e-02f,+2.27624513e-02f,
+3.68234180e-02f,+3.59627642e-02f,+2.44946722e-02f,-1.42613351e-02f,+2.89326329e-02f,
-8.87204036e-02f,-1.01134390e-01f,-7.34776407e-02f,+7.68721402e-02f,+4.26170789e-02f,
+9.18096397e-03f,-6.99893981e-02f,+1.39755011e-02f,+1.90604310e-02f,-6.47552237e-02f,
-1.20403757e-02f,+9.36936364e-02f,-2.62471382e-02f,+6.41407073e-02f,-3.92504409e-02f,
-8.24545696e-02f,+2.79805008e-02f,+6.22046180e-04f,-5.76190799e-02f,+9.29340720e-03f,
-6.79794028e-02f,+6.95494935e-02f,+5.92566170e-02f,+1.94574017e-02f,+5.20737953e-02f,
+4.96757217e-02f,+2.49476545e-03f,-7.23712146e-02f,+8.48158896e-02f,+8.13002214e-02f,
-3.36350277e-02f,+5.98009443e-03f,-1.19574917e-02f,-5.54871261e-02f,+5.76795414e-02f,
+7.63766393e-02f,-1.31115019e-02f,-8.81850719e-04f,-4.93954085e-02f,+4.11614701e-02f,
+7.99776688e-02f,+7.94993415e-02f,+7.87435472e-03f,+2.70819440e-02f,+3.94462273e-02f,
-2.09467188e-02f,+7.57475868e-02f,-6.60691485e-02f,+1.06075034e-02f,-5.43275326e-02f,
+2.19435468e-02f,+2.44472846e-02f,+3.80154029e-02f,-1.00066960e-02f,-2.08272040e-02f,
-5.99265173e-02f,-1.88858807e-03f,-4.88083176e-02f,-1.03710242e-01f,-6.92458674e-02f,
+1.66871622e-02f,+9.75646749e-02f,-6.93931729e-02f,-7.25756586e-03f,-4.85428534e-02f,
-3.10241729e-02f,+3.74606475e-02f,+1.11953449e-02f,-7.34286383e-02f,+4.06901576e-02f,
-4.75153625e-02f,+4.16059121e-02f,+7.63263851e-02f,-4.16338863e-03f,+2.23042406e-02f,
-9.50747579e-02f,-7.22023472e-02f,+2.13213861e-02f,-9.05700028e-02f,+4.82777096e-02f,
-1.07858613e-01f,-1.17419017e-02f,-7.94738308e-02f,-2.96487585e-02f,+2.28893682e-02f,
-2.87592411e-06f,-4.76928018e-02f,+7.25717992e-02f,-6.54248446e-02f,-1.00441054e-02f,
-2.90756021e-02f,+8.82741660e-02f,+4.24696878e-02f,-2.47250069e-02f,-6.95128664e-02f,
-8.53316486e-02f,+2.94228215e-02f,-3.42559442e-02f,-8.53194576e-03f,-1.93149578e-02f,
+3.81049104e-02f,-2.38365587e-02f,-9.40867607e-03f,-3.47558223e-02f,-2.90576369e-02f,
+6.03918023e-02f,+9.87654552e-02f,+2.09384374e-02f,-5.60428835e-02f,+4.82827164e-02f,
+2.98101008e-02f,+5.25104254e-03f,-2.89485604e-03f,-6.05651364e-02f,+5.83349243e-02f,
-9.40157846e-02f,-1.01654353e-02f,-8.05495679e-03f,-1.04369409e-01f,-6.79107904e-02f,
+4.93852869e-02f,+7.25216344e-02f,-2.76398063e-02f,+5.63751683e-02f,+1.32718235e-02f,
-1.63328424e-02f,+3.17563638e-02f,-2.11099945e-02f,-3.59061956e-02f,-8.73171017e-02f,
+6.92902878e-02f,+2.51357835e-02f,+5.24072759e-02f,-8.42946023e-02f,+2.39646938e-02f,
-8.85461718e-02f,-9.08673555e-03f,+3.86824869e-02f,-6.01657890e-02f,-2.67190486e-02f,
-9.65211354e-03f,-6.63499013e-02f,-9.15004611e-02f,+3.65605131e-02f,+5.80171049e-02f,
-2.76917312e-02f,+7.27270842e-02f,+2.37855390e-02f,-4.76606339e-02f,+9.11828950e-02f,
+4.89721482e-04f,+2.79112533e-02f,-2.76376568e-02f,+1.04418427e-01f,-7.33810812e-02f,
-6.37022257e-02f,-1.08587893e-03f,+5.83554320e-02f,-4.88865897e-02f,-4.57228161e-03f,
+4.81799766e-02f,-2.82571223e-02f,-4.65901010e-02f,-9.70748290e-02f,-1.76825896e-02f,
+7.81679153e-03f,+5.87269589e-02f,-5.60964458e-02f,+2.16126628e-02f,-4.34918031e-02f,
-4.23815623e-02f,+2.92352773e-02f,-9.10255387e-02f,-4.62765507e-02f,-9.22963992e-02f,
-3.37147387e-03f,-7.08511323e-02f,+5.27221635e-02f,+9.00407583e-02f,-3.24672461e-02f,
+8.26639235e-02f,+9.86828431e-02f,-4.96957488e-02f,+4.07075509e-02f,-3.39117199e-02f,
-4.29298840e-02f,+6.19293489e-02f,+9.34001710e-03f,+1.04359291e-01f,-7.28435814e-02f,
+7.82666262e-03f,-6.57011345e-02f,+3.68740819e-02f,+8.83392096e-02f,-3.69552970e-02f,
+8.43344703e-02f,+4.24733721e-02f,-1.66826062e-02f,+1.05473101e-01f,+1.00201815e-01f,
-7.51061663e-02f,-1.05459228e-01f,+7.33912364e-02f,-7.02327415e-02f,-1.92471724e-02f,
+7.99929574e-02f,+8.29148293e-02f,+7.05900416e-02f,-2.39897869e-03f,+6.54995218e-02f,
+4.83104400e-02f,+2.44820490e-02f,-6.74236491e-02f,-7.95738101e-02f,+5.35121672e-02f,
+7.33879060e-02f,-8.92333388e-02f,-1.04479089e-01f,+3.35172340e-02f,-1.53646208e-02f,
+7.04595295e-04f,+3.72606330e-02f,-4.96361963e-02f,+1.02822438e-01f,+2.60653775e-02f,
+4.85502668e-02f,+2.90603079e-02f,-7.24437693e-03f,-2.47559026e-02f,+7.71081373e-02f,
+7.35247508e-02f,-3.32672074e-02f,-3.39914416e-03f,+2.02771779e-02f,+6.06758855e-02f,
-5.75047843e-02f,+5.95032237e-02f,-8.22855160e-02f,+9.05481949e-02f,-8.17647576e-02f,
-6.03280365e-02f,+9.53432545e-02f,-4.83510382e-02f,-1.50307119e-02f,-5.27606420e-02f,
-7.09731579e-02f,+1.04023628e-01f,-7.12108016e-02f,-9.32266712e-02f,-5.46171553e-02f,
+6.72757067e-03f,-1.83896255e-02f,-3.91658619e-02f,-3.68618928e-02f,+2.50007510e-02f,
-9.03594494e-02f,+1.56778861e-02f,+3.79819237e-02f,+2.53740940e-02f,+4.22743857e-02f,
+1.94224361e-02f,+4.36844584e-03f,-6.97320402e-02f,-3.29763442e-02f,-1.06817201e-01f,
+3.23182568e-02f,-6.06612209e-03f,+1.44100767e-02f,+5.27911969e-02f,-5.43651916e-02f,
+8.84391516e-02f,+8.45674574e-02f,-1.09829023e-01f,-9.91975144e-02f,-8.55958536e-02f,
-3.16336453e-02f,+9.51849222e-02f,+7.73127005e-02f,+8.93396288e-02f,-1.04169682e-01f,
-7.35180601e-02f,+3.79269458e-02f,-2.21283338e-03f,-9.73548293e-02f,-5.62966764e-02f,
+8.23369436e-03f,-4.35040938e-03f,-5.30934930e-02f,+6.25989735e-02f,-2.19140761e-02f,
-5.13359830e-02f,-9.54614431e-02f,+2.86736432e-02f,+3.08169844e-03f,+1.65074747e-02f,
-2.11038180e-02f,-4.27596308e-02f,+1.00551350e-02f,+1.82736572e-02f,-2.51334943e-02f,
+1.99036300e-02f,-6.53211251e-02f,+8.53154287e-02f,-2.93783266e-02f,+6.14914000e-02f,
-1.09227255e-01f,-5.39869331e-02f,-5.12073264e-02f,+7.78744668e-02f,+5.42195886e-03f,
+9.02871117e-02f,-5.66632301e-02f,-6.12832000e-03f,-6.32159859e-02f,-1.03794262e-01f,
+6.38655052e-02f,-9.17473212e-02f,+2.45676991e-02f,-9.34399888e-02f,-5.87973073e-02f,
-6.49142414e-02f,+9.78607908e-02f,-7.93234408e-02f,+2.56687459e-02f,+4.55259234e-02f,
-8.20450336e-02f,-7.38747194e-02f,-7.92044997e-02f,-5.97067215e-02f,-1.10137261e-01f,
+3.91956195e-02f,-8.29816461e-02f,+9.45746899e-02f,-1.74276065e-02f,+7.38045946e-02f,
+5.78016825e-02f,+9.61575210e-02f,+4.97362241e-02f,-4.93954234e-02f,+2.34060660e-02f,
-4.83009517e-02f,+4.88490835e-02f,-6.74103349e-02f,+3.56170721e-02f,-9.43650231e-02f,
-6.08636849e-02f,-7.19776228e-02f,+4.18633362e-03f,-6.60896376e-02f,-8.16944614e-02f,
+1.11651262e-02f,-6.14291541e-02f,-2.87189819e-02f,+7.77834048e-03f,-8.43545049e-02f,
+4.51641809e-03f,+6.75443783e-02f,+3.95943671e-02f,-7.54203796e-02f,-9.38196927e-02f,
+8.44197441e-03f,+6.55728132e-02f,-2.80958414e-02f,+1.87024865e-02f,+6.98938519e-02f,
+2.15804875e-02f,-8.58788118e-02f,-2.87639705e-04f,-1.15710897e-02f,+9.46627259e-02f,
-8.92780796e-02f,+5.84294125e-02f,-1.61163171e-03f,+9.33936909e-02f,+1.16864601e-02f,
+3.30179855e-02f,+2.75458340e-02f,-1.23417126e-02f,+3.26034501e-02f,+1.01355001e-01f,
+2.19818428e-02f,+2.34813113e-02f,-1.13774063e-02f,+2.85249157e-03f,+2.66977772e-02f,
-7.34683424e-02f,-1.80102512e-02f,+8.03781822e-02f,+1.08470626e-01f,+4.81334031e-02f,
-5.26695997e-02f,-8.69572759e-02f,-4.16456535e-02f,-7.75803812e-03f,+9.05104950e-02f,
-5.02803400e-02f,+1.16322504e-03f,-4.36375476e-02f,+1.10266417e-01f,+8.26864392e-02f,
-8.15886930e-02f,+3.13986465e-02f,+6.08846135e-02f,-7.52849877e-02f,-1.12144304e-02f,
-8.16950127e-02f,-6.90224096e-02f,+9.72923115e-02f,+3.87335345e-02f,-9.92801934e-02f,
+1.03465253e-02f,+1.93723082e-03f,+1.06332719e-01f,+2.73407008e-02f,+7.59148002e-02f,
-9.93815586e-02f,+1.31695569e-02f,-6.57189339e-02f,+4.96578142e-02f,+2.19311938e-02f,
-9.96674523e-02f,-7.93923587e-02f,+2.59509012e-02f,-6.59348667e-02f,-8.07778090e-02f,
+1.68781877e-02f,+8.34617391e-02f,-2.01401338e-02f,+9.09973159e-02f,-8.35192800e-02f,
-4.63248529e-02f,-3.15205678e-02f,+5.03229722e-02f,+2.96122804e-02f,-5.46678901e-04f,
+1.01429544e-01f,+1.85707435e-02f,+9.60834250e-02f,-1.15013719e-02f,-8.81093964e-02f,
-2.47751474e-02f,+1.01714507e-02f,-9.26684588e-03f,-1.04308650e-01f,+6.74009994e-02f,
+3.59348953e-03f,-3.40134948e-02f,-2.48729438e-03f,-7.76474625e-02f,+5.60787842e-02f,
-8.06280226e-02f,-4.02335599e-02f,-1.03328876e-01f,+3.26262191e-02f,-1.54295750e-02f,
+8.57619345e-02f,-6.71425015e-02f,+8.59635025e-02f,-5.97198568e-02f,+1.04720332e-01f,
+6.98476136e-02f,+9.01669934e-02f,-1.31049519e-02f,-1.04321912e-01f,-5.15706949e-02f,
+8.47792476e-02f,-9.53286514e-02f,+6.95953146e-02f,-3.94704603e-02f,-7.12324604e-02f,
-6.96162041e-03f,+8.39520842e-02f,-3.37661095e-02f,+6.11896291e-02f,-6.24279603e-02f,
+3.20956707e-02f,+7.15506151e-02f,+7.06726611e-02f,-7.74783716e-02f,-8.00591707e-02f,
-2.81050466e-02f,-1.68004725e-02f,-2.30799187e-02f,+5.15361056e-02f,-3.72672603e-02f,
-4.02043834e-02f,-2.67727450e-02f,-5.70259131e-02f,+1.55570060e-02f,-8.44640508e-02f,
+6.08768687e-03f,+9.15301293e-02f,-1.65287796e-02f,-1.04299411e-01f,-5.17965518e-02f,
-5.22079021e-02f,+6.70418218e-02f,+8.54083300e-02f,+3.90664749e-02f,-3.91371474e-02f,
+6.73285052e-02f,-4.28352728e-02f,+4.10722606e-02f,-3.72483395e-02f,+4.16472647e-03f,
-1.09840959e-01f,+3.84778827e-02f,+2.78511979e-02f,-5.00806160e-02f,-2.45985873e-02f,
+8.51015896e-02f,+7.51744285e-02f,+8.06592554e-02f,+6.89327251e-03f,-1.13352261e-01f,
-6.33896794e-03f,+2.63916161e-02f,-8.35750774e-02f,-3.54990549e-02f,+2.63631940e-02f,
+2.00539907e-05f,-7.49033839e-02f,+9.26069170e-02f,+6.79661846e-03f,-9.86866429e-02f,
-5.66068338e-03f,-5.11180274e-02f,+3.93520035e-02f,-3.27531574e-03f,-5.37822954e-02f,
-8.09645951e-02f,-6.09688461e-03f,+8.95361379e-02f,-8.88404846e-02f,+7.04575852e-02f,
+9.39366594e-02f,+4.01429757e-02f,-5.95145337e-02f,-4.20520082e-02f,+1.02664843e-01f,
+5.81193753e-02f,-4.04724963e-02f,-2.71787960e-02f,+4.27198708e-02f,-3.36200297e-02f,
+1.04253791e-01f,+3.83684076e-02f,+6.61591515e-02f,-4.55869362e-03f,+8.40248764e-02f,
+6.93190396e-02f,+8.36158451e-03f,-7.29117021e-02f,-3.98016311e-02f,-1.07969344e-02f,
-3.33834849e-02f,-1.03525341e-01f,+7.55880028e-02f,-6.63613155e-02f,-9.66761783e-02f,
-3.47220749e-02f,-3.87085602e-03f,+8.13116506e-02f,-3.22237387e-02f,-3.67216393e-02f,
-2.66518965e-02f,-2.56511886e-02f,+5.70806339e-02f,+8.19595903e-02f,-7.53961280e-02f,
+6.91623241e-02f,-2.38769613e-02f,+1.06100691e-03f,-1.12494677e-02f,+3.40593308e-02f,
+4.49606515e-02f,+7.45349377e-03f,-2.07990129e-03f,+2.05361973e-02f,+2.09920248e-03f,
+1.04902424e-01f,-6.76160008e-02f,+5.15072532e-02f,+1.09946064e-03f,+8.15206841e-02f,
-9.02913734e-02f,+8.27510059e-02f,+1.23068905e-02f,+3.18810008e-02f,+1.64085664e-02f,
+5.92094809e-02f,+7.27040693e-02f,+4.38236818e-02f,-1.01334527e-01f,+5.17844148e-02f,
+8.05059895e-02f,+2.32903026e-02f,-5.31076081e-02f,-1.07761426e-02f,+2.28406638e-02f,
+2.04638429e-02f,+7.13458806e-02f,+4.92503587e-03f,+3.05170007e-02f,-3.10869832e-02f,
+7.75254816e-02f,-9.09374729e-02f,-1.24412430e-02f,+1.01389721e-01f,+4.16581184e-02f,
-9.91728827e-02f,+5.90986535e-02f,-8.25555548e-02f,-1.41669959e-02f,-7.78698921e-03f,
+8.22784677e-02f,+4.42316756e-02f,+4.57999632e-02f,-2.07139328e-02f,-9.51260626e-02f,
-4.52682376e-04f,+4.78822961e-02f,+2.77332291e-02f,-2.89108604e-02f,+3.73351946e-02f,
+8.89087841e-02f,-7.67287314e-02f,+2.05050334e-02f,+5.66341206e-02f,-2.87631527e-02f,
-6.75901771e-03f,-1.36062726e-02f,+1.01322897e-01f,-2.43170857e-02f,+4.19386104e-02f,
-7.81882331e-02f,-3.93097103e-02f,+3.68523225e-02f,-8.79131854e-02f,-2.65531912e-02f,
+6.12403676e-02f,-7.50415027e-03f,-2.63170786e-02f,+8.64362866e-02f,-6.91988170e-02f,
-3.80370729e-02f,-5.10566868e-02f,-4.14915085e-02f,-7.91038796e-02f,+8.10078171e-04f,
+8.14903602e-02f,+4.63076830e-02f,+2.08330713e-02f,-9.13289338e-02f,-3.36653702e-02f,
+7.71814436e-02f,-2.56809369e-02f,+7.27057038e-03f,-1.52695328e-02f,+7.35807419e-03f,
+9.17987376e-02f,-1.03082739e-01f,+7.41841197e-02f,+6.51902109e-02f,+2.82993447e-02f,
-3.14889997e-02f,+3.86338308e-02f,+1.97184272e-02f,-1.62727144e-02f,-9.32425559e-02f,
+3.06585990e-02f,-6.18210360e-02f,-8.47119913e-02f,-5.38350977e-02f,-6.77498877e-02f,
+9.80828404e-02f,+6.82713911e-02f,+9.34578106e-02f,+2.59255972e-02f,-1.29493698e-03f,
+9.52832773e-02f,+1.52958196e-03f,+4.19800030e-03f,-6.75267354e-02f,+5.83857186e-02f,
+2.77427994e-02f,-6.83741644e-02f,+7.68996999e-02f,-2.62833536e-02f,-9.42562819e-02f,
+1.22790094e-04f,-7.05028474e-02f,+5.84833659e-02f,-6.76406473e-02f,+4.57692556e-02f,
-3.26979905e-02f,-6.46069199e-02f,+5.89812174e-02f,-2.73032077e-02f,+6.12433217e-02f,
-1.99603084e-02f,+2.93902252e-02f,-8.78589079e-02f,+2.65645050e-02f,-5.67755774e-02f,
+3.50016542e-02f,-3.46971080e-02f,-7.68876597e-02f,-5.60162216e-03f,+4.62439656e-03f,
-3.31844538e-02f,+2.02727355e-02f,+5.93423322e-02f,+8.11193511e-02f,-5.16610919e-04f,
-2.92296614e-02f,-3.49523984e-02f,+1.65355913e-02f,+4.35813516e-02f,-1.01624854e-01f,
-9.61029083e-02f,-4.13387939e-02f,-2.34249588e-02f,-4.55928408e-02f,+2.03911159e-02f,
+5.58127388e-02f,+6.86207935e-02f,-6.72642738e-02f,+8.63752812e-02f,-1.10225610e-01f,
-9.81364474e-02f,+2.11229641e-02f,+4.98792939e-02f,+1.10457189e-01f,-7.18189999e-02f,
+1.24771800e-02f,-4.36214469e-02f,+3.96442004e-02f,+1.85661390e-02f,+3.25546041e-02f,
-7.36398101e-02f,+1.70389861e-02f,-1.80175155e-03f,+1.65150464e-02f,+9.42084268e-02f,
-4.07206342e-02f,+3.92817631e-02f,-5.60099483e-02f,-6.75615668e-02f,+2.91320309e-02f,
-4.50363010e-03f,+1.23092532e-02f,+5.61848283e-05f,-6.70887828e-02f,+8.83020982e-02f,
-9.50310156e-02f,-2.54964978e-02f,-1.02926821e-01f,-3.34336981e-02f,-2.92516425e-02f,
-5.69564477e-02f,+5.75541332e-02f,-9.82109606e-02f,-3.71048599e-02f,-2.25638077e-02f,
+2.77303681e-02f,+3.87227759e-02f,+8.62959400e-02f,-9.32978690e-02f,+3.39194313e-02f,
-4.35860083e-02f,-6.13789633e-02f,-6.21326789e-02f,+7.80388713e-04f,-2.60476097e-02f,
+8.96572694e-03f,-7.30861053e-02f,+8.81708935e-02f,-5.70288599e-02f,+7.50868842e-02f,
+7.12647662e-02f,+7.06018880e-02f,+5.27476408e-02f,+2.28619203e-02f,-5.29808104e-02f,
-2.71154642e-02f,-1.03554074e-02f,+9.94009152e-02f,+3.37421894e-02f,+2.92033330e-02f,
+1.12764113e-01f,+9.21150520e-02f,-2.16496736e-03f,-5.00309207e-02f,-1.00570381e-01f,
-4.54561859e-02f,-2.52124835e-02f,+6.18282929e-02f,+5.59378043e-02f,+4.10766937e-02f,
+9.79197845e-02f,-3.25247869e-02f,-6.85206950e-02f,-9.41275209e-02f,+8.56878385e-02f,
+4.69954610e-02f,+7.72261247e-02f,-7.42936730e-02f,+7.28437901e-02f,-9.10382494e-02f,
+8.21205135e-03f,-1.03028126e-01f,+2.08098777e-02f,+5.67514710e-02f,+1.02598462e-02f,
-3.82114500e-02f,-5.21967448e-02f,+3.77847292e-02f,+8.67438763e-02f,-6.64280355e-02f,
+3.16704474e-02f,-4.87423390e-02f,-8.06630477e-02f,-3.04661877e-03f,-7.32665062e-02f,
+7.88805261e-02f,-2.37544738e-02f,+8.62411633e-02f,-7.19759166e-02f,-1.00483768e-01f,
+5.91373220e-02f,+8.04698765e-02f,-8.20946842e-02f,-3.58369648e-02f,+8.43181610e-02f,
+8.15473571e-02f,+1.04435638e-01f,+9.49775726e-02f,+5.38662961e-03f,+3.07626911e-02f,
+9.82230306e-02f,-9.95856058e-03f,-5.67732230e-02f,-6.74412102e-02f,-3.82175706e-02f,
+3.85023281e-02f,-2.15622056e-02f,-1.03417128e-01f,-3.96937653e-02f,-8.17307010e-02f,
+9.37580783e-03f,-2.28912458e-02f,-9.63382199e-02f,-2.10173056e-02f,+2.76979711e-02f,
+3.95038761e-02f,-1.51744727e-02f,+4.94234227e-02f,+2.55075023e-02f,+8.08756202e-02f,
-7.74358734e-02f,-1.78795885e-02f,+5.77721819e-02f,-6.45638704e-02f,+2.29520816e-02f,
+4.46546599e-02f,+8.86631198e-03f,-6.05913140e-02f,-4.49254289e-02f,+7.05164438e-03f,
-4.36534770e-02f,-7.95991719e-02f,-1.02563627e-01f,-5.79787232e-02f,-1.90800289e-04f,
-5.34131825e-02f,+2.14946829e-02f,+5.15470654e-02f,+3.40196565e-02f,-4.59290929e-02f,
-6.27547689e-03f,+6.61530644e-02f,-4.57898378e-02f,+3.44629660e-02f,-1.01972982e-01f,
+1.03595145e-01f,+1.36844302e-02f,-3.44334077e-03f,-6.52225912e-02f,+2.46504620e-02f,
-7.82760382e-02f,-9.11125094e-02f,+9.29640606e-02f,-6.89969212e-02f,+1.96257383e-02f,
-9.83750299e-02f,-5.27591966e-02f,-7.71602839e-02f,+1.36163086e-02f,-1.16795227e-02f,
-2.80520990e-02f,-1.10376477e-02f,+4.11174521e-02f,-9.26020071e-02f,+1.01504736e-01f,
-3.23538929e-02f,+2.98624709e-02f,-9.40420777e-02f,-4.60078120e-02f,+7.38828853e-02f,
+3.61140892e-02f,-1.03975452e-01f,-2.29933038e-02f,-1.72834173e-02f,-2.06091702e-02f,
-2.87434459e-03f,-9.29681212e-03f,-7.26276562e-02f,-1.03698127e-01f,-2.90568620e-02f,
+6.12265095e-02f,-1.73506439e-02f,-2.19226107e-02f,+6.58572689e-02f,-6.79294914e-02f,
-6.81216419e-02f,-5.49261123e-02f,+9.01156142e-02f,-2.81961709e-02f,-2.21302360e-02f,
-9.68555883e-02f,-1.02596499e-01f,-6.29816353e-02f,+2.62186322e-02f,-7.90467411e-02f,
-4.36206087e-02f,-1.02143660e-01f,+2.14939229e-02f,-2.41973344e-02f,-5.59777431e-02f,
-7.21401572e-02f,+2.76511647e-02f,+3.16514596e-02f,-9.16042775e-02f,+6.05253913e-02f,
-4.38678153e-02f,-5.39670093e-03f,-8.46420974e-02f,+7.22055149e-04f,-6.89928979e-02f,
-4.73379716e-02f,+1.84132922e-02f,-6.84583932e-02f,+3.00795026e-02f,+3.69458981e-02f,
+1.01109944e-01f,-7.33677745e-02f,-1.46170137e-02f,+9.51628163e-02f,+7.27095231e-02f,
+1.00530006e-01f,-7.28134960e-02f,-1.02022164e-01f,+6.71532676e-02f,+5.98485991e-02f,
+4.93096188e-02f,-2.20490322e-02f,-5.75682484e-02f,+6.15991130e-02f,+7.61531219e-02f,
-4.52546403e-02f,-4.95924130e-02f,+2.71467939e-02f,+2.82077119e-02f,-4.57273982e-02f,
-5.91215417e-02f,-5.56709953e-02f,+1.00703888e-01f,-7.72877559e-02f,+8.50874111e-02f,
+6.13491014e-02f,+7.51027241e-02f,-9.13939551e-02f,+3.03558037e-02f,+2.13061199e-02f,
-7.91375339e-02f,-4.39924747e-03f,-8.85730982e-03f,+6.43173605e-03f,-7.97278285e-02f,
+8.31015781e-02f,+5.65677360e-02f,-9.15612653e-02f,-6.98419958e-02f,+5.30011095e-02f,
-1.00138508e-01f,+1.12166777e-02f,+5.18263169e-02f,-9.47017744e-02f,-4.74965572e-02f,
+7.00275302e-02f,-7.86182433e-02f,-2.13966332e-02f,-9.17314738e-02f,+5.02029732e-02f,
+8.47502872e-02f,-9.98550747e-03f,-5.67029975e-02f,-5.83225638e-02f,+4.31766026e-02f,
-3.48260254e-02f,-7.15708360e-02f,+2.07286645e-02f,+6.42205700e-02f,-4.18844186e-02f,
-8.86682644e-02f,-8.11645463e-02f,+1.72807497e-03f,-5.58560230e-02f,-5.01517951e-02f,
+6.86950758e-02f,-7.93244839e-02f,+4.60425429e-02f,+7.80596882e-02f,-9.97324660e-02f,
-7.27563053e-02f,+1.24472203e-02f,+2.49272515e-03f,+9.20138881e-02f,+4.65303361e-02f,
-8.17383379e-02f,+8.82941708e-02f,-1.04198217e-01f,+3.06100212e-02f,+9.09075513e-02f,
-1.06784934e-02f,+2.39665098e-02f,-8.83928407e-03f,-8.69475231e-02f,-7.53347129e-02f,
-6.10561818e-02f,+7.74782673e-02f,+1.00986503e-01f,-5.36917672e-02f,+3.53698172e-02f,
-9.48265716e-02f,+9.97487679e-02f,-1.71556305e-02f,-1.34270685e-02f,-7.18795732e-02f,
+3.31898555e-02f,-3.98399541e-03f,-9.57898796e-02f,-8.36672634e-02f,+5.94542585e-02f,
+2.25976240e-02f,-2.13059317e-02f,-6.67964965e-02f,-7.04178363e-02f,-7.85100088e-02f,
+1.24248788e-02f,+3.71685550e-02f,+6.17931709e-02f,-9.59718302e-02f,+4.80212942e-02f,
-9.61514339e-02f,+1.83158964e-02f,+4.13774028e-02f,+6.19719252e-02f,+8.07022676e-02f,
-1.47795454e-02f,+1.03838392e-01f,+4.50348184e-02f,-4.60328013e-02f,-2.86426917e-02f,
+2.43055746e-02f,-6.76587224e-02f,-8.11461583e-02f,+4.53912839e-02f,+5.16710505e-02f,
-1.48998052e-02f,-1.82003528e-03f,+1.80220157e-02f,+9.54353735e-02f,+7.44812414e-02f,
-3.72901484e-02f,-3.26035768e-02f,-3.42322886e-02f,+9.59598273e-03f,+6.49164543e-02f,
+2.39466559e-02f,+1.33275287e-02f,-6.88363016e-02f,-1.42611600e-02f,+2.31787786e-02f,
+4.93157096e-02f,+6.00757264e-02f,+4.96562980e-02f,-5.79722486e-02f,+8.21691081e-02f,
+1.52710890e-02f,+4.56793979e-02f,-5.20464405e-03f,-3.82966391e-04f,-5.24700396e-02f,
+1.87176447e-02f,+8.20996761e-02f,+2.03800872e-02f,-8.29827320e-03f,-8.68567973e-02f,
-1.04669444e-01f,+9.42909643e-02f,+7.15651885e-02f,+9.68027189e-02f,+8.73584673e-02f,
+3.34934667e-02f,-1.88841932e-02f,-6.57439977e-02f,-6.02543168e-02f,-2.66137123e-02f,
-6.63319835e-03f,-5.35622425e-02f,+7.96523616e-02f,+3.82331088e-02f,+5.82536589e-03f,
+1.11133158e-02f,+2.76028533e-02f,+6.10239729e-02f,-3.85981351e-02f,+8.26112702e-02f,
+3.91874909e-02f,-2.56309602e-02f,+2.32662428e-02f,-5.10602221e-02f,+7.88903609e-02f,
-2.97875255e-02f,-2.45885104e-02f,+4.98878956e-03f,-5.74122295e-02f,-9.76365432e-02f,
-7.68587366e-02f,+2.06424370e-02f,+2.14424357e-03f,+5.43660671e-03f,+1.00369297e-01f,
+2.82819048e-02f,-7.43064135e-02f,+1.05453975e-01f,+6.10923283e-02f,+6.08455911e-02f,
+4.62900177e-02f,+4.49627601e-02f,-5.43376952e-02f,-8.61651599e-02f,+4.09003682e-02f,
+9.30369645e-02f,-1.36537477e-02f,-5.32674342e-02f,+8.95402580e-02f,+3.29814032e-02f,
-1.01218015e-01f,+4.90326472e-02f,-7.55988732e-02f,+9.84481722e-02f,+1.10878535e-01f,
+2.43655685e-02f,+8.67906660e-02f,-1.03802085e-01f,+5.08480109e-02f,-1.71836093e-02f,
-2.83613876e-02f,+4.94439080e-02f,-5.83687914e-04f,-9.20389593e-03f,+4.90117259e-02f,
+4.45490703e-02f,-4.90975678e-02f,+1.70463119e-02f,+1.03290163e-01f,+4.91699092e-02f,
-4.57044914e-02f,-8.17408934e-02f,-8.31928924e-02f,+2.40490194e-02f,-6.38922602e-02f,
+5.15705273e-02f,-9.16643739e-02f,-6.09449521e-02f,+4.17484809e-03f,+9.38770324e-02f,
+8.91062766e-02f,-5.47353998e-02f,+4.35939245e-03f,+5.98215945e-02f,-1.03175737e-01f,
+2.19127093e-03f,-5.67955598e-02f,+1.21206427e-02f,-1.96665637e-02f,-9.71938074e-02f,
-4.05723043e-02f,-9.57478583e-02f,+5.02302349e-02f,-3.18693891e-02f,-1.37338927e-02f,
-7.06892908e-02f,-4.99704033e-02f,+3.39785703e-02f,-7.97050744e-02f,-9.67547819e-02f,
-4.16845679e-02f,+1.01629924e-02f,+1.07810251e-01f,+6.50766715e-02f,-5.05764298e-02f,
+1.61197353e-02f,+5.68090715e-02f,+6.15875795e-02f,-9.30678770e-02f,+5.48973009e-02f,
+2.20960509e-02f,+5.21039702e-02f,-5.80401309e-02f,-9.73008722e-02f,-2.10841969e-02f,
+3.37253585e-02f,-4.74889874e-02f,+8.45972747e-02f,-1.03345327e-01f,-7.73796067e-02f,
+8.70547891e-02f,-5.79552259e-03f,+9.77528095e-02f,-5.60635142e-02f,-8.28047246e-02f,
+9.40216407e-02f,+5.89564033e-02f,+5.50539419e-02f,-9.25299972e-02f,+5.72280623e-02f,
-9.40795615e-02f,-1.00891739e-01f,+2.01980025e-02f,+7.94299841e-02f,-2.40406636e-02f,
-6.69535920e-02f,-1.93867404e-02f,-4.90435679e-03f,+6.10241108e-02f,+4.50177677e-02f,
-9.24284384e-02f,+9.58134010e-02f,+1.62431840e-02f,-8.01704153e-02f,+3.11047863e-03f,
+8.26683566e-02f,+8.18261579e-02f,+9.84748900e-02f,-4.01507318e-02f,-8.80174041e-02f,
+5.35615310e-02f,+5.21416254e-02f,+1.07565761e-01f,-6.93278247e-03f,-8.51084217e-02f,
-7.36883879e-02f,-4.00332883e-02f,-1.04889877e-01f,-5.42071499e-02f,-3.49425673e-02f,
-1.96131840e-02f,-9.65290070e-02f,+7.54469261e-02f,+4.46078368e-02f,+8.15932304e-02f,
-6.26848713e-02f,+3.49854305e-02f,+7.21025914e-02f,+4.01622467e-02f,-4.63128537e-02f,
-4.95983008e-03f,+2.11785291e-03f,+8.46332386e-02f,-7.26120099e-02f,+4.06130552e-02f,
-6.68111518e-02f,-8.36647972e-02f,-3.94295529e-02f,+3.94992046e-02f,-7.68842176e-02f,
-7.30616674e-02f,+7.15458021e-02f,+6.04998022e-02f,-7.17660338e-02f,+3.78158540e-02f,
-4.59337793e-02f,-6.32363260e-02f,+3.18799913e-02f,+8.20221901e-02f,+3.09493020e-02f,
+4.67163734e-02f,+9.41091776e-03f,+1.96884461e-02f,-1.05619818e-01f,+9.30991843e-02f,
-9.90633219e-02f,-9.12757963e-02f,-1.53173627e-02f,+3.03836856e-02f,-4.88368347e-02f,
+5.34502231e-03f,+6.05661608e-02f,+3.70372571e-02f,-6.04220890e-02f,-5.21119684e-02f,
-7.98215065e-03f,-1.36198755e-02f,-8.64685774e-02f,-1.37686729e-03f,+4.55264859e-02f,
+7.72321299e-02f,+8.70243013e-02f,+7.25271776e-02f,-3.15307602e-02f,+6.04883470e-02f,
-2.00115498e-02f,+9.34153423e-02f,-9.29358080e-02f,+7.97120109e-02f,-8.41516256e-02f,
-5.06190397e-02f,-8.66237059e-02f,-1.03882238e-01f,+1.10694468e-02f,+5.80861885e-03f,
-3.12793255e-02f,-2.19760276e-02f,-1.97544303e-02f,-8.72604027e-02f,-4.37382236e-02f,
+4.42348719e-02f,+1.79804154e-02f,+5.79010416e-03f,-7.36976489e-02f,+1.47992754e-02f,
+8.82481039e-02f,+4.73139249e-02f,-5.55271395e-02f,-2.88614798e-02f,-8.73990208e-02f,
+8.54148492e-02f,-4.79028486e-02f,-1.22788809e-02f,+1.72204208e-02f,+4.53402251e-02f,
+8.14807490e-02f,+8.71762112e-02f,+1.20771872e-02f,+5.68893086e-03f,-1.00674339e-01f,
-6.57983795e-02f,-9.49209630e-02f,+2.14728508e-02f,-7.82109946e-02f,-2.36410163e-02f,
-2.60406435e-02f,-2.75083017e-02f,-6.16543964e-02f,-4.09323946e-02f,-9.17605981e-02f,
+6.90627983e-03f,+1.50486100e-02f,+2.02068686e-02f,-7.59721249e-02f,+1.28148114e-02f,
+3.69346291e-02f,+7.35956952e-02f,+3.60808335e-02f,-6.57159239e-02f,+2.00828705e-02f,
-4.65911254e-02f,-5.00110211e-03f,+3.04549560e-02f,+1.03013694e-01f,+8.33816305e-02f,
+6.80586845e-02f,-1.36504397e-02f,+7.78572857e-02f,+9.16806012e-02f,-7.57100284e-02f,
+5.07308431e-02f,-9.65148807e-02f,+7.39623187e-03f,-4.58128713e-02f,-5.62289692e-02f,
+6.17548078e-03f,+2.72956286e-02f,-8.59100446e-02f,-8.31439868e-02f,+6.20188471e-03f,
+4.76492792e-02f,-8.09632838e-02f,+2.11117491e-02f,+4.83623743e-02f,+1.07162111e-01f,
+2.80557703e-02f,-4.35880832e-02f,+2.55664103e-02f,-4.17065062e-02f,-6.77255243e-02f,
+8.79932269e-02f,+3.63963656e-02f,+5.95564805e-02f,-5.66307344e-02f,+5.64732663e-02f,
+4.04186249e-02f,+4.10201401e-02f,-6.33213669e-03f,+6.07416406e-02f,-1.84633546e-02f,
-1.90757215e-02f,+6.21898174e-02f,-5.86724207e-02f,-5.65317646e-02f,+2.56600976e-02f,
+6.02903180e-02f,-1.00625500e-01f,+6.45249262e-02f,+8.28208625e-02f,+6.13450035e-02f,
-7.17535987e-02f,+9.17191580e-02f,-4.70047854e-02f,-7.99529999e-02f,+5.38181514e-02f,
+8.66985396e-02f,+5.01369014e-02f,-1.08084787e-05f,-4.32191752e-02f,-8.41099545e-02f,
+4.13054116e-02f,+7.98712671e-02f,+1.53385848e-03f,+6.66113943e-03f,+8.03570449e-03f,
-1.37536228e-02f,-4.66863923e-02f,+9.33217481e-02f,-9.51733068e-02f,+1.04285158e-01f,
-2.68769413e-02f,+1.70436725e-02f,-2.46415436e-02f,+4.91721407e-02f,+1.01116009e-01f,
-1.03758641e-01f,+3.43177691e-02f,+1.04224391e-01f,+3.01902816e-02f,+1.78610161e-02f,
+8.44753608e-02f,-4.50573564e-02f,-5.92304580e-02f,+6.46072254e-02f,-6.58231229e-02f,
-5.72682582e-02f,+7.12034926e-02f,+6.05224147e-02f,-5.49105629e-02f,-6.41298816e-02f,
-8.34503919e-02f,+2.37635449e-02f,+4.09755781e-02f,+8.44174549e-02f,+9.33472961e-02f,
-9.25593972e-02f,-5.04722744e-02f,+5.99943474e-02f,+4.20169793e-02f,+1.09387618e-02f,
-2.19463911e-02f,+5.32789715e-02f,+5.41575961e-02f,-4.56433073e-02f,-9.84871686e-02f,
-3.15923356e-02f,+4.88811135e-02f,+5.59144020e-02f,-1.17703900e-02f,-5.88757684e-04f,
-3.63502875e-02f,+7.22664595e-03f,-8.34092796e-02f,+2.03490332e-02f,-3.30219902e-02f,
+5.37874550e-02f,-4.81982008e-02f,-2.77657472e-02f,-8.89020562e-02f,+3.66329849e-02f,
-7.09473491e-02f,+6.05742112e-02f,+2.98182517e-02f,-8.69546458e-02f,-8.34308267e-02f,
-2.84613315e-02f,-9.69325453e-02f,-2.30279751e-02f,+6.78845420e-02f,-5.96394623e-03f,
-6.39772415e-02f,-4.34914567e-02f,-1.04789756e-01f,+1.26061160e-02f,-7.19074532e-02f,
-1.04300147e-02f,+6.86393231e-02f,+5.41105531e-02f,+9.84917581e-02f,-1.97882205e-03f,
+6.48787171e-02f,+8.27942565e-02f,-1.02274626e-01f,-3.52589116e-02f,+1.08850216e-02f,
-6.65342510e-02f,-5.20886555e-02f,-6.98516192e-03f,+8.16924796e-02f,-9.02345479e-02f,
-5.84745035e-02f,+9.48637500e-02f,+6.53085113e-02f,-7.47305378e-02f,-4.37230505e-02f,
-6.10083453e-02f,-8.64673406e-02f,+5.71931228e-02f,+5.42270616e-02f,+7.98811987e-02f,
+5.08162379e-02f,-1.05404921e-01f,-9.24357697e-02f,+4.23142985e-02f,+5.32229282e-02f,
+4.39043492e-02f,-4.03038710e-02f,+1.94698398e-03f,+5.18432520e-02f,-9.84228402e-02f,
-9.10511315e-02f,+5.52714765e-02f,+4.62305993e-02f,-1.56760942e-02f,-8.99356604e-02f,
-9.84621793e-03f,-3.45445890e-03f,+9.83361378e-02f,+3.40736881e-02f,-2.19480880e-02f,
-6.68523759e-02f,-4.44068015e-02f,-3.38422209e-02f,+7.01953247e-02f,+8.57121721e-02f,
+7.12931305e-02f,-9.42565501e-02f,+3.93877141e-02f,-7.00676739e-02f,-3.65247279e-02f,
-9.07746032e-02f,-9.98890586e-03f,-3.04743759e-02f,-9.90094766e-02f,+8.07042047e-02f,
+2.74507701e-02f,-7.44816884e-02f,-6.36224672e-02f,-1.00783810e-01f,-7.69275203e-02f,
-4.62838672e-02f,-7.87770376e-02f,+8.56607333e-02f,+3.96794342e-02f,+6.30297959e-02f,
+4.14301120e-02f,+3.81174833e-02f,+6.48267940e-02f,+5.07866628e-02f,+7.63774589e-02f,
+2.62314416e-02f,+6.19719662e-02f,-1.73791703e-02f,-3.28987241e-02f,+3.07184141e-02f,
-9.66898054e-02f,-1.01110078e-01f,+7.00209141e-02f,-2.20971229e-03f,-1.31484615e-02f,
+4.32604477e-02f,-7.03902543e-02f,+3.17401253e-02f,+1.98705196e-02f,-7.35297725e-02f,
+6.40115663e-02f,+6.29791170e-02f,-9.58211347e-02f,-2.67684441e-02f,-7.31124505e-02f,
-7.49066100e-02f,+2.76407991e-02f,+9.26112533e-02f,-4.25820649e-02f,-5.89283854e-02f,
-1.05256900e-01f,-1.08074978e-01f,-4.46073003e-02f,-6.19798377e-02f,+8.62490460e-02f,
+4.82087731e-02f,-8.11130852e-02f,+1.34778991e-02f,+4.41752449e-02f,+3.89039330e-02f,
+2.37221806e-03f,-1.09175928e-01f,-6.85670450e-02f,-2.06403844e-02f,+6.21342622e-02f,
-2.50917897e-02f,-5.01167290e-02f,-4.90484200e-02f,+8.88575539e-02f,+4.56046835e-02f,
-9.88846123e-02f,+2.96808369e-02f,-2.82654911e-03f,+7.06587210e-02f,-6.72544166e-02f,
-7.51176551e-02f,-9.30263922e-02f,-1.26197338e-02f,+9.41679031e-02f,+7.57328570e-02f,
-5.51068448e-02f,+2.99547520e-02f,+2.27134898e-02f,+1.01704024e-01f,+6.93205819e-02f,
+2.79612914e-02f,-1.02228209e-01f,+4.41228040e-02f,+9.14391056e-02f,+9.53356996e-02f,
-2.85362005e-02f,+6.97960705e-03f,-3.77584249e-02f,-4.29788232e-02f,-7.41789043e-02f,
-6.91849142e-02f,-7.21413791e-02f,-9.56109166e-02f,-1.35193765e-02f,+1.50314644e-02f,
-2.08578054e-02f,+8.76344591e-02f,-8.59397203e-02f,-2.05846634e-02f,-6.44060671e-02f,
-8.44559595e-02f,+5.53608462e-02f,+7.94241726e-02f,-1.04063235e-01f,+1.31040150e-02f,
+2.01795687e-04f,-6.29948378e-02f,+2.54117716e-02f,+7.65458792e-02f,-3.91418152e-02f,
-5.76308602e-03f,-9.35205147e-02f,+5.32493666e-02f,+7.83648267e-02f,+8.45860615e-02f,
-1.01026639e-01f,+4.02633399e-02f,-3.64515185e-02f,+1.24008581e-02f,+8.85013640e-02f,
-4.35282513e-02f,-4.25288454e-02f,-8.95343572e-02f,-8.40254053e-02f,-9.17895287e-02f,
+6.11306019e-02f,+1.54433148e-02f,-5.46642812e-03f,-3.97611111e-02f,-1.06245771e-01f,
-9.16737840e-02f,-6.34371340e-02f,-1.26946401e-02f,+3.10471132e-02f,-9.01282355e-02f,
-9.23660323e-02f,-6.09820485e-02f,-3.86908315e-02f,-5.62760085e-02f,+4.83550243e-02f,
+7.75422677e-02f,+7.46545941e-02f,+5.39391339e-02f,+1.29084634e-02f,-1.00705989e-01f,
+6.00577146e-03f,+1.68078486e-02f,+8.27304795e-02f,+3.64408605e-02f,+3.87393907e-02f,
+1.82858855e-02f,-7.59675726e-02f,-4.10782956e-02f,-5.88241406e-02f,-7.63802007e-02f,
+3.95949231e-03f,-4.77483012e-02f,-2.07091738e-02f,-5.31674027e-02f,+8.78563151e-02f,
-2.73240963e-03f,-7.74400011e-02f,+8.35585967e-02f,-6.88495785e-02f,-8.14151913e-02f,
-4.13529947e-02f,-7.84052759e-02f,+6.60685971e-02f,-7.03532901e-03f,+5.99006414e-02f,
+4.72554192e-02f,-4.60351296e-02f,+7.86460340e-02f,-4.47294936e-02f,-7.97528774e-03f,
-1.46006122e-02f,-2.97314487e-02f,-6.46596327e-02f,-1.45976385e-02f,+2.59624645e-02f,
-5.79021499e-02f,-3.34909670e-02f,+1.72155611e-02f,-6.40254244e-02f,+3.22334729e-02f,
-7.11856186e-02f,-4.41832170e-02f,-2.14205105e-02f,+1.32509861e-02f,-7.57221691e-03f,
+9.16356146e-02f,+2.65194662e-02f,+1.01605542e-01f,-6.75778836e-03f,-8.11120048e-02f,
+9.82993022e-02f,+2.19538137e-02f,+3.49752679e-02f,-2.04216242e-02f,-9.08093676e-02f,
+2.43437961e-02f,-2.20937803e-02f,+1.04156040e-01f,+3.05363610e-02f,+2.37723663e-02f,
+2.59081349e-02f,-6.28461838e-02f,-4.33117896e-02f,-7.47346058e-02f,+1.00895010e-01f,
-2.00599879e-02f,+6.64886758e-02f,-1.04723141e-01f,-8.64851400e-02f,-6.05625063e-02f,
+4.64434102e-02f,-2.49901563e-02f,+2.46182084e-04f,+3.96045670e-02f,-6.51044250e-02f,
-5.37172295e-02f,+9.84846130e-02f,+9.51655209e-04f,-1.03031136e-01f,-2.27654949e-02f,
+7.85520226e-02f,+1.15261562e-01f,-2.69698128e-02f,+1.03117235e-01f,+3.68644670e-02f,
+9.64036211e-02f,-8.91573355e-02f,-9.35727283e-02f,+8.95697027e-02f,+6.65090606e-02f,
+8.19028728e-03f,-9.04441699e-02f,+1.48096681e-02f,+3.11337411e-04f,-3.47932354e-02f,
+1.76154170e-02f,-5.61193191e-02f,-1.39402235e-02f,-1.01039439e-01f,+1.14580207e-01f,
-4.17761281e-02f,+7.97449723e-02f,+1.80227458e-02f,+1.36056542e-03f,+7.33576193e-02f,
-1.96164101e-02f,+4.78786007e-02f,+7.61884972e-02f,-9.72285792e-02f,+2.71894597e-02f,
+5.78394569e-02f,-4.78332005e-02f,-8.78872350e-02f,-3.47922519e-02f,-6.20537996e-02f,
-2.52631605e-02f,+8.17257240e-02f,-5.15497886e-02f,+8.89587682e-03f,-3.04480530e-02f,
+1.03557250e-02f,+3.00186351e-02f,-4.19373848e-02f,-9.40864682e-02f,+8.13400373e-02f,
-1.08024672e-01f,+9.84552428e-02f,+8.60063583e-02f,-2.99812481e-02f,+8.70621111e-03f,
-2.25103274e-02f,-4.86849323e-02f,-7.33801126e-02f,-9.65483428e-04f,+2.88122855e-02f,
-4.25027311e-03f,-4.76954021e-02f,-3.18560116e-02f,+3.21749412e-02f,+3.04608755e-02f,
-5.35528772e-02f,-6.44849241e-02f,+5.75477928e-02f,-1.09006114e-01f,+9.30971652e-02f,
-9.74256769e-02f,-1.08150870e-01f,-4.32954058e-02f,+5.45094348e-02f,-2.03109961e-02f,
+3.65817435e-02f,-6.88238591e-02f,+3.35825793e-02f,+3.70461121e-02f,+7.62072355e-02f,
-7.60659575e-02f,+2.82490570e-02f,-7.14338347e-02f,+2.31127515e-02f,+5.58156967e-02f,
-5.54714091e-02f,-8.32058713e-02f,+2.96320245e-02f,-2.49460451e-02f,-1.03338612e-02f,
+1.06045101e-02f,-7.62691721e-02f,+2.73617022e-02f,-2.81570461e-02f,-8.48175734e-02f,
+7.58676305e-02f,+6.26210049e-02f,+1.68981981e-02f,-1.69728175e-02f,+5.27921580e-02f,
-1.07982755e-01f,+9.28479955e-02f,-9.41278264e-02f,-1.22609985e-04f,+4.55576852e-02f,
-7.22487047e-02f,-9.58056152e-02f,-8.85176137e-02f,+9.13991556e-02f,+8.70416462e-02f,
-3.08433268e-03f,+2.25751661e-02f,-2.32474413e-02f,-1.06061669e-02f,-1.18123824e-02f,
-1.10738069e-01f,-3.46368141e-02f,+7.10274354e-02f,-8.09236690e-02f,-3.22989821e-02f,
+8.10702965e-02f,-8.94910619e-02f,+4.42784280e-02f,+7.92369619e-02f,+9.49898660e-02f,
+6.68496937e-02f,+8.36869329e-02f,-6.35430738e-02f,-4.69408520e-02f,+9.14138705e-02f,
+5.45641035e-02f,+9.64473858e-02f,+2.23475173e-02f,-8.91938284e-02f,+8.41005519e-02f,
-3.62002999e-02f,+2.30564997e-02f,-9.70447436e-02f,+2.32495293e-02f,-5.20984381e-02f,
-2.63922140e-02f,-3.55978161e-02f,+3.27017382e-02f,+9.19388235e-03f,+8.33789781e-02f,
-5.38079441e-03f,-1.98796839e-02f,-3.66861075e-02f,-1.04782686e-01f,+5.04510030e-02f,
-2.65211165e-02f,+4.18607518e-02f,-2.99557596e-02f,+2.55238935e-02f,-5.92414252e-02f,
+1.00983746e-01f,-4.62229550e-03f,-9.28087831e-02f,-8.37896466e-02f,-5.27539328e-02f,
-8.65870491e-02f,+3.53997871e-02f,-3.43577564e-02f,-3.34423035e-03f,+4.77287360e-02f,
-2.55253562e-03f,-6.54385984e-02f,-6.57731965e-02f,+8.61047953e-02f,-8.17973465e-02f,
+4.55616675e-02f,-6.75942227e-02f,-4.05945582e-03f,-9.27880332e-02f,+5.03991693e-02f,
-5.88474870e-02f,+2.17742175e-02f,-1.60711501e-02f,+1.51348412e-02f,-9.82653946e-02f,
-2.25233883e-02f,+9.04717371e-02f,-1.72741245e-02f,-8.66150409e-02f,+6.46867901e-02f,
+3.47644202e-02f,+8.71423855e-02f,+6.90249726e-02f,-1.51267814e-05f,+1.05069309e-01f,
+6.75164908e-02f,+9.04401094e-02f,+8.34223032e-02f,+3.12387235e-02f,+1.48538975e-02f,
+9.91164520e-03f,-1.04772493e-01f,+5.16575500e-02f,+2.98272893e-02f,+5.54618165e-02f,
-9.75716934e-02f,-3.22738886e-02f,-1.89225152e-02f,-6.23736009e-02f,-7.82101601e-03f,
+9.65742692e-02f,-8.85515809e-02f,-9.57192630e-02f,+4.91177812e-02f,+1.66695639e-02f,
-7.59741142e-02f,+6.04597256e-02f,-5.99119440e-02f,+7.39377737e-03f,+1.24746859e-02f,
-9.02227089e-02f,+1.73274428e-03f,+3.50202695e-02f,+5.89226931e-03f,+1.58494115e-02f,
-4.21040878e-02f,+6.70568123e-02f,-7.65043870e-02f,+5.16981110e-02f,-1.37114599e-02f,
-8.33775103e-03f,-5.77366091e-02f,-6.93576634e-02f,-2.20162459e-02f,-1.08191602e-01f,
+8.10209364e-02f,+8.47916305e-02f,+8.48633796e-02f,+3.78909186e-02f,+9.86946002e-02f,
-6.78460822e-02f,+9.00761932e-02f,+9.23951268e-02f,-1.06533110e-01f,-9.16314274e-02f,
-8.14980716e-02f,-2.31859721e-02f,+4.10121605e-02f,+5.36343679e-02f,-3.13331783e-02f,
+1.65029541e-02f,+2.39989366e-02f,-7.47469813e-02f,-2.87851449e-02f,+6.27096891e-02f,
-1.07751995e-01f,+6.69129118e-02f,-6.88450038e-02f,+4.72889096e-02f,-2.89866123e-02f,
+8.06531981e-02f,+5.29712923e-02f,-8.94789323e-02f,-7.70409480e-02f,-5.95096126e-03f,
+3.51422243e-02f,+5.87850586e-02f,-5.31554781e-02f,+6.69686273e-02f,+1.02844231e-01f,
+1.02315908e-02f,-6.93713427e-02f,+3.77873927e-02f,+2.24850625e-02f,+6.88439375e-03f,
-1.01272382e-01f,+4.82238568e-02f,+1.03231594e-01f,-1.03230856e-01f,-1.03426248e-01f,
-3.78093496e-02f,+2.25459766e-02f,+2.77524069e-02f,+4.87727188e-02f,-6.64860979e-02f,
+3.11954562e-02f,-3.78546044e-02f,+5.27501591e-02f,+8.32354128e-02f,-7.15598166e-02f,
+1.12477820e-02f,-8.82369280e-02f,-6.16752356e-02f,-8.88050869e-02f,-7.62173813e-03f,
+9.46462229e-02f,-2.75856312e-02f,-5.79942092e-02f,+2.40427032e-02f,-8.91261771e-02f,
+7.16351643e-02f,-1.98072940e-02f,-2.27305964e-02f,-3.56611609e-02f,-5.15757501e-02f,
+6.29426166e-02f,+9.32847932e-02f,+8.86033848e-02f,+5.89686707e-02f,-1.29282176e-02f,
+9.24876109e-02f,+7.50913471e-03f,-7.01079071e-02f,-5.39567545e-02f,-1.91697255e-02f,
-4.10457402e-02f,-4.52612750e-02f,-3.36483568e-02f,-1.65404081e-02f,+9.30773541e-02f,
+9.97304916e-04f,+1.02761023e-01f,-4.95204516e-02f,+7.38406703e-02f,+1.01352073e-01f,
+1.93659067e-02f,+1.32006109e-02f,+7.50370845e-02f,-6.61870092e-03f,-5.63600995e-02f,
-7.60035813e-02f,+9.33974385e-02f,-1.04048379e-01f,+7.62425289e-02f,-3.08352266e-03f,
-1.88614484e-02f,-8.39915052e-02f,+9.19943824e-02f,-6.87842593e-02f,-7.72942007e-02f,
+8.11141431e-02f,-3.33195850e-02f,-4.95786145e-02f,+9.81592685e-02f,+1.96147654e-02f,
-9.08896998e-02f,-1.19749308e-02f,-9.69310571e-03f,-6.26612231e-02f,+8.75374004e-02f,
+5.77365234e-02f,+1.98853854e-02f,+5.05409800e-02f,-6.84099421e-02f,-9.36597586e-02f,
-1.52160004e-02f,+1.36241876e-02f,-9.27013755e-02f,-6.79392964e-02f,+3.65703925e-02f,
-9.89682078e-02f,+4.29036990e-02f,-1.46480650e-03f,-4.18206602e-02f,+9.11652222e-02f,
+9.84371826e-02f,+2.96578910e-02f,+2.78624222e-02f,-7.47707635e-02f,+5.11698723e-02f,
+5.64855337e-02f,+6.69803098e-02f,+4.67096046e-02f,-2.78898701e-02f,-6.29831702e-02f,
-3.76384109e-02f,+1.95306912e-02f,+9.73243415e-02f,-5.15424721e-02f,-9.32187140e-02f,
+5.43038920e-02f,-3.68540399e-02f,-1.01849422e-01f,-9.56119671e-02f,+6.79617897e-02f,
+6.60991743e-02f,-4.52995710e-02f,+1.33528411e-02f,+8.43004361e-02f,+1.02019466e-01f,
+3.93487588e-02f,+9.24184546e-02f,-5.72983548e-02f,-5.03614470e-02f,+8.78219306e-02f,
-7.30647743e-02f,+4.37924899e-02f,-2.33973935e-02f,-9.24531743e-02f,+7.95302913e-02f,
-5.39145358e-02f,-1.46281411e-04f,-7.91394189e-02f,+1.43621815e-02f,-5.44161629e-03f,
+5.82500920e-03f,-2.46811807e-02f,-5.33993803e-02f,+4.78949659e-02f,-2.56784204e-02f,
+8.21440890e-02f,+5.72859421e-02f,+2.62453184e-02f,-1.16379932e-02f,+2.32272465e-02f,
-3.78241241e-02f,+4.65165190e-02f,-4.05859277e-02f,+6.60253316e-02f,-1.77035369e-02f,
-1.13841817e-02f,-1.02712363e-01f,-9.98133719e-02f,+2.40905415e-02f,-7.88296163e-02f,
-2.39751171e-02f,+9.45615172e-02f,-5.94674656e-03f,-6.13235421e-02f,-6.46715909e-02f,
+1.00596212e-01f,-8.79620984e-02f,+1.10722880e-03f,-4.92588133e-02f,-1.22777233e-02f,
+4.40716557e-02f,-8.66594762e-02f,-7.44103640e-03f,-1.05349973e-01f,+8.98012668e-02f,
-3.08054537e-02f,-8.32039490e-02f,-4.22790647e-03f,-7.75761157e-02f,+1.98255479e-02f,
-6.13589073e-03f,+7.21143112e-02f,-9.50193778e-02f,-3.29587348e-02f,+7.98307434e-02f,
-1.00674823e-01f,-4.43867818e-02f,-4.15961035e-02f,+1.84420180e-02f,+8.14161380e-04f,
-3.72238830e-02f,-3.53885926e-02f,+1.26607278e-02f,-9.75115001e-02f,+6.08284771e-02f,
+3.93953727e-04f,-4.40434106e-02f,+3.50696519e-02f,-9.60097387e-02f,+7.54854456e-02f,
+5.09973392e-02f,-9.66457799e-02f,-1.02168307e-01f,-4.85241003e-02f,-8.18467587e-02f,
-8.11915100e-02f,+3.59548032e-02f,+1.06522732e-03f,+6.99488893e-02f,+9.98912230e-02f,
+7.75401667e-02f,-3.01434547e-02f,+6.88526407e-02f,-7.98591003e-02f,-7.91208446e-02f,
+7.12717399e-02f,-4.60168725e-04f,+9.72813293e-02f,-5.40494919e-02f,+8.35773423e-02f,
-7.25595355e-02f,+7.81491920e-02f,-4.09660637e-02f,-6.95422292e-02f,-7.38581046e-02f,
+1.62405183e-03f,-1.44210337e-02f,+7.70218149e-02f,-4.84371074e-02f,+8.02545575e-04f,
-7.12081641e-02f,+5.96126318e-02f,+9.27797928e-02f,+1.62084103e-02f,+4.57504578e-02f,
-9.53576807e-03f,-2.31289808e-02f,+9.01536376e-04f,+6.49540499e-02f,+4.45553139e-02f,
+5.88908456e-02f,+7.75784254e-03f,-7.28537291e-02f,+5.32627478e-02f,-9.35575143e-02f,
-8.19036290e-02f,+6.19781110e-03f,-2.66585834e-02f,+1.51363239e-02f,+7.42894262e-02f,
-8.81576687e-02f,+7.36534595e-02f,+7.17354342e-02f,-6.40380532e-02f,+1.20584620e-02f,
-7.41257742e-02f,+4.67862897e-02f,-8.97860974e-02f,+8.36178660e-02f,-2.56776046e-02f,
-5.30364960e-02f,+3.93371917e-02f,+1.86686534e-02f,-8.34992230e-02f,-5.31435274e-02f,
+4.20144051e-02f,+1.74716469e-02f,+8.85410085e-02f,-3.58897336e-02f,-3.17589268e-02f,
-6.49560243e-02f,-1.07661009e-01f,+2.32501398e-03f,-4.47729155e-02f,+3.24062891e-02f,
-1.03930384e-01f,+8.22675824e-02f,+5.27046099e-02f,+9.13877338e-02f,+9.81247053e-02f,
+2.97010243e-02f,-5.87001555e-02f,+2.86377892e-02f,+1.03736445e-01f,+9.81450602e-02f,
+8.80527571e-02f,-1.94364507e-02f,+1.05809323e-01f,-3.73461843e-02f,-6.32316396e-02f,
-4.70093414e-02f,-2.16992889e-02f,+9.67202801e-03f,+4.73736115e-02f,-5.05926125e-02f,
+5.83011210e-02f,-7.57103413e-02f,-8.50758031e-02f,+8.87242779e-02f,+7.55078122e-02f,
+1.04307115e-01f,+3.29797454e-02f,-7.90830180e-02f,+8.07608813e-02f,-5.58959879e-03f,
-9.89841893e-02f,+6.36458099e-02f,+1.43481269e-02f,-9.32911783e-03f,+8.19645524e-02f,
-7.34351054e-02f,+5.34512326e-02f,-2.67136451e-02f,-5.99361621e-02f,-8.00663754e-02f,
+2.37601176e-02f,-7.36243948e-02f,+7.71195740e-02f,-2.29608770e-02f,+1.69754552e-03f,
+6.17462993e-02f,+3.49153168e-02f,+8.43636617e-02f,-4.27088775e-02f,-7.21327662e-02f,
+6.14631288e-02f,+4.59256880e-02f,-9.48829725e-02f,+7.90136680e-02f,-8.74524117e-02f,
+8.92548729e-03f,+7.76706040e-02f,-5.39011555e-04f,-9.02167801e-03f,-8.15863386e-02f,
+7.65512977e-03f,-1.59484316e-02f,-6.89769983e-02f,+7.40867481e-02f,-5.13875820e-02f,
-8.78331140e-02f,+5.17838933e-02f,+8.20552651e-03f,+4.66123857e-02f,-1.33121964e-02f,
+2.69082971e-02f,-6.33663535e-02f,+9.26847458e-02f,-2.38844920e-02f,+6.42557442e-02f,
-6.18944950e-02f,-7.76382610e-02f,+1.74173061e-02f,+4.33239453e-02f,+6.17020763e-02f,
-4.89161210e-03f,+1.20485976e-01f,+9.82702225e-02f,-8.81212577e-02f,+5.29610105e-02f,
+5.35312183e-02f,-5.78624271e-02f,-3.70827690e-02f,+3.58626880e-02f,-5.45072593e-02f,
+9.01182070e-02f,-4.56767827e-02f,+8.59335735e-02f,+7.44390935e-02f,+9.64725837e-02f,
-4.60170470e-02f,+3.21707875e-03f,+5.52652664e-02f,-3.89739983e-02f,+6.67137504e-02f,
-9.15839821e-02f,+6.64184168e-02f,-4.10392880e-02f,+7.90798813e-02f,-6.55693114e-02f,
+7.83780739e-02f,-3.69125567e-02f,-6.83307499e-02f,+3.09566874e-02f,-1.04032144e-01f,
+6.13933466e-02f,+6.49407730e-02f,+8.81686062e-02f,-5.91177344e-02f,-9.10424814e-02f,
-2.54322905e-02f,+5.10213710e-02f,+7.49212578e-02f,-4.33518402e-02f,+3.87809961e-03f,
+8.81258249e-02f,+4.62939143e-02f,+9.71478447e-02f,-9.41345319e-02f,+8.10743123e-02f,
+1.08256757e-01f,-3.08662280e-02f,-5.60973724e-03f,+3.28338817e-02f,+1.05706558e-01f,
-3.15694697e-02f,+7.35042766e-02f,-9.21034366e-02f,-9.16803479e-02f,+4.96814698e-02f,
-5.64934574e-02f,+6.16020374e-02f,+3.70291770e-02f,-1.05300657e-02f,-5.66059723e-02f,
+9.04500484e-02f,+4.75851670e-02f,-6.71215877e-02f,-3.39132398e-02f,-2.09526792e-02f,
+4.65501025e-02f,+9.56463888e-02f,-4.11932692e-02f,+6.31666407e-02f,+1.08180940e-03f,
-3.43902856e-02f,-1.80145353e-03f,+5.42590246e-02f,-4.16985080e-02f,-2.41428614e-02f,
-2.49311700e-02f,-2.77804285e-02f,+1.84089467e-02f,-5.05095161e-02f,-1.03358820e-01f,
-9.78653505e-02f,+2.07310244e-02f,-2.10766420e-02f,+9.39527825e-02f,+1.03467546e-01f,
+8.97160396e-02f,-6.51354194e-02f,-4.27353941e-02f,-1.02483183e-02f,+1.29502490e-02f,
+7.36153349e-02f,+8.83992389e-02f,-1.63707957e-02f,+2.56557558e-02f,-1.07663348e-01f,
+7.02957511e-02f,+6.61820248e-02f,-1.10591054e-02f,-9.19573456e-02f,+9.95036121e-03f,
+6.44349456e-02f,+3.49670649e-04f,-5.31615280e-02f,+9.75197703e-02f,+1.28855566e-02f,
-3.52759995e-02f,+4.87307049e-02f,+2.52845660e-02f,+2.13144859e-03f,+3.33325788e-02f,
-5.01664579e-02f,-2.18326002e-02f,+8.05935189e-02f,+1.39659317e-02f,-1.06101930e-02f,
+6.23225048e-02f,+1.36795016e-02f,-6.66996539e-02f,-3.87954116e-02f,-7.18824705e-03f,
+3.84086967e-02f,+2.01591756e-02f,-1.16621545e-02f,+3.99003848e-02f,-8.05546939e-02f,
+3.47017646e-02f,-4.45414595e-02f,+5.16049601e-02f,-5.71336932e-02f,+8.27288926e-02f,
+7.07443729e-02f,-4.03719097e-02f,-7.62107149e-02f,-9.13777426e-02f,-2.30891164e-02f,
+1.89474281e-02f,-7.54014999e-02f,+1.08937249e-01f,+2.66010165e-02f,-3.81694101e-02f,
+1.81167927e-02f,+8.80069584e-02f,-5.74245006e-02f,-6.50613243e-03f,-4.56340276e-02f,
+4.24169116e-02f,-8.52450803e-02f,+1.25699630e-02f,-1.06689841e-01f,-1.56982783e-02f,
-9.16566849e-02f,+1.07830144e-01f,-6.03191070e-02f,-6.82030097e-02f,-5.88214770e-02f,
-9.64348484e-03f,+2.67263921e-03f,+5.56771941e-02f,+9.35484171e-02f,+4.70935516e-02f,
+8.10042471e-02f,+7.59444460e-02f,-7.13246986e-02f,+1.47464802e-03f,-8.54068026e-02f,
-7.56244808e-02f,-8.39289203e-02f,+3.68194431e-02f,-5.97135872e-02f,+1.08251132e-01f,
+6.85938001e-02f,+1.50952814e-02f,+8.09797272e-02f,+4.88586612e-02f,-2.47833878e-02f,
+9.88377780e-02f,-7.22060502e-02f,+6.37646765e-02f,-3.36639397e-02f,+8.88479799e-02f,
+4.89755496e-02f,-1.07394718e-01f,-5.10563627e-02f,-8.70116577e-02f,+1.05712108e-01f,
-1.25966547e-02f,-5.17468080e-02f,-4.05013710e-02f,+2.90298648e-02f,+6.50862157e-02f,
-8.56027901e-02f,-4.29699123e-02f,-6.36301786e-02f,+4.38086838e-02f,-9.50394720e-02f,
+5.99391665e-03f,+3.92733933e-03f,-7.73191974e-02f,+7.13008866e-02f,-3.22255008e-02f,
+9.47521068e-03f,+1.06836790e-02f,-7.80847371e-02f,+6.94328472e-02f,+6.46082312e-02f,
-8.77891853e-02f,-7.50026852e-03f,+1.73203982e-02f,+3.11530009e-02f,-1.00114711e-01f,
+4.76110242e-02f,+7.20470026e-02f,-3.20695862e-02f,-5.41210361e-02f,-4.66753878e-02f,
+1.02827720e-01f,-9.60604176e-02f,+1.00131258e-01f,+8.33073556e-02f,-7.13393390e-02f,
+7.20697269e-02f,+5.51724769e-02f,-7.95884728e-02f,-4.29300629e-02f,+9.23050866e-02f,
+3.10353395e-02f,+1.70085244e-02f,+8.62310305e-02f,+1.31194713e-02f,-9.00831446e-03f,
-5.17913923e-02f,-2.11040508e-02f,-1.26302680e-02f,-1.60449687e-02f,+6.52661398e-02f,
-9.37399194e-02f,-1.07828245e-01f,+3.07708932e-03f,-3.10218185e-02f,-8.36677253e-02f,
-2.94961482e-02f,-5.89866415e-02f,+3.68659087e-02f,-8.65887329e-02f,+1.19986590e-02f,
-1.00440204e-01f,+1.58168171e-02f,-2.49544047e-02f,+7.14581460e-02f,+3.52187315e-03f,
-6.07156865e-02f,-7.23307431e-02f,-5.05996794e-02f,+5.23046330e-02f,+1.08162761e-02f,
-7.48097003e-02f,-2.93294862e-02f,-4.19033989e-02f,+3.53354961e-03f,-5.71372025e-02f,
+9.14193466e-02f,-5.22068068e-02f,-8.79719853e-04f,+7.19692037e-02f,-6.95327148e-02f,
-6.57575876e-02f,-1.31218135e-02f,-4.63235267e-02f,-2.77531296e-02f,-1.36421993e-02f,
-1.00230947e-02f,+5.12384549e-02f,+4.68660221e-02f,+4.63602021e-02f,-9.15339217e-02f,
-6.06433563e-02f,-1.01965174e-01f,-9.85845923e-02f,+5.06500378e-02f,+3.66223827e-02f,
+9.66889188e-02f,-2.72533521e-02f,-9.54864249e-02f,+7.19579831e-02f,+3.00592259e-02f,
+2.04278179e-03f,+4.02950794e-02f,+3.33098620e-02f,-1.41694993e-02f,+5.95691167e-02f,
+9.38710477e-03f,+6.31823763e-02f,+6.31086156e-02f,-4.38145474e-02f,-4.93683070e-02f,
-1.06124736e-01f,-2.71673482e-02f,+3.72266807e-02f,+6.28467277e-02f,-5.66954650e-02f,
+4.02193554e-02f,+5.39896786e-02f,+3.78216282e-02f,+1.12632243e-02f,-9.96931642e-02f,
-7.14939227e-03f,-3.85279842e-02f,+5.11932969e-02f,-4.67515998e-02f,-9.27363709e-02f,
+1.02985583e-01f,+4.13076542e-02f,+7.83749595e-02f,-8.59731957e-02f,-6.94658831e-02f,
+5.84213855e-03f,-2.90833265e-02f,-7.15360269e-02f,-9.56585184e-02f,-4.44137938e-02f,
+1.56049943e-02f,-6.96377829e-02f,+3.36540490e-03f,+1.60851143e-02f,-7.05679357e-02f,
-4.74258028e-02f,-1.06548674e-01f,-6.60622306e-03f,+3.49695189e-03f,+5.95656829e-03f,
-6.09747767e-02f,+7.52834752e-02f,-1.18870111e-02f,+1.06981270e-01f,-1.88185275e-03f,
-8.17774311e-02f,+1.77676678e-02f,-6.43959343e-02f,-4.00868692e-02f,-4.49309945e-02f,
-5.01227938e-03f,+7.24056289e-02f,+6.60314485e-02f,-8.30019265e-02f,-4.83470922e-03f,
-1.28265256e-02f,+2.82561444e-02f,-5.49633428e-02f,+1.71219930e-02f,+9.88561362e-02f,
-2.83206981e-02f,+6.16349541e-02f,-1.08134868e-02f,+4.67635691e-02f,-7.42657855e-02f,
+2.88681909e-02f,+8.62634405e-02f,+5.40451445e-02f,-4.08265786e-03f,+2.13393606e-02f,
+6.31201565e-02f,-6.80736899e-02f,-7.64638484e-02f,+5.22872917e-02f,-8.22385550e-02f,
+7.93648213e-02f,+4.03503105e-02f,+9.68524963e-02f,+6.57552853e-02f,-3.70499445e-03f,
+8.98328945e-02f,+2.61328295e-02f,-6.24545626e-02f,+7.63050839e-02f,+3.48009765e-02f,
+4.14218530e-02f,-4.99429628e-02f,+8.15385804e-02f,-9.37506184e-02f,-1.17692389e-02f,
-4.04160880e-02f,+1.74950734e-02f,+4.30449322e-02f,+7.54663721e-02f,+9.91310403e-02f,
+6.50907531e-02f,+7.35589862e-03f,-2.48361379e-03f,+3.34638432e-02f,+8.62458870e-02f,
+7.76124373e-02f,-9.05504450e-02f,-5.75046726e-02f,-7.23308474e-02f,+6.12291470e-02f,
+7.90700242e-02f,-9.22803804e-02f,+6.01368770e-02f,-1.67691410e-02f,-8.62494111e-04f,
+8.15550908e-02f,-3.04776728e-02f,-1.18390992e-02f,+6.67498335e-02f,-1.33897066e-02f,
-9.07644257e-02f,+2.76689306e-02f,+6.36887029e-02f,+9.85218510e-02f,-7.58488402e-02f,
+3.55948508e-03f,-1.77450478e-04f,-9.00541171e-02f,-1.87305138e-02f,+2.92889159e-02f,
+3.36717740e-02f,+2.34770998e-02f,-5.30639552e-02f,-2.79701948e-02f,-3.43558788e-02f,
-8.33828226e-02f,+1.98698714e-02f,+3.29426564e-02f,-3.81639972e-02f,-6.22982308e-02f,
+4.92671244e-02f,-7.06783980e-02f,+6.58827052e-02f,-3.26546580e-02f,-6.36846051e-02f,
-8.01548660e-02f,-1.64136547e-03f,-6.25718385e-03f,-3.45188640e-02f,+7.08790570e-02f,
+1.26064755e-02f,+5.61375543e-02f,-5.55980206e-03f,-2.27417946e-02f,-8.86398032e-02f,
+7.03441501e-02f,-6.40826821e-02f,+1.98269114e-02f,+7.52648711e-02f,-1.02133103e-01f,
+2.82971319e-02f,-4.50255647e-02f,+2.36281678e-02f,-2.53379736e-02f,+8.61617923e-02f,
-4.57000695e-02f,+8.10497701e-02f,+2.26888200e-03f,-1.55745400e-02f,+1.04922488e-01f,
+1.31502831e-02f,-1.09783579e-02f,+4.08659466e-02f,+4.19197194e-02f,+5.01791500e-02f,
-6.77981377e-02f,+3.39734480e-02f,+5.83978742e-03f,-2.63116118e-02f,-2.35912353e-02f,
+1.61877368e-02f,-8.33782703e-02f,+1.27768815e-02f,+2.65885461e-02f,-7.77059793e-02f,
-6.03309721e-02f,-3.35032679e-02f,-4.26636897e-02f,-8.74290541e-02f,+6.80403262e-02f,
-7.00707808e-02f,+2.90196966e-02f,-2.00411137e-02f,+6.29896671e-02f,-5.96860163e-02f,
+1.19983098e-02f,-1.22343386e-02f,+5.19250296e-02f,+9.19945985e-02f,+9.48656052e-02f,
+5.48646860e-02f,-5.75903505e-02f,+6.68483647e-03f,+1.28959222e-02f,-4.39048707e-02f,
+1.16785280e-02f,+6.00138307e-03f,+3.33691575e-02f,-3.94414105e-02f,-2.24734694e-02f,
-2.77369283e-02f,-3.16452906e-02f,+9.78504121e-03f,-9.11935568e-02f,-5.15712947e-02f,
-2.63713729e-02f,-6.89338297e-02f,-9.14530456e-02f,+8.88687745e-03f,-1.77094899e-02f,
+6.24631532e-02f,+8.47550556e-02f,-1.85572002e-02f,+7.98698366e-02f,-8.14670399e-02f,
-8.18748921e-02f,-6.33914545e-02f,-2.81697372e-03f,+2.79817004e-02f,+6.74734488e-02f,
-5.45694791e-02f,-5.03052622e-02f,-5.26475310e-02f,+1.11558340e-01f,+6.40382618e-02f,
+2.78198090e-03f,+9.33138877e-02f,-1.44436006e-02f,-1.07202880e-01f,+2.81853527e-02f,
-3.26858275e-02f,-3.72798592e-02f,-4.72639799e-02f,+7.31065050e-02f,+6.54665530e-02f,
-4.40160139e-03f,+3.14416140e-02f,+1.20356288e-02f,+1.37386853e-02f,+2.24293116e-02f,
-1.01511227e-03f,-1.38042448e-02f,+2.07298640e-02f,+4.67493236e-02f,-8.63807201e-02f,
-8.26383382e-02f,+5.08595333e-02f,-1.02534316e-01f,+9.60707590e-02f,-8.16251338e-02f,
+6.35923520e-02f,-7.36549273e-02f,+1.59593821e-02f,-2.46580690e-02f,-7.58837461e-02f,
+9.73389223e-02f,-9.17752460e-02f,+8.81285965e-03f,-2.13369206e-02f,+3.30875888e-02f,
+9.67587009e-02f,+9.29522738e-02f,-6.08360060e-02f,+4.45494726e-02f,+9.36773345e-02f,
+8.19023624e-02f,+7.85559490e-02f,-4.58943099e-02f,+3.87691781e-02f,-8.76694620e-02f,
-4.37706783e-02f,-5.13438396e-02f,-4.15532812e-02f,+6.42624870e-02f,+9.52115878e-02f,
-1.01756275e-01f,-5.93652688e-02f,-6.66932017e-02f,-7.87494406e-02f,-7.11403936e-02f,
-7.41348043e-02f,+1.70743000e-02f,+5.50503395e-02f,-4.77482863e-02f,+2.68319454e-02f,
+9.30402130e-02f,+9.10769030e-02f,+6.70444407e-03f,-8.28829482e-02f,+5.23054739e-03f,
-7.54600912e-02f,-4.06173728e-02f,-1.17500257e-02f,+6.69119209e-02f,-7.48258829e-02f,
-8.42487365e-02f,+5.66094704e-02f,+8.59229267e-03f,-8.71631801e-02f,+4.21587899e-02f,
-8.66048783e-02f,-6.57247156e-02f,-4.35735323e-02f,-6.28258884e-02f,-7.50356466e-02f,
-5.42786159e-02f,+1.00093018e-02f,+5.86783364e-02f,+2.47732848e-02f,-6.19204598e-04f,
-2.38332823e-02f,+8.16123858e-02f,-7.17744231e-04f,-8.34420547e-02f,+6.72885701e-02f,
+2.55895630e-02f,+1.99344158e-02f,+6.49239495e-02f,+5.60454056e-02f,+4.83526662e-02f,
-9.43263173e-02f,-1.04939856e-01f,+3.59859690e-02f,-4.75094207e-02f,+2.02219412e-02f,
-7.11138248e-02f,+4.20604721e-02f,-7.51968548e-02f,+1.76411271e-02f,+3.35572436e-02f,
-1.82469934e-02f,+9.48498771e-02f,-1.04802839e-01f,-4.07349840e-02f,-4.07657325e-02f,
+3.13434377e-02f,-9.60163176e-02f,-2.87953764e-02f,-4.95182984e-02f,-6.73231483e-02f,
+4.51679006e-02f,-3.68922055e-02f,+9.06198248e-02f,-9.41918865e-02f,+1.78573318e-02f,
-2.22283620e-02f,-7.98343420e-02f,-9.87841189e-02f,+6.20718598e-02f,-9.34173912e-02f,
-3.74834575e-02f,-6.58371449e-02f,-5.06143980e-02f,-4.56946203e-04f,-7.28489608e-02f,
-8.55551660e-02f,+1.76791698e-02f,-5.33806942e-02f,+5.42327352e-02f,-4.09331396e-02f,
+1.05850205e-01f,-4.43876907e-02f,-8.60804245e-02f,-1.09247923e-01f,+6.74595237e-02f,
+4.44976315e-02f,+5.95735647e-02f,-3.54491770e-02f,-6.13800362e-02f,-2.43301746e-02f,
-5.53561654e-03f,-2.17746627e-02f,-4.59969714e-02f,+8.16996247e-02f,-1.87402498e-02f,
-6.01697862e-02f,-1.55121516e-02f,+6.60210196e-03f,-2.48553324e-02f,-6.78347889e-03f,
+1.83018092e-02f,-7.53413811e-02f,-4.76696854e-03f,-2.24649161e-02f,-6.49059564e-02f,
+9.29276571e-02f,+1.07100727e-02f,-4.75021638e-02f,-1.01938762e-01f,-3.95330191e-02f,
-7.75506496e-02f,+5.13040796e-02f,+2.74041388e-03f,+8.24219733e-03f,-1.34501155e-04f,
+2.17098985e-02f,+3.09213400e-02f,-8.55394006e-02f,-9.42570716e-02f,-7.25617334e-02f,
+8.57393071e-02f,-9.65236425e-02f,-6.54842407e-02f,+1.04394779e-01f,+7.88583532e-02f,
-1.05279528e-01f,-9.09567624e-03f,+1.11534074e-02f,-3.58102694e-02f,-5.98972477e-02f,
+9.79335830e-02f,+5.66737130e-02f,+5.39921895e-02f,+5.67805991e-02f,-4.46545556e-02f,
-7.79633820e-02f,+2.97541991e-02f,+4.45150062e-02f,+3.04608420e-02f,+9.62944999e-02f,
+6.95932135e-02f,-7.01641962e-02f,+1.02933027e-01f,-8.95534381e-02f,-2.17226967e-02f,
-2.15185061e-02f,-3.54714915e-02f,-4.75891717e-02f,+9.02496949e-02f,+7.55583495e-03f,
-1.28592104e-02f,-7.88954794e-02f,-1.01942770e-01f,-1.98297277e-02f,+5.63769415e-02f,
-5.95350601e-02f,+1.01035707e-01f,+6.57864138e-02f,-1.05337232e-01f,-9.74112898e-02f,
+8.40506852e-02f,-1.06546685e-01f,-2.06250250e-02f,+9.97764990e-02f,-8.48473981e-02f,
-5.97537197e-02f,-1.55564761e-02f,+9.90976021e-02f,+5.40046506e-02f,+1.31933261e-02f,
+1.87065005e-02f,+4.04409971e-03f,+9.84463394e-02f,-5.53829335e-02f,+8.21712390e-02f,
+5.73683605e-02f,+9.37945396e-02f,+4.27447036e-02f,-2.05789357e-02f,+9.76748690e-02f,
-1.68345440e-02f,-4.51418199e-02f,-6.78187236e-02f,-5.75623550e-02f,+2.34841984e-02f,
+3.60268094e-02f,+7.25171482e-03f,-3.95259447e-02f,+3.93069088e-02f,-7.78563172e-02f,
+7.03850389e-03f,-7.89415836e-03f,+4.40709293e-02f,-6.73398077e-02f,+1.54906036e-02f,
-7.40719363e-02f,-8.07727277e-02f,-1.02566786e-01f,-4.63170409e-02f,+3.32878414e-03f,
+6.73983851e-03f,-9.28367004e-02f,-3.95316444e-02f,+1.04257546e-01f,+7.32926205e-02f,
-8.15486163e-03f,+1.37467301e-02f,-7.30866939e-02f,+1.02395890e-02f,-1.44821554e-02f,
+5.14580533e-02f,+9.74777266e-02f,+7.22234026e-02f,-6.82219118e-03f,-8.88964459e-02f,
-2.25514788e-02f,-4.54436913e-02f,+1.03122450e-01f,-7.76093602e-02f,+4.62214425e-02f,
+6.38127401e-02f,-9.00770202e-02f,+8.38999543e-03f,-6.07427210e-02f,+6.93274885e-02f,
-7.79675320e-02f,-6.18362287e-03f,+4.11156155e-02f,+7.79912248e-02f,+1.53355077e-02f,
+1.15007214e-01f,+8.75869244e-02f,-1.12649530e-01f,-6.60502091e-02f,-6.01669587e-02f,
-5.59132732e-02f,-4.78514060e-02f,+9.92107466e-02f,-7.44023174e-02f,+7.68147409e-03f,
+8.52886736e-02f,-9.81956646e-02f,-8.51060823e-02f,+6.49018809e-02f,+1.19435862e-02f,
-2.25691497e-03f,+4.51132879e-02f,-4.74076606e-02f,+3.31400670e-02f,-2.42720433e-02f,
+6.28880858e-02f,+3.49908173e-02f,+9.90752801e-02f,+1.60325523e-02f,+4.40652892e-02f,
-3.47899273e-02f,+9.43550318e-02f,+2.08941012e-04f,+7.79784843e-02f,-3.67874801e-02f,
+3.97548564e-02f,-1.04472704e-01f,+9.89094377e-02f,+6.66742921e-02f,+7.97318667e-02f,
-7.21642897e-02f,+3.98285277e-02f,-2.74372827e-02f,-8.60246597e-04f,-2.96967551e-02f,
-1.41382301e-02f,-8.89840275e-02f,+8.86314809e-02f,+2.89071575e-02f,+7.59032890e-02f,
-9.53291133e-02f,+5.18159289e-03f,-2.72781253e-02f,+7.45725110e-02f,+9.94296074e-02f,
-9.30962116e-02f,-3.56981618e-04f,+1.01199500e-01f,-6.38161972e-02f,-9.86580178e-02f,
+1.04372002e-01f,-5.64059950e-02f,-4.20498140e-02f,+7.43938843e-03f,-3.65203549e-03f,
-8.43184127e-04f,+1.61938574e-02f,-7.21018687e-02f,-1.02409802e-01f,-8.97670090e-02f,
-2.41705831e-02f,+8.30524787e-02f,+8.98947120e-02f,-2.46152431e-02f,-5.36738001e-02f,
+6.23437483e-03f,-1.53949019e-02f,-7.27193952e-02f,-4.61983085e-02f,+1.62259471e-02f,
-8.17101449e-03f,+8.49107727e-02f,-8.50758106e-02f,-5.88219389e-02f,+1.93566121e-02f,
-1.00027137e-01f,-9.06166583e-02f,+5.52223623e-03f,+2.22319588e-02f,-7.78186023e-02f,
+4.61694337e-02f,+4.75896755e-03f,+8.85967985e-02f,-7.97415003e-02f,+9.38902572e-02f,
+5.98759055e-02f,+7.59811029e-02f,-6.63092807e-02f,+9.66666564e-02f,+4.08366648e-03f,
-4.81099039e-02f,+3.19715627e-02f,+8.66687968e-02f,-3.55474502e-02f,-4.24659178e-02f,
-9.62120965e-02f,+6.44612610e-02f,+2.86320336e-02f,-4.31544147e-02f,+1.01420030e-01f,
+7.33878389e-02f,-6.30461723e-02f,-1.69536471e-03f,-1.27084767e-02f,+4.15695570e-02f,
+6.94107860e-02f,-7.23910108e-02f,-6.63371831e-02f,-6.65770769e-02f,-6.54492527e-02f,
+6.72245622e-02f,+5.80516644e-02f,-1.93974357e-02f,+6.40494376e-02f,+3.42749283e-02f,
+3.97140943e-02f,-9.31473598e-02f,+5.24203442e-02f,+4.49866727e-02f,-9.16866213e-02f,
+5.73448185e-03f,-1.32369688e-02f,-1.09203987e-01f,+4.77517210e-02f,+3.91844613e-03f,
-5.67311160e-02f,+6.12754226e-02f,-3.27576213e-02f,+9.58422944e-02f,-1.50003303e-02f,
-8.69653672e-02f,+3.57647128e-02f,-8.82033855e-02f,-3.36589552e-02f,+1.62202343e-02f,
+7.10883215e-02f,-4.36718576e-02f,-9.01451856e-02f,+8.47088099e-02f,+2.96918657e-02f,
-1.60786286e-02f,-9.81264785e-02f,-3.10493633e-02f,+1.00041442e-01f,-7.35662645e-04f,
+1.73650403e-02f,+4.89776060e-02f,+2.45995130e-02f,+3.78903784e-02f,-5.91562614e-02f,
+8.46013352e-02f,+1.61230564e-02f,-7.28794048e-03f,+9.76104364e-02f,-5.43039031e-02f,
-9.89489406e-02f,+4.29783612e-02f,-6.61799982e-02f,-1.05927356e-01f,-7.43915066e-02f,
+1.92183405e-02f,+3.73364389e-02f,+7.35041946e-02f,-5.17785214e-02f,-5.21792136e-02f,
-9.24887285e-02f,+3.85533944e-02f,-1.06069624e-01f,+7.31432363e-02f,-8.06158409e-02f,
+7.31834769e-02f,-8.36831927e-02f,+7.25158900e-02f,-6.44655898e-02f,+2.42817122e-02f,
-3.15595441e-03f,+7.89086446e-02f,-4.53491658e-02f,+4.43861708e-02f,-3.67183834e-02f,
-3.61687765e-02f,-9.08109546e-02f,-8.05565864e-02f,+3.14541869e-02f,-3.21603306e-02f,
-5.45123555e-02f,+1.04816142e-03f,-1.06531933e-01f,+1.04749158e-01f,+1.42566087e-02f,
+9.28986222e-02f,-7.76012689e-02f,-8.28637779e-02f,+8.64547417e-02f,-6.16138801e-02f,
+4.24651988e-02f,-3.59376669e-02f,-9.82869342e-02f,-9.35627297e-02f,+7.57109597e-02f,
+6.36759028e-02f,+3.27348821e-02f,+3.57997417e-02f,+2.62432713e-02f,+2.29137912e-02f,
-8.77164751e-02f,+3.09974682e-02f,-3.24679725e-02f,-3.07615846e-02f,+9.98675823e-02f,
-5.27573265e-02f,-2.34592557e-02f,-1.03297167e-01f,-2.19836533e-02f,+8.87208208e-02f,
+9.16617364e-02f,+4.51163910e-02f,-4.77056392e-02f,+7.12916479e-02f,-3.26296948e-02f,
+7.13475049e-02f,-4.52451147e-02f,+1.08986730e-02f,+8.27112570e-02f,-2.29511522e-02f,
-7.21371099e-02f,+6.00456931e-02f,+7.87117481e-02f,+1.04031421e-01f,+8.70128497e-02f,
-8.17847028e-02f,+6.42729998e-02f,-9.00767669e-02f,+1.15264300e-02f,+3.04644238e-02f,
+2.20576525e-02f,+1.88019732e-03f,+1.53918117e-02f,+5.19205891e-02f,+6.25032783e-02f,
+1.01711296e-01f,-4.84148003e-02f,+6.93960413e-02f,-5.55059239e-02f,-4.50522527e-02f,
+1.40933506e-02f,-3.48979309e-02f,-6.64212406e-02f,-8.33893791e-02f,-1.07471623e-01f,
+1.16504319e-02f,-5.74571751e-02f,+4.64818487e-03f,-7.40085617e-02f,-1.13083057e-01f,
+4.35478166e-02f,-7.13181272e-02f,-3.68282013e-02f,-2.70605050e-02f,-9.86461341e-03f,
-5.30847460e-02f,+5.67136966e-02f,-7.81337991e-02f,+4.37209122e-02f,-6.72565103e-02f,
+3.59357744e-02f,+3.38855237e-02f,-9.18931738e-02f,+5.06871603e-02f,+5.61283492e-02f,
-3.82514335e-02f,+6.96912706e-02f,-8.39923099e-02f,-9.77451280e-02f,+9.47923958e-02f,
+3.04922387e-02f,+6.09503165e-02f,-2.98918635e-02f,+9.27375481e-02f,-7.44725019e-02f,
+1.00389622e-01f,+5.37105724e-02f,-2.35725269e-02f,+1.04079299e-01f,+3.60478386e-02f,
-8.78895745e-02f,-2.68935487e-02f,-4.26337868e-02f,+3.12423930e-02f,+8.24567676e-03f,
+1.37915835e-02f,-6.21212311e-02f,-9.38101858e-02f,+2.19270661e-02f,+6.22786209e-02f,
-8.65439102e-02f,+9.53431204e-02f,-6.23321608e-02f,-4.30360623e-02f,+5.69909438e-02f,
+5.24295792e-02f,-1.01997279e-01f,-8.73082727e-02f,+5.87608293e-02f,-7.31545985e-02f,
-2.01377571e-02f,+2.18923166e-02f,-7.75726661e-02f,+5.63074388e-02f,-7.69482851e-02f,
+1.03650831e-01f,-4.86592092e-02f,+3.90723199e-02f,-7.32727768e-03f,-3.88399139e-02f,
+5.39689176e-02f,-6.77699745e-02f,+8.85836128e-03f,+3.70571092e-02f,+4.86929566e-02f,
-2.74763326e-03f,+5.27029559e-02f,-4.18292135e-02f,-5.25937229e-02f,-9.18284282e-02f,
-9.22804102e-02f,+8.14696327e-02f,+5.19951433e-02f,+2.68817879e-03f,-6.39554560e-02f,
+2.82144602e-02f,+3.91114578e-02f,-1.56834126e-02f,+6.01234064e-02f,-7.42013799e-03f,
+8.58550742e-02f,-8.44986513e-02f,-9.49654132e-02f,-8.10529068e-02f,-5.65152615e-02f,
-5.71377156e-03f,+9.92455781e-02f,+1.14631932e-02f,-7.61957541e-02f,+1.92607492e-02f,
-9.89246368e-02f,+2.73829196e-02f,-5.98098077e-02f,-4.62370925e-02f,+5.80693893e-02f,
-8.03682432e-02f,+2.84667476e-03f,+3.67993163e-03f,+2.81965341e-02f,-4.70800288e-02f,
+8.41191132e-03f,+1.84488818e-02f,+3.25140590e-03f,+8.24157074e-02f,-5.25989980e-02f,
-3.65373748e-03f,-7.45795295e-02f,+6.22111559e-02f,+5.06966300e-02f,+5.49346991e-02f,
+9.87463444e-02f,-2.87412480e-02f,-7.71180838e-02f,+7.44220242e-02f,-1.00880377e-02f,
+2.49495283e-02f,+7.32103288e-02f,-7.59924874e-02f,+9.73405764e-02f,+5.74378408e-02f,
-1.53144114e-02f,-1.01052960e-02f,+6.59412891e-02f,+8.53671506e-02f,+9.52649489e-02f,
+7.95310512e-02f,-2.69488059e-02f,-2.65540257e-02f,-5.55916727e-02f,-8.81357789e-02f,
+5.07074557e-02f,-3.43106315e-02f,-8.27474818e-02f,-9.16697308e-02f,+4.66466369e-03f,
+8.03478882e-02f,-7.84338638e-02f,+5.91917410e-02f,+2.45911498e-02f,+3.89803052e-02f,
-7.68325627e-02f,+1.19893550e-04f,-3.58398855e-02f,-7.57473782e-02f,+1.24210073e-02f,
-6.08063340e-02f,-6.29150122e-02f,+7.38309622e-02f,+2.68157497e-02f,+4.72409800e-02f,
-9.44173783e-02f,-9.08404887e-02f,-3.60313500e-03f,-3.11718468e-04f,-2.61353701e-02f,
-3.74322385e-02f,-1.74876489e-02f,+1.21122664e-02f,+4.98511679e-02f,-7.30011016e-02f,
+5.15140519e-02f,-5.71138039e-02f,-9.57508162e-02f,+4.74373065e-02f,-7.49478117e-02f,
-9.11674500e-02f,+1.16761448e-02f,+7.62429014e-02f,+6.62791580e-02f,-5.66510782e-02f,
+2.22131852e-02f,-2.74991132e-02f,+4.01493832e-02f,-8.38597268e-02f,-3.66818495e-02f,
+3.79103348e-02f,+1.01298289e-02f,-8.76436010e-02f,+8.34470615e-02f,-9.80620161e-02f,
-6.85290918e-02f,+2.96975225e-02f,+3.58489295e-03f,+1.23483874e-02f,-2.35596001e-02f,
+8.62701163e-02f,+3.65098678e-02f,+8.69543850e-02f,+4.27365825e-02f,-8.07585344e-02f,
+4.70823534e-02f,+9.51470807e-02f,-8.94873291e-02f,-5.57832085e-02f,-1.00049026e-01f,
-6.82419911e-03f,-9.62393284e-02f,-6.41662180e-02f,-6.82880590e-03f,-3.30191031e-02f,
-9.23907310e-02f,+3.28516327e-02f,-3.04790195e-02f,+4.73411568e-02f,+8.71730149e-02f,
+8.52412879e-02f,+3.50414179e-02f,+8.75285417e-02f,-3.10601033e-02f,+2.00311635e-02f,
+8.32934603e-02f,+1.07085807e-02f,+2.47597471e-02f,+1.00338168e-01f,-7.61462301e-02f,
-1.60704553e-02f,-9.83395055e-02f,+9.69381034e-02f,-8.10115263e-02f,-6.25237375e-02f,
-4.73358519e-02f,+8.95810276e-02f,-4.52826731e-02f,-2.48228982e-02f,+4.27490808e-02f,
+2.88217440e-02f,-5.97693473e-02f,-1.04969628e-01f,-7.57981166e-02f,-8.18280205e-02f,
-8.44645430e-04f,-2.53782645e-02f,-5.11675142e-02f,-4.23124880e-02f,+5.37918732e-02f,
-8.02285299e-02f,-4.05529961e-02f,+8.37726668e-02f,+3.61366831e-02f,+6.87802359e-02f,
+5.08213043e-03f,-2.29228083e-02f,-6.22538403e-02f,-8.83576721e-02f,-9.14232731e-02f,
-5.56629896e-02f,-5.56818992e-02f,+5.00728264e-02f,-2.08299980e-02f,+2.22837925e-02f,
+4.42079902e-02f,+8.40890557e-02f,+1.08122744e-01f,+5.06452285e-02f,-5.90647161e-02f,
+3.41078974e-02f,-7.67021999e-02f,-1.02252714e-01f,+7.64586106e-02f,-4.40941751e-02f,
-1.79690421e-02f,-6.79111630e-02f,-2.87813637e-02f,+9.50586125e-02f,+7.11901486e-02f,
-3.55815701e-02f,-9.44702141e-03f,-1.06218420e-01f,+4.17582169e-02f,+8.67522284e-02f,
-3.85878491e-03f,-2.61961296e-02f,-1.05071232e-01f,-9.80788283e-03f,-2.53757294e-02f,
-6.82804734e-02f,-4.01374139e-02f,+6.18707901e-03f,+4.46901657e-02f,+1.62681751e-03f,
-4.41170260e-02f,-9.30574462e-02f,+3.39893885e-02f,+9.32234377e-02f,-4.43530306e-02f,
-6.83190003e-02f,+5.84968701e-02f,+3.75546776e-02f,-5.47677055e-02f,-8.03696166e-04f,
-1.67271253e-02f,+1.07349614e-02f,-7.56898075e-02f,-6.94520622e-02f,+9.28578302e-02f,
+4.84484360e-02f,+2.69657131e-02f,+5.41463383e-02f,-3.69092152e-02f,-3.14268693e-02f,
-7.86428526e-02f,+6.28159791e-02f,+7.23375827e-02f,+1.43532399e-02f,+3.09403357e-03f,
-6.19743671e-03f,+1.31000625e-02f,-1.11107677e-02f,-4.38682223e-03f,+2.82429922e-02f,
-4.45215870e-03f,-6.67513683e-02f,-6.98823705e-02f,-8.66034999e-03f,+5.24015315e-02f,
+1.30159548e-02f,-3.39946598e-02f,+3.33385579e-02f,-5.70602976e-02f,-7.73067772e-02f,
-5.95086161e-03f,+5.80713786e-02f,+6.50423244e-02f,-1.94978509e-02f,+1.22750166e-03f,
-8.30796212e-02f,+6.76957369e-02f,+3.05242911e-02f,+2.52132528e-02f,-4.28400822e-02f,
+5.92540540e-02f,+9.32518318e-02f,+8.71587917e-02f,+3.30452994e-02f,-1.91665366e-02f,
-3.02114412e-02f,-1.16717918e-02f,+4.10345942e-02f,+9.84554663e-02f,-6.28338605e-02f,
-1.52991042e-02f,+4.87240404e-03f,+7.58667514e-02f,+6.17453456e-03f,+3.29593047e-02f,
-1.23237520e-02f,-4.59687486e-02f,-7.28916377e-03f,+9.76159051e-02f,-6.04773760e-02f,
-9.70100462e-02f,-9.66407657e-02f,+2.70443782e-02f,+6.71030805e-02f,+4.46956232e-02f,
+2.58767828e-02f,-8.92179459e-02f,+7.75844231e-02f,-4.04412523e-02f,+2.02509090e-02f,
-3.01682130e-02f,-5.50469011e-02f,-5.37027083e-02f,-4.30828854e-02f,+2.53931656e-02f,
-2.91717127e-02f,+8.88163969e-02f,+8.24897513e-02f,-1.97496042e-02f,-5.25102541e-02f,
-6.56324923e-02f,-8.71984810e-02f,-4.03237753e-02f,+3.50602865e-02f,+4.94721383e-02f,
+3.52790430e-02f,-8.19645673e-02f,+7.10758939e-02f,+2.71714535e-02f,+7.98768774e-02f,
-1.04535803e-01f,-1.15433656e-01f,-6.91932887e-02f,+3.84371802e-02f,+5.01104333e-02f,
-2.13916823e-02f,-2.95433179e-02f,-1.77023932e-02f,-4.50894237e-02f,-5.31877577e-03f,
+3.58221307e-02f,+3.54648754e-02f,-3.55641358e-02f,-7.51248896e-02f,+2.27983668e-02f,
+6.41550496e-02f,-9.49975848e-03f,-5.66448607e-02f,-8.25965777e-02f,-7.34052882e-02f,
-2.17516199e-02f,-9.79815722e-02f,+5.19950576e-02f,-4.97307293e-02f,+2.94884369e-02f,
-1.02603331e-01f,-1.63081549e-02f,+8.39778334e-02f,+5.16188107e-02f,-8.88966396e-02f,
+8.12627971e-02f,+4.99681570e-02f,-6.01519346e-02f,+8.48129541e-02f,-3.86840813e-02f,
-5.16271815e-02f,-4.15602103e-02f,-1.02310115e-02f,-7.80964410e-03f,+2.69044042e-02f,
-7.43637383e-02f,-6.52261153e-02f,+1.01268301e-02f,+8.99919868e-03f,-9.23206061e-02f,
-4.87979539e-02f,-5.19116037e-02f,-9.22482610e-02f,+7.30026141e-02f,+8.72997269e-02f,
-1.50910169e-02f,+8.10299739e-02f,-6.82523102e-02f,+1.00989103e-01f,-8.45586210e-02f,
-7.55910426e-02f,+4.08967249e-02f,-4.02753316e-02f,-9.88968089e-02f,-1.79482736e-02f,
-6.84926137e-02f,-7.37155899e-02f,+4.66887280e-03f,+8.89338925e-02f,-8.45584497e-02f,
+3.32726948e-02f,+9.78784040e-02f,+2.26992480e-02f,+9.48670954e-02f,-7.88909867e-02f,
+2.35420261e-02f,-2.90204175e-02f,-4.36389595e-02f,-4.76988181e-02f,+3.55584174e-02f,
-8.03829432e-02f,+1.92115251e-02f,-2.78534200e-02f,+8.77060369e-02f,+7.54441023e-02f,
-3.88892218e-02f,+4.43641618e-02f,+4.57088277e-02f,+6.42964467e-02f,+3.79924215e-02f,
+3.96242477e-02f,+4.33043689e-02f,+4.85473052e-02f,+9.12915096e-02f,-2.99869999e-02f,
-2.75827777e-02f,+4.20702174e-02f,+2.69984864e-02f,+1.02693968e-01f,+3.40276468e-03f,
-9.56008136e-02f,-1.02722965e-01f,+1.85894109e-02f,+6.56184480e-02f,+6.07055388e-02f,
+7.27370158e-02f,+5.54194339e-02f,-6.81469813e-02f,-3.59894224e-02f,+4.09023017e-02f,
+7.90915862e-02f,-9.39606130e-02f,-1.06606632e-02f,+8.72036442e-02f,-4.60572876e-02f,
-7.28645250e-02f,-7.71448687e-02f,-3.17576751e-02f,+4.81794365e-02f,-9.91087183e-02f,
-2.70924829e-02f,-4.46971580e-02f,-2.18824279e-02f,+9.62849110e-02f,+5.78935444e-02f,
-1.89252198e-03f,+3.94966975e-02f,+2.75815651e-02f,+2.45893821e-02f,+9.22224894e-02f,
-5.51519878e-02f,+4.66099456e-02f,-4.82573844e-02f,-6.29255623e-02f,+5.34945354e-02f,
+2.55841836e-02f,+7.17750266e-02f,-5.99820279e-02f,+1.03907950e-01f,-6.02425598e-02f,
+5.33483848e-02f,-9.24208015e-02f,-4.64096107e-02f,-9.44747776e-03f,-1.98974088e-02f,
-2.15692073e-02f,-3.40304971e-02f,-8.57414082e-02f,-6.31768256e-02f,-5.01645356e-03f,
-4.50754613e-02f,+1.49607062e-02f,+6.64303079e-02f,-5.25201187e-02f,-4.13765535e-02f,
+6.53815344e-02f,+4.12879884e-03f,+3.92665677e-02f,-1.03309758e-01f,-4.03852835e-02f,
+2.56844871e-02f,+6.39625043e-02f,+8.82437304e-02f,+2.37793121e-02f,-9.82806459e-02f,
+6.35857582e-02f,+2.48379242e-02f,-1.01465829e-01f,-8.87324512e-02f,+3.52872461e-02f,
-7.72801563e-02f,-4.42458279e-02f,+3.29429246e-02f,-7.19664022e-02f,+4.78095189e-02f,
-1.87117476e-02f,-4.95179743e-02f,-9.65853557e-02f,+5.24756350e-02f,+6.30940720e-02f,
+4.91822362e-02f,+7.33103082e-02f,+5.43473288e-02f,+9.86418948e-02f,-2.34171771e-03f,
-9.69078857e-03f,+9.10649970e-02f,+9.61082950e-02f,+1.21730324e-02f,-1.33413076e-02f,
+3.70828286e-02f,+9.27117839e-02f,-4.90643680e-02f,+1.11711323e-02f,+8.57875273e-02f,
+6.10858276e-02f,-9.85516906e-02f,-7.19441399e-02f,+3.13971266e-02f,+3.40860561e-02f,
-1.02740362e-01f,-5.14354557e-02f,+6.21076599e-02f,-6.14839420e-02f,+6.81203976e-02f,
+5.63613698e-02f,+1.00901820e-01f,-8.06939304e-02f,+4.41928431e-02f,+3.58200893e-02f,
-7.94325769e-03f,+2.99886838e-02f,+7.71592334e-02f,+5.96648082e-02f,+7.04731271e-02f,
+6.90103993e-02f,-3.43355760e-02f,-2.83303335e-02f,+4.47883829e-02f,+8.02127346e-02f,
+1.11210346e-03f,-3.36137712e-02f,+8.89321864e-02f,-1.79597922e-02f,+7.78062120e-02f,
-1.00645006e-01f,+9.02920812e-02f,+8.05251151e-02f,+7.32379705e-02f,+7.80311450e-02f,
-2.90705655e-02f,+3.10077816e-02f,-4.17886041e-02f,-1.21397497e-02f,+8.76977295e-03f,
-8.74671564e-02f,-3.83906253e-02f,+1.78892370e-02f,-3.11235487e-02f,+5.77489398e-02f,
-5.67464195e-02f,-2.39762734e-03f,+9.48184058e-02f,-3.86960953e-02f,+9.28013995e-02f,
+2.52907872e-02f,-6.56752614e-03f,+5.28540537e-02f,-8.21954161e-02f,+4.60669957e-02f,
+2.74211671e-02f,-2.39435341e-02f,-2.38871276e-02f,+7.29001686e-02f,+2.02869549e-02f,
-9.24736336e-02f,+1.42661883e-02f,-3.96617651e-02f,+2.24056933e-02f,-1.00783706e-01f,
+4.42638285e-02f,+6.62413836e-02f,-4.18266766e-02f,-3.16562876e-02f,-2.83887498e-02f,
-4.88553941e-02f,+3.72514054e-02f,-2.94052418e-02f,-7.09751993e-02f,-1.50846746e-02f,
-2.40617394e-02f,+7.70849809e-02f,+4.65692356e-02f,-7.93577582e-02f,-1.21548148e-02f,
+9.83604509e-03f,-5.75050302e-02f,-3.93971764e-02f,+5.13722450e-02f,+8.13394189e-02f,
-9.24851671e-02f,+9.57735777e-02f,-6.34337515e-02f,+5.60062751e-03f,-6.07715640e-03f,
+5.70363477e-02f,+6.53654262e-02f,+3.31509784e-02f,-6.83161467e-02f,+2.65912041e-02f,
-5.78377396e-03f,-1.03904016e-01f,+4.46179733e-02f,+3.75425592e-02f,-5.03085554e-03f,
+3.04475054e-02f,-6.90105781e-02f,+9.82838497e-02f,-8.47901776e-02f,+9.08270255e-02f,
-2.45792195e-02f,-1.40036419e-02f,-1.03006795e-01f,+8.10722932e-02f,-5.01922965e-02f,
+7.53241703e-02f,+1.04539476e-01f,+7.04278573e-02f,+3.11497226e-02f,-2.46842057e-02f,
-3.05103734e-02f,+2.14261189e-02f,-1.50556490e-02f,-7.25624785e-02f,-8.06930065e-02f,
+5.40443435e-02f,-1.78266615e-02f,+6.87499298e-03f,+4.91827587e-03f,+1.00816377e-01f,
-2.08324194e-02f,+2.53819730e-02f,+1.16082700e-02f,+2.87141521e-02f,-8.03971216e-02f,
-6.49918467e-02f,+3.94930914e-02f,+3.46928798e-02f,-2.34858450e-02f,-5.97933354e-03f,
+4.30542007e-02f,-4.36133984e-03f,-4.79437187e-02f,-3.44866402e-02f,+4.23632637e-02f,
-3.69468555e-02f,-3.38095799e-02f,-3.02137360e-02f,-7.15414137e-02f,-3.82465161e-02f,
+6.61950037e-02f,-7.79295489e-02f,-1.45657584e-02f,+7.48787746e-02f,-8.39997604e-02f,
-1.15985433e-02f,+2.85793003e-02f,+7.51389340e-02f,+9.00220424e-02f,+3.07791755e-02f,
+1.30664920e-02f,-3.02516539e-02f,-6.48050085e-02f,+8.90404638e-03f,-4.64153253e-02f,
+4.35906425e-02f,+3.72917280e-02f,+4.34230044e-02f,+3.30916308e-02f,-1.16667124e-02f,
-7.34221041e-02f,-7.70975202e-02f,-1.09832659e-02f,+8.75894800e-02f,-3.80336568e-02f,
+9.75040570e-02f,+7.72920176e-02f,+8.72417688e-02f,-5.51467538e-02f,-2.52445415e-02f,
-5.26458137e-02f,-6.82676211e-02f,-7.94346184e-02f,+8.46003070e-02f,+9.65222791e-02f,
+7.21492097e-02f,-8.47258568e-02f,+3.73774543e-02f,-1.31717301e-03f,-9.50881541e-02f,
-2.14367881e-02f,-3.65592763e-02f,+2.76789098e-04f,+2.15311442e-02f,-3.34012546e-02f,
+9.49658081e-03f,+1.35351075e-02f,-8.91402513e-02f,-7.81630352e-02f,+8.56678560e-03f,
-7.41341338e-02f,+3.76214162e-02f,-1.44814830e-02f,-3.07585709e-02f,+3.63975391e-02f,
-6.19008914e-02f,+5.06879166e-02f,+4.18375358e-02f,+6.30023852e-02f,+1.02866646e-02f,
-9.70563143e-02f,+3.44304629e-02f,-2.65747085e-02f,+3.03048566e-02f,-2.55648792e-02f,
+6.11073747e-02f,+1.74802393e-02f,+5.52632213e-02f,+9.72112715e-02f,+3.46776024e-02f,
+4.32872921e-02f,+6.46705106e-02f,-1.27822561e-02f,-3.10996454e-02f,-3.49423196e-03f,
-6.22623786e-02f,+4.85308096e-02f,-5.56930788e-02f,-4.48299795e-02f,-5.82721271e-02f,
-3.98923904e-02f,-1.01338267e-01f,-7.82495141e-02f,-2.45729480e-02f,-4.62488495e-02f,
-5.10124117e-02f,+5.36413193e-02f,+6.97515458e-02f,+5.18983342e-02f,-4.59337160e-02f,
+6.98939785e-02f,+9.45270993e-03f,-4.50192243e-02f,-6.97471946e-02f,-5.40943183e-02f,
-8.30266532e-03f,+1.57211311e-02f,+4.26379452e-03f,+7.95421079e-02f,-2.32297331e-02f,
-3.14636454e-02f,-1.00880235e-01f,-8.15550536e-02f,-1.65131465e-02f,-1.04931310e-01f,
+2.83973645e-02f,-2.08065175e-02f,-6.11070506e-02f,-8.87478366e-02f,+2.30546016e-02f,
+1.10985756e-01f,+3.38686220e-02f,-1.23704132e-02f,-6.42873198e-02f,+9.59612802e-02f,
-1.03092268e-01f,-3.49708982e-02f,+5.45203239e-02f,-1.01087997e-02f,+7.85231739e-02f,
+2.51533650e-02f,+2.89012883e-02f,-7.85991997e-02f,+5.75390905e-02f,-7.10028559e-02f,
+5.06728292e-02f,-3.15530151e-02f,+7.07371384e-02f,+5.24009764e-02f,-6.95179477e-02f,
-4.78415452e-02f,+8.80948976e-02f,-1.30717997e-02f,+3.65582667e-02f,-8.40505287e-02f,
-6.07179962e-02f,+9.91467312e-02f,+7.36189932e-02f,-5.51931113e-02f,+4.15501297e-02f,
-2.83662584e-02f,+9.00646113e-03f,+1.07753146e-02f,-8.71593952e-02f,+6.23821728e-02f,
-5.54851852e-02f,+5.73548139e-04f,-2.79923789e-02f,+7.30041116e-02f,-5.75920604e-02f,
-1.61308777e-02f,-4.92878146e-02f,-4.71585840e-02f,-1.49673363e-02f,+8.45621005e-02f,
-4.55379337e-02f,+5.01581952e-02f,-7.11526275e-02f,+3.28734145e-02f,+6.42941445e-02f,
-7.11303437e-04f,+1.34926857e-02f,-1.25245508e-02f,+9.54529196e-02f,+1.07983738e-01f,
-7.93605018e-03f,+2.49013864e-02f,-9.59107131e-02f,+3.23633887e-02f,+3.78683656e-02f,
+1.71105284e-02f,+5.84935537e-03f,+7.62134641e-02f,-5.18597327e-02f,+9.37891081e-02f,
-4.55998518e-02f,+3.41390334e-02f,-9.53351632e-02f,+5.44638112e-02f,-1.47988517e-02f,
-6.11754283e-02f,+2.20165011e-02f,-8.39538798e-02f,+1.30858710e-02f,+2.59813610e-02f,
+1.64177939e-02f,-7.34100714e-02f,+1.22960545e-02f,-1.88364089e-02f,+4.74141277e-02f,
-1.00486442e-01f,+4.38284241e-02f,+3.16915959e-02f,-7.75921682e-04f,-5.51540256e-02f,
-4.38030139e-02f,+3.02585680e-03f,-8.44759196e-02f,-4.63575013e-02f,+6.74853101e-02f,
+5.92784658e-02f,+6.18247613e-02f,+4.97690141e-02f,-1.14197461e-02f,-3.47967222e-02f,
-4.68779840e-02f,-4.38962951e-02f,+6.02836795e-02f,+6.70222417e-02f,+1.25667108e-02f,
-1.96478181e-02f,-7.04273358e-02f,-3.40909585e-02f,-7.65195675e-03f,+8.47086012e-02f,
+1.32754007e-02f,+9.18310955e-02f,-2.94488817e-02f,-8.14887881e-03f,-5.45833446e-02f,
+1.63537264e-03f,-2.37271003e-02f,+7.15295449e-02f,-7.45643005e-02f,-5.72742224e-02f,
+1.69063341e-02f,+2.74005365e-02f,+1.03745610e-01f,-6.58050738e-03f,+9.63256806e-02f,
-9.66368541e-02f,-8.44173506e-02f,+3.89364772e-02f,+5.33507066e-03f,-3.28483619e-02f,
+1.03053693e-02f,-2.34835269e-03f,-6.57867342e-02f,+9.84747708e-02f,-5.74103110e-02f,
-6.74569458e-02f,+1.78654529e-02f,-6.03358783e-02f,-7.76637346e-02f,-6.77233785e-02f,
+9.41830799e-02f,+7.83260074e-03f,+5.80885746e-02f,+5.84672280e-02f,+3.07545457e-02f,
-7.01346770e-02f,+3.85900177e-02f,+3.99817899e-02f,-5.38794994e-02f,+4.85243760e-02f,
-5.95491827e-02f,-2.54390202e-02f,-7.98341557e-02f,-9.15152207e-03f,+1.11561917e-01f,
-9.30981040e-02f,-6.76932111e-02f,-2.02515144e-02f,+4.44911420e-02f,+2.87745893e-02f,
+7.98165426e-02f,+3.77963893e-02f,-8.81151259e-02f,+5.05783129e-03f,-6.51396960e-02f,
-8.45061615e-02f,+7.70779029e-02f,+2.77268291e-02f,-3.13780420e-02f,+1.00959055e-01f,
-8.47267583e-02f,-4.08077575e-02f,-1.79690029e-02f,+7.45407715e-02f,+6.93801790e-02f,
+7.72621483e-02f,+7.67400488e-02f,+9.38180014e-02f,-8.49332511e-02f,-1.01956062e-01f,
+3.14496495e-02f,-4.61247079e-02f,+3.23335938e-02f,-1.08509049e-01f,+3.54405716e-02f,
+1.03278436e-01f,-3.17940488e-02f,+4.80992198e-02f,-3.71539667e-02f,+8.05357173e-02f,
-4.68213893e-02f,-9.84228551e-02f,-5.26833087e-02f,+6.09137937e-02f,+8.54364876e-03f,
+9.83207747e-02f,-6.72612414e-02f,+4.75932881e-02f,-4.41914573e-02f,-9.00906846e-02f,
+6.33995309e-02f,+1.93666201e-02f,-8.53400826e-02f,-1.01129033e-01f,-7.18754679e-02f,
+7.47152269e-02f,+2.20958628e-02f,-1.15184784e-02f,-4.87842821e-02f,-6.60076737e-03f,
-4.50234003e-02f,-5.74089773e-02f,+1.01469047e-01f,+2.52500977e-02f,+9.73333605e-03f,
-8.31286516e-03f,-1.01573378e-01f,-5.75016588e-02f,+9.54273418e-02f,-1.00323096e-01f,
-5.84898628e-02f,+8.38147998e-02f,+5.25481440e-03f,-7.21516162e-02f,-3.48965228e-02f,
+5.06383404e-02f,-2.38325819e-02f,+4.73353788e-02f,-6.82500452e-02f,+6.96287677e-02f,
-1.39916688e-02f,-2.53103301e-02f,-5.67094982e-03f,-5.76953478e-02f,+9.98949334e-02f,
+6.08891472e-02f,-4.03705388e-02f,+2.40787938e-02f,+1.37544498e-02f,-1.94326341e-02f,
+1.49275735e-02f,+6.52430877e-02f,-7.60314241e-02f,-2.13740319e-02f,+1.01077251e-01f,
+7.12249652e-02f,+8.52698758e-02f,-1.68162659e-02f,+2.29590461e-02f,+6.02473989e-02f,
-8.13621283e-03f,+4.78837118e-02f,+1.03763379e-01f,+9.23428610e-02f,+4.31809947e-02f,
+1.80027112e-02f,+3.36677348e-03f,-7.39214011e-03f,+5.39208092e-02f,-6.64535984e-02f,
-5.24923056e-02f,+5.72394542e-02f,+2.41419226e-02f,+3.99747603e-02f,+3.31214890e-02f,
-1.57136994e-03f,-2.92505976e-02f,+3.25414725e-02f,-4.17565852e-02f,+3.01699084e-03f,
+8.07143077e-02f,+9.57612544e-02f,-2.69577391e-02f,+3.22784260e-02f,+9.36923027e-02f,
+7.42435679e-02f,-8.16662833e-02f,-4.49257977e-02f,-1.00213677e-01f,-1.97897293e-02f,
-3.68235931e-02f,+6.01762049e-02f,-4.44163047e-02f,-9.69097093e-02f,+4.86719348e-02f,
+1.94012262e-02f,+1.25017138e-02f,+7.84803480e-02f,-1.02115599e-02f,-4.50646952e-02f,
-7.34237060e-02f,-5.00634126e-03f,-8.83233473e-02f,+7.86759853e-02f,-1.68462507e-02f,
-5.51775210e-02f,+7.35447481e-02f,-2.93199886e-02f,-5.81986681e-02f,-4.39751558e-02f,
+4.62758690e-02f,-1.02941412e-02f,+1.44508015e-02f,-9.21468064e-02f,+5.09418510e-02f,
+2.03455314e-02f,+7.25940466e-02f,+9.16303769e-02f,+4.15080972e-02f,+4.70146202e-02f,
+2.09584534e-02f,-8.10891669e-03f,-1.72199477e-02f,+1.81695521e-02f,-6.91637471e-02f,
+1.08797953e-01f,+1.08970199e-02f,+2.93682572e-02f,+1.42106391e-03f,+5.08616269e-02f,
+7.30445981e-03f,-1.68841574e-02f,-2.65696142e-02f,-6.71441928e-02f,+4.83565144e-02f,
+3.59515212e-02f,-8.41996297e-02f,-1.07856482e-01f,+5.70063032e-02f,+7.02781454e-02f,
+2.92677246e-02f,+4.50621992e-02f,+1.85068827e-02f,+6.99825659e-02f,-6.71397299e-02f,
+1.57998726e-02f,-6.69810697e-02f,+7.29211047e-02f,-1.47775300e-02f,-3.57194245e-02f,
-1.11408578e-02f,-1.01547576e-01f,-7.00154155e-02f,+1.65360905e-02f,+4.35878448e-02f,
-2.37529594e-02f,-8.46973732e-02f,+8.46713781e-03f,+5.78343943e-02f,+2.42753699e-02f,
-7.60226101e-02f,+7.19244033e-03f,-1.89812463e-02f,+6.72746077e-02f,-6.27358109e-02f,
+2.75314003e-02f,+1.08387858e-01f,+3.59425619e-02f,-9.84350517e-02f,+7.76942298e-02f,
-8.50319769e-03f,+9.49397385e-02f,-8.60161185e-02f,+1.09113166e-02f,-6.31252453e-02f,
-6.41291142e-02f,-5.32011054e-02f,-7.15417741e-03f,+6.60382956e-02f,-7.79352859e-02f,
-5.73655255e-02f,+8.93115625e-02f,-7.56249055e-02f,-8.11279714e-02f,+4.10570353e-02f,
-7.17708692e-02f,-9.99768078e-02f,-4.08497676e-02f,+2.48602349e-02f,-9.30212364e-02f,
-7.23129734e-02f,-1.14118494e-02f,-9.82804596e-02f,-1.78837646e-02f,+3.43089588e-02f,
-1.70898773e-02f,-6.63665980e-02f,-6.16665871e-04f,+3.03748697e-02f,-6.83999211e-02f,
-9.05158091e-03f,+4.86193970e-02f,-5.28935902e-02f,+3.76057401e-02f,-8.94077197e-02f,
+4.72862571e-02f,+6.01978749e-02f,-9.75558534e-02f,+4.36885245e-02f,+6.46188632e-02f,
+2.91049648e-02f,-1.79505274e-02f,-6.32394552e-02f,-2.20684633e-02f,+9.05193910e-02f,
-1.07373074e-01f,-8.40210170e-02f,+7.17024878e-02f,-3.92381847e-02f,+1.44361313e-02f,
-8.62588175e-04f,+8.20482075e-02f,+3.12570632e-02f,+5.25956377e-02f,-1.03871994e-01f,
-6.89201057e-02f,+3.51180211e-02f,-6.62033856e-02f,+3.31701823e-02f,-8.47867280e-02f,
+9.77214426e-02f,-2.30817124e-02f,+3.21164951e-02f,-4.53839898e-02f,+5.78009523e-02f,
+8.54935423e-02f,-3.02112824e-03f,+4.47940752e-02f,+3.17895673e-02f,-3.89007479e-03f,
-6.31246418e-02f,-8.43982920e-02f,+9.33176428e-02f,-8.44133645e-02f,-1.06672449e-02f,
-1.03445806e-01f,+7.16303959e-02f,-9.47759897e-02f,-8.81117210e-02f,-5.86383902e-02f,
-7.62543753e-02f,+2.53692288e-02f,-1.91553924e-02f,+7.21963635e-03f,-5.57075031e-02f,
-6.24237359e-02f,-8.32888409e-02f,+2.75465697e-02f,+8.77496749e-02f,-1.50402877e-02f,
+5.36125861e-02f,-4.53447849e-02f,-9.14287269e-02f,+1.74839646e-02f,-6.47922456e-02f,
+3.14354487e-02f,+8.83108005e-02f,-1.06886409e-01f,-3.21889259e-02f,-7.90401921e-02f,
+5.98153882e-02f,+2.86648069e-02f,-1.02625467e-01f,+7.24576646e-03f,+3.76972146e-02f,
+9.38976780e-02f,-5.99832945e-02f,-9.94910523e-02f,+9.89886746e-02f,+7.12097809e-02f,
+5.80792464e-02f,+2.02162098e-02f,+8.68654773e-02f,+1.15529345e-02f,-5.41801006e-02f,
+9.34236795e-02f,-2.32385192e-03f,-4.38044034e-02f,+6.83083981e-02f,-6.47441000e-02f,
+6.07872847e-03f,-6.21819012e-02f,-6.76424280e-02f,-6.68755546e-02f,+6.78904206e-02f,
+2.88429968e-02f,-7.87769109e-02f,-1.22717423e-02f,+6.50109798e-02f,+1.07893823e-02f,
+7.49108866e-02f,-4.38830204e-04f,-6.49594665e-02f,-1.05541967e-01f,+3.81179266e-02f,
+5.89549989e-02f,-2.48793494e-02f,+6.18528202e-02f,+7.42578283e-02f,+5.16792610e-02f,
+7.53021240e-02f,+5.81968874e-02f,-2.12684888e-02f,-4.91351560e-02f,+2.05812808e-02f,
+4.78897579e-02f,+6.55549690e-02f,+7.07324222e-02f,-8.21974725e-02f,-5.20033613e-02f,
+3.93926129e-02f,-9.79270041e-02f,+1.73362866e-02f,-3.36789433e-03f,+1.57740321e-02f,
-1.00962363e-01f,+1.11161783e-01f,+1.17080994e-01f,-4.08549868e-02f,+7.14945421e-02f,
+1.00730523e-01f,+9.12645012e-02f,-1.09871499e-01f,-5.60166948e-02f,+1.61310602e-02f,
+9.59748626e-02f,-2.82402188e-02f,-9.32139251e-03f,+3.81165743e-02f,+7.70620480e-02f,
-2.39560716e-02f,-2.56406441e-02f,+5.16958833e-02f,-1.41887125e-02f,+2.86321127e-04f,
-5.68218865e-02f,-1.22608989e-02f,-1.76098868e-02f,-7.90868104e-02f,+3.19234803e-02f,
+3.87747586e-02f,-3.84717807e-03f,-4.25900295e-02f,-5.02588088e-03f,+8.46442208e-02f,
-9.69106853e-02f,+9.64686796e-02f,-9.47576910e-02f,+1.04026861e-01f,+6.71201125e-02f,
+9.81303826e-02f,+9.23482403e-02f,+8.73095170e-02f,+4.39688936e-02f,-9.79680866e-02f,
-1.74475983e-02f,+8.22357833e-04f,-5.01260199e-02f,-1.86922625e-02f,-2.99622416e-02f,
-3.76445502e-02f,-8.49668831e-02f,-7.23610818e-03f,+9.68183205e-02f,+3.01916227e-02f,
+8.66673812e-02f,+5.99073097e-02f,-3.86964083e-02f,+9.46167633e-02f,+6.81195185e-02f,
-5.90875112e-02f,+2.98691019e-02f,+7.37867281e-02f,-7.11738691e-02f,+1.89378932e-02f,
+6.47980943e-02f,-7.39972964e-02f,-9.84809771e-02f,+9.28798392e-02f,-2.85232812e-02f,
+9.30849742e-03f,-2.91792993e-02f,+1.39466971e-02f,+1.81385875e-02f,-9.15941298e-02f,
+2.39034947e-02f,-1.14541061e-01f,+5.28467000e-02f,-5.45416065e-02f,-5.14386594e-02f,
+6.08736351e-02f,-7.10536316e-02f,+8.47502728e-04f,+6.03573844e-02f,-3.23716365e-02f,
-3.67619023e-02f,+1.10090517e-01f,-9.73523036e-02f,-3.39695290e-02f,+9.07220617e-02f,
+5.70352748e-02f,-8.04472268e-02f,+5.66440038e-02f,-9.32539254e-02f,+3.97734642e-02f,
-5.67950793e-02f,+7.28047490e-02f,-5.98636409e-03f,+5.94047308e-02f,-7.98176825e-02f,
+9.70747396e-02f,-1.82228982e-02f,-6.37908131e-02f,-1.08679999e-02f,+4.41176035e-02f,
-1.08555675e-01f,+9.10374299e-02f,+4.68788296e-02f,-1.56932115e-03f,-3.68882529e-02f,
-6.47132769e-02f,-9.49026793e-02f,-3.54914740e-02f,-2.54730172e-02f,-4.79599200e-02f,
+8.52023885e-02f,+9.20987874e-03f,+1.03678472e-01f,+1.37597276e-03f,+7.83175752e-02f,
-1.10088609e-01f,+6.82545379e-02f,+6.95169671e-03f,+3.24873347e-03f,-6.56958520e-02f,
-2.40140874e-03f,-8.20490271e-02f,-1.00965552e-01f,+7.61776939e-02f,+9.30106267e-03f,
-1.85370464e-02f,-2.72547957e-02f,+4.13754284e-02f,-1.81595776e-02f,+6.22495525e-02f,
+5.59960566e-02f,+4.40363213e-02f,+1.74256749e-02f,-4.75337468e-02f,+4.37535625e-03f,
+2.59101186e-02f,+3.54391038e-02f,-2.26932541e-02f,-2.37123147e-02f,-3.88583355e-02f,
-1.09525792e-01f,-6.17322922e-02f,+8.45309272e-02f,-6.81539327e-02f,-1.31420717e-02f,
+9.68462601e-02f,+8.57882723e-02f,+6.42920509e-02f,-6.05978630e-03f,-7.06296042e-02f,
+2.34777434e-03f,+5.32011278e-02f,+6.69036657e-02f,-1.05881563e-03f,-6.67094886e-02f,
-7.60178864e-02f,+7.14146122e-02f,+2.55892668e-02f,-5.82053773e-02f,+3.89696918e-02f,
-4.82660867e-02f,+5.39459065e-02f,-3.45794484e-02f,-5.14484197e-02f,-3.49774994e-02f,
-5.12385145e-02f,+4.52900790e-02f,+3.56569327e-02f,-8.15819576e-03f,+4.58002090e-02f,
-8.40590596e-02f,+7.42132589e-02f,+6.80341646e-02f,-7.73137361e-02f,-7.40404427e-03f,
+3.56120542e-02f,-7.24368542e-02f,+2.58523561e-02f,+9.69838072e-03f,+3.68872136e-02f,
+7.88997451e-04f,-3.81711200e-02f,+2.02142000e-02f,-6.65921569e-02f,+5.76679483e-02f,
-8.87935758e-02f,+5.29285558e-02f,-4.15016562e-02f,+7.96156898e-02f,+7.64175281e-02f,
+2.47611776e-02f,+9.13169309e-02f,+3.50686833e-02f,-1.14194900e-02f,-2.57627070e-02f,
+1.95688978e-02f,+7.01942220e-02f,+8.44972581e-03f,+5.92785403e-02f,-4.12958562e-02f,
-8.70462880e-02f,+8.39061216e-02f,+8.98430496e-03f,+5.83528653e-02f,-5.33109754e-02f,
-6.79045320e-02f,+7.76361749e-02f,-3.67708653e-02f,+7.67253265e-02f,-1.71979070e-02f,
-4.36329097e-03f,-1.18486583e-04f,+8.74739811e-02f,+3.40072885e-02f,-8.91329646e-02f,
+6.85730502e-02f,-1.29915401e-02f,-6.36127517e-02f,-4.38731387e-02f,+1.73429847e-02f,
+1.12014785e-02f,-3.04494556e-02f,-5.16719893e-02f,+3.49142812e-02f,-8.51965621e-02f,
-1.81869809e-02f,+1.31352693e-02f,-9.82656144e-03f,+4.24197391e-02f,+8.60733613e-02f,
-2.63803788e-02f,+1.53015610e-02f,+1.54558988e-02f,-5.13018258e-02f,+5.50654233e-02f,
-9.96361077e-02f,+9.72822532e-02f,+5.13204820e-02f,-5.19228391e-02f,-5.61665036e-02f,
-1.28043965e-02f,-4.40170951e-02f,-1.00926913e-01f,+7.43491128e-02f,-1.87377376e-03f,
-8.97575244e-02f,-5.10710105e-02f,+7.16633797e-02f,+7.48848543e-02f,+6.51107728e-02f,
+5.58171272e-02f,+6.56454042e-02f,-1.81963164e-02f,+7.76477978e-02f,-3.84262949e-03f,
-5.32087386e-02f,+6.85300305e-02f,-7.99893886e-02f,+6.83860108e-02f,+9.02626663e-03f,
+8.43238756e-02f,+8.43084827e-02f,-2.94126123e-02f,+8.07217285e-02f,-5.64263202e-02f,
-1.59736797e-02f,-6.89715892e-02f,-9.14622843e-03f,-8.87946114e-02f,-2.34136730e-03f,
+9.38932970e-02f,+4.68291342e-03f,+3.56668010e-02f,+1.40147060e-02f,+5.90524897e-02f,
-6.79866076e-02f,+7.56011382e-02f,-2.21324712e-03f,-8.63990560e-02f,-1.36552751e-03f,
-7.66390488e-02f,-1.48323774e-02f,-8.56696740e-02f,-1.70401856e-02f,-1.00895613e-01f,
+4.50959392e-02f,-1.97334196e-02f,-6.02101050e-02f,-3.23525397e-03f,-9.37509239e-02f,
-7.06021488e-02f,+3.82755399e-02f,-4.05284278e-02f,-8.36659074e-02f,-3.96736376e-02f,
-7.73133757e-03f,+3.57013308e-02f,+7.29039907e-02f,+3.25502157e-02f,+8.64650086e-02f,
-1.81785394e-02f,-4.78120744e-02f,-1.04363784e-01f,+3.49067710e-02f,-4.79792282e-02f,
-5.82626946e-02f,+3.01707946e-02f,-1.68887228e-02f,+1.06891923e-01f,+6.58628345e-02f,
+4.35143448e-02f,+9.36678331e-03f,+6.83869869e-02f,+4.85796928e-02f,-3.98809351e-02f,
+3.72784398e-02f,+1.04805045e-01f,-6.68324083e-02f,+5.67178577e-02f,+9.59969650e-04f,
-2.57634483e-02f,+3.31990533e-02f,+6.66468516e-02f,-8.67965594e-02f,+6.30078465e-02f,
+7.09275976e-02f,-4.18937877e-02f,-9.44533423e-02f,+9.25663859e-02f,-6.65620640e-02f,
+1.68181974e-02f,-1.02035947e-01f,-5.62125593e-02f,-3.81600745e-02f,-1.99092776e-02f,
-3.72793078e-02f,-8.59909952e-02f,-1.39803244e-02f,-9.28350985e-02f,-1.10176861e-01f,
-3.70205231e-02f,+7.54310563e-02f,+3.89516763e-02f,+6.71508089e-02f,+6.58747256e-02f,
-5.75086614e-03f,+1.10955276e-02f,+5.97957671e-02f,-1.90455057e-02f,+4.94123623e-02f,
-4.39182334e-02f,-6.13257699e-02f,+7.23142922e-03f,-9.56860036e-02f,+7.43836090e-02f,
+3.31634507e-02f,-3.93099859e-02f,-1.84210092e-02f,-7.29936957e-02f,-2.72744894e-02f,
-9.02047530e-02f,-3.26532573e-02f,-4.31077927e-03f,+8.24743509e-03f,-4.95162606e-03f,
+7.61298761e-02f,-5.76142445e-02f,-7.14182854e-04f,-5.23047335e-02f,-9.63214934e-02f,
+4.70831990e-04f,+5.63617721e-02f,+2.58103833e-02f,+1.37108564e-03f,+7.68460259e-02f,
+7.90159926e-02f,-2.06781998e-02f,+1.03649370e-01f,+2.57696211e-03f,-6.59787804e-02f,
-1.59162134e-02f,-3.80306616e-02f,+3.80610153e-02f,+7.95295313e-02f,+1.89094385e-03f,
+6.41590282e-02f,-7.64998943e-02f,-1.05554089e-01f,+4.12214436e-02f,-9.42610204e-02f,
+3.32120582e-02f,-9.24598947e-02f,-1.03829391e-01f,-3.52524444e-02f,-3.84683348e-02f,
+1.50616029e-02f,-1.06711566e-01f,-5.72837815e-02f,+2.06571072e-03f,-5.66882677e-02f,
-2.83615515e-02f,+4.49103937e-02f,+2.34002974e-02f,+9.55162346e-02f,-3.29185016e-02f,
-9.42891315e-02f,-9.32451040e-02f,+2.99787093e-02f,-1.15427049e-02f,+7.04267845e-02f,
-6.62693158e-02f,+6.71519041e-02f,+1.85892861e-02f,-3.78849208e-02f,+7.21838921e-02f,
+2.87205894e-02f,-1.22548193e-02f,-2.89847571e-02f,+7.74215981e-02f,+1.02172203e-01f,
+4.38044891e-02f,-8.34112614e-03f,+4.07886431e-02f,+4.41257656e-03f,-9.62728262e-03f,
-7.17157796e-02f,-7.89139345e-02f,+6.84024617e-02f,-7.45938867e-02f,-7.28868842e-02f,
-8.29509422e-02f,-1.11761048e-01f,+8.65838155e-02f,-6.01249523e-02f,+1.98227689e-02f,
-7.18223006e-02f,-4.18309867e-02f,+4.43434641e-02f,-9.98256132e-02f,-1.16249546e-02f,
+1.01067096e-01f,-8.15865472e-02f,-4.68872450e-02f,+6.37322217e-02f,+6.53912127e-02f,
+1.70324352e-02f,+5.36172800e-02f,-9.69159082e-02f,+8.42553750e-02f,-6.67660236e-02f,
+5.79743180e-03f,+8.98988470e-02f,-2.12260652e-02f,+9.81534272e-02f,+1.10103622e-01f,
+7.19183497e-03f,+5.04953451e-02f,+1.10561186e-02f,-5.76082356e-02f,+2.26344243e-02f,
+7.24241696e-03f,+6.45630509e-02f,+1.80691481e-03f,+4.05876972e-02f,+5.80853745e-02f,
+4.07591388e-02f,+4.00145575e-02f,+8.80234241e-02f,+8.35136920e-02f,+8.30429494e-02f,
+2.91197654e-02f,-9.45614204e-02f,+3.33414376e-02f,-5.54479733e-02f,+1.68910380e-02f,
-7.47366101e-02f,+1.28754629e-02f,-2.55975146e-02f,+1.14442082e-02f,-4.54832390e-02f,
-6.39527366e-02f,-3.67596671e-02f,+3.88332568e-02f,-7.72924423e-02f,-3.04790121e-02f,
+4.21571992e-02f,-4.56455089e-02f,-8.87905434e-02f,-1.02625214e-01f,-7.17701912e-02f,
+9.79381949e-02f,+4.38238494e-02f,+4.64345738e-02f,+7.38641694e-02f,+5.54879680e-02f,
+3.93430591e-02f,-7.00930879e-02f,+2.83577247e-03f,+5.92138320e-02f,+2.74447855e-02f,
-7.67607614e-02f,+2.63813436e-02f,-1.95687618e-02f,-3.78009453e-02f,-3.70888449e-02f,
-1.02202967e-01f,-7.93195441e-02f,+2.39234213e-02f,+2.08118055e-02f,-1.25242071e-02f,
-9.36278179e-02f,+2.83116999e-04f,-1.35732759e-02f,-1.63594559e-02f,+7.32319355e-02f,
+7.26934448e-02f,-7.36017129e-04f,+1.01430304e-01f,-2.87775286e-02f,-3.48058753e-02f,
+4.52691503e-02f,+2.23870818e-02f,-5.64690642e-02f,+6.66350871e-02f,+2.09292732e-02f,
-6.23174533e-02f,-4.91672754e-03f,+7.77073056e-02f,+8.54797661e-03f,-5.17601185e-02f,
-4.09655310e-02f,-2.83231176e-02f,+9.80510190e-02f,+1.62329376e-02f,-8.10845122e-02f,
-7.82697201e-02f,+7.22006802e-03f,-3.80875580e-02f,+2.60201190e-02f,+4.49042507e-02f,
+6.27735779e-02f,-6.56581074e-02f,-1.03636354e-01f,+5.94198257e-02f,-4.65123057e-02f,
-6.37610629e-02f,-3.81532847e-03f,+3.14193144e-02f,+2.28310116e-02f,-1.45550177e-03f,
-6.08550794e-02f,-9.56896767e-02f,+1.80245973e-02f,-4.64504473e-02f,+7.17845485e-02f,
-6.89459145e-02f,-4.15284671e-02f,-9.04961377e-02f,-8.81545246e-04f,+3.30846459e-02f,
+5.18604442e-02f,-4.20188345e-02f,+8.69866908e-02f,-9.33373272e-02f,+2.93394886e-02f,
+7.46298730e-02f,-5.91610698e-03f,-8.95096734e-02f,+1.99428685e-02f,+1.80734247e-02f,
-6.32087141e-02f,-9.11928564e-02f,-3.03541254e-02f,-7.26978630e-02f,-8.49817395e-02f,
+2.25409977e-02f,-7.70359039e-02f,+5.70400544e-02f,+1.01832435e-01f,-2.20717657e-02f,
-4.06112289e-03f,-7.83975199e-02f,+1.00105435e-01f,+6.36545345e-02f,+1.33100031e-02f,
+7.38604218e-02f,-2.92819683e-02f,+8.67718235e-02f,-2.49047391e-02f,+6.80023581e-02f,
+9.90642086e-02f,-4.84089442e-02f,-4.97478805e-02f,+5.87893911e-02f,-1.91916674e-02f,
-1.79733410e-02f,-1.05011277e-01f,+5.39030582e-02f,-9.55545381e-02f,-9.58382525e-03f,
-2.46820692e-02f,+8.03416222e-02f,+4.06689681e-02f,-8.56922865e-02f,+3.78485434e-02f,
-8.15162510e-02f,+9.71146151e-02f,+1.72358118e-02f,-4.52356674e-02f,+9.09021646e-02f,
+4.94685210e-02f,-3.29681523e-02f,-9.59522948e-02f,+3.95313501e-02f,+5.71223050e-02f,
+4.71817143e-02f,+6.74351156e-02f,-7.60751590e-02f,+2.53411718e-02f,+1.57167148e-02f,
-2.89394390e-02f,-5.86557314e-02f,+9.21340063e-02f,+9.65243056e-02f,+6.96851537e-02f,
+2.98082456e-02f,+7.22409114e-02f,+3.57000232e-02f,+6.80965111e-02f,+1.46996370e-02f,
+1.75642576e-02f,+8.35930854e-02f,+1.04865089e-01f,-7.21591935e-02f,-5.88305555e-02f,
-2.18416471e-02f,+2.92890128e-02f,+6.38345480e-02f,-4.38914970e-02f,+4.50218841e-02f,
+8.15307498e-02f,+2.76183765e-02f,-6.95228502e-02f,-1.06400229e-01f,+4.24326211e-02f,
+4.58511524e-03f,+7.48609006e-02f,-1.01467967e-01f,+7.43635884e-03f,+1.29055846e-02f,
-9.88522321e-02f,-1.06560864e-01f,+8.10938030e-02f,+3.71802337e-02f,+3.62413451e-02f,
-1.01253083e-02f,-8.74123126e-02f,-1.31884022e-02f,-4.67379205e-02f,-3.70298550e-02f,
-1.51551431e-02f,-1.03155836e-01f,+8.37236866e-02f,+2.15249462e-03f,+2.34690998e-02f,
-8.80257711e-02f,+5.83467707e-02f,-7.58246705e-02f,-9.57361236e-02f,+3.08969151e-02f,
+7.91634843e-02f,+4.50028963e-02f,+1.35219665e-02f,-4.31853943e-02f,-9.18945894e-02f,
+7.61383250e-02f,-4.35037613e-02f,-9.61931422e-02f,-2.24629007e-02f,-6.35799840e-02f,
-3.32732946e-02f,+8.29699710e-02f,-3.84123139e-02f,+7.14087337e-02f,+8.67703781e-02f,
+7.37091154e-03f,+3.80109474e-02f,+3.29625756e-02f,-1.87434405e-02f,+2.25681923e-02f,
-3.74771506e-02f,+4.00357433e-02f,+4.11505438e-02f,+6.58864677e-02f,-4.89129825e-03f,
-3.50256637e-02f,+3.29079255e-02f,+8.55738074e-02f,+1.29370159e-02f,-6.05872311e-02f,
-2.45209746e-02f,-9.00912061e-02f,+7.87242576e-02f,-9.52096507e-02f,+4.65406403e-02f,
-4.38838415e-02f,+6.12502024e-02f,+9.51100364e-02f,+3.25750299e-02f,+2.35582907e-02f,
-5.98697737e-02f,+6.23088889e-02f,-8.28421712e-02f,-5.00745438e-02f,+7.12000355e-02f,
-8.55763629e-02f,-4.17932533e-02f,+4.36930694e-02f,+2.92774364e-02f,-7.23620802e-02f,
+5.22185117e-03f,-7.16355890e-02f,-8.25426280e-02f,-1.53471706e-02f,-9.69045088e-02f,
-5.94463013e-02f,-8.48621726e-02f,-2.19579116e-02f,-3.68681662e-02f,-2.86349021e-02f,
+8.83497596e-02f,-4.72345278e-02f,-2.58131465e-03f,-8.07413459e-03f,+3.74008194e-02f,
+2.45208964e-02f,+6.07189313e-02f,-2.89655402e-02f,+3.09834406e-02f,-9.95139107e-02f,
+6.69227466e-02f,-1.78429857e-02f,+3.93008515e-02f,-2.75523439e-02f,+4.87908199e-02f,
-1.03709944e-01f,+7.93089047e-02f,-6.88602626e-02f,-3.23579982e-02f,-1.22079179e-02f,
+7.32625946e-02f,+4.14763317e-02f,-1.62765980e-02f,-9.93853658e-02f,+8.12894776e-02f,
-5.68442978e-02f,-2.45160684e-02f,+4.07244340e-02f,-2.94503495e-02f,+5.39407060e-02f,
-1.82604045e-03f,+3.61035541e-02f,-2.88941860e-02f,+6.50760755e-02f,+8.38757828e-02f,
+2.74203103e-02f,+2.04598755e-02f,-8.41913670e-02f,-4.71444800e-02f,-5.08914329e-02f,
-1.80965420e-02f,-5.19651882e-02f,-5.90942279e-02f,-8.51281807e-02f,-2.42912322e-02f,
-4.69920002e-02f,-5.12561426e-02f,-1.26585048e-02f,+9.52502340e-02f,-2.53793672e-02f,
+9.01323929e-02f,-9.56700519e-02f,-6.39058575e-02f,+8.58958811e-02f,-4.31680419e-02f,
+7.03272223e-02f,-7.77759552e-02f,-5.91503233e-02f,-1.93059798e-02f,+3.25044766e-02f,
+1.82075240e-02f,+7.62798637e-03f,-1.83280595e-02f,-5.52474372e-02f,+2.28453428e-02f,
-6.08440489e-02f,-2.78009195e-02f,+8.62610415e-02f,+5.36792576e-02f,-6.58215135e-02f,
+6.75042868e-02f,-3.65579613e-02f,-5.71541227e-02f,+8.36901739e-02f,+7.09985793e-02f,
+2.05475874e-02f,-3.88274826e-02f,+7.72376284e-02f,-9.47575569e-02f,+8.07924941e-02f,
+2.82197744e-02f,-6.07352294e-02f,+7.64502361e-02f,-2.71336008e-02f,-8.60594511e-02f,
-3.14315110e-02f,+1.36895031e-02f,-4.24407460e-02f,-7.58662075e-02f,-5.90255558e-02f,
-2.90971175e-02f,-7.99562111e-02f,-4.97971624e-02f,-3.02116536e-02f,-4.44694385e-02f,
+5.02301119e-02f,-4.43546427e-03f,-3.61850001e-02f,+2.04978529e-02f,+8.39070901e-02f,
-1.88035946e-02f,-9.96416882e-02f,-9.74702463e-02f,+5.06078079e-02f,+2.62305774e-02f,
-3.63479294e-02f,-6.14928789e-02f,+3.09060197e-02f,-7.08133727e-02f,+3.71960476e-02f,
-3.18872370e-02f,-7.13072158e-03f,+6.73916563e-02f,-4.54388708e-02f,+1.79707147e-02f,
-1.06016546e-02f,+7.55918697e-02f,-8.36046711e-02f,+4.73580435e-02f,-6.96306974e-02f,
-1.01236086e-02f,-5.29711209e-02f,+4.00377475e-02f,+8.10838863e-02f,-1.00692548e-01f,
-8.11541006e-02f,-3.15942951e-02f,-3.77239217e-03f,+8.23519006e-02f,-7.56673068e-02f,
-3.93361924e-03f,-9.64066312e-02f,+6.75154254e-02f,-2.99306046e-02f,+4.82693054e-02f,
+1.60409529e-02f,-1.06272854e-01f,-1.00480594e-01f,+1.20761339e-02f,+1.07403547e-01f,
-1.72073916e-02f,+8.84096175e-02f,+8.95015672e-02f,-1.75721645e-02f,-2.07289383e-02f,
-1.62210837e-02f,+2.42134519e-02f,+3.40704173e-02f,+8.04105923e-02f,+1.01105846e-01f,
+5.45914471e-03f,-7.44566321e-02f,-4.80631925e-03f,-4.36008461e-02f,+5.57966046e-02f,
-1.00084148e-01f,+1.04631662e-01f,-2.26889048e-02f,+6.28786534e-02f,+8.43085200e-02f,
+3.18183340e-02f,+9.03811902e-02f,+2.69136429e-02f,-8.23898520e-03f,+2.14291809e-04f,
+3.80094745e-03f,-1.12345386e-02f,-1.66134480e-02f,+6.98312819e-02f,-2.36036554e-02f,
-8.96452516e-02f,-4.45345528e-02f,+3.78538705e-02f,-7.34552070e-02f,+1.13821225e-02f,
+4.73742485e-02f,-6.29532486e-02f,-4.33695875e-03f,+1.15718162e-02f,-2.30876096e-02f,
+9.28084031e-02f,-1.16982206e-03f,-3.38421538e-02f,+9.63812172e-02f,+7.96289966e-02f,
+7.91259632e-02f,+4.83009033e-02f,+7.21520707e-02f,-2.19034292e-02f,+7.43440911e-02f,
-5.74133359e-02f,-4.68993075e-02f,+4.51806746e-03f,-4.25210036e-02f,+1.01349376e-01f,
-5.29788323e-02f,-8.92198980e-02f,-5.29048927e-02f,-7.70587996e-02f,-5.64612001e-02f,
-1.16602406e-02f,-9.04947817e-02f,+6.38674423e-02f,-3.90653610e-02f,+8.67899135e-02f,
-8.07676464e-03f,-5.49596399e-02f,+1.87287182e-02f,-9.61796194e-03f,+3.15410644e-03f,
+5.83738089e-03f,-1.01982027e-01f,-1.04755417e-01f,+9.18959826e-03f,+4.21198681e-02f,
-8.35230052e-02f,+2.66859755e-02f,+5.71400598e-02f,+7.88449720e-02f,-9.35508087e-02f,
+2.56260261e-02f,-8.20325613e-02f,-2.11769491e-02f,-8.46161842e-02f,-6.81068003e-02f,
+1.34094879e-02f,+1.22242421e-02f,+8.31236392e-02f,+4.93069366e-03f,-7.79103786e-02f,
-9.22413096e-02f,+9.59238857e-02f,-3.19115445e-02f,-8.67509469e-02f,-4.64968644e-02f,
+4.78453524e-02f,-4.23060283e-02f,-6.48740679e-02f,-5.44764847e-02f,-6.40145093e-02f,
+1.26099410e-02f,+5.62813953e-02f,+8.94004703e-02f,+5.55281667e-03f,-6.25042766e-02f,
-5.36964908e-02f,+7.04202428e-02f,-1.59699414e-02f,+9.95291490e-03f,-5.35937548e-02f,
+2.42639380e-03f,+4.31339256e-02f,-2.85321884e-02f,+7.00222552e-02f,-6.98464513e-02f,
+1.06636006e-02f,-1.13115638e-01f,+2.46089250e-02f,-4.40063439e-02f,-1.03237033e-01f,
-9.64427069e-02f,+6.11991361e-02f,-8.41705874e-02f,+6.40976131e-02f,-3.61682884e-02f,
-1.01036854e-01f,-2.54721427e-03f,-7.48457313e-02f,-2.15980336e-02f,-8.45984593e-02f,
-1.73574984e-02f,+8.10439363e-02f,-5.67895686e-03f,+9.56230089e-02f,+1.60351805e-02f,
+1.01723231e-01f,-6.01392239e-02f,-5.66990525e-02f,+7.00506940e-02f,+6.40701726e-02f,
+2.83191483e-02f,+2.81454641e-02f,-7.28625134e-02f,+5.38767688e-02f,+8.33002925e-02f,
-9.41443443e-02f,+7.17026815e-02f,+9.06340405e-02f,+1.85758397e-02f,-9.38540027e-02f,
-2.16086973e-02f,+5.94633482e-02f,-9.34925973e-02f,-8.41231272e-02f,-8.12031254e-02f,
+1.21602260e-01f,-7.11996406e-02f,+3.94892693e-02f,+9.90170613e-02f,-7.96134323e-02f,
+3.64117473e-02f,-8.52974281e-02f,+7.33891428e-02f,+3.31297442e-02f,+9.48870406e-02f,
+5.88567480e-02f,-6.46351948e-02f,-5.70427552e-02f,+4.64271083e-02f,-7.71470508e-03f,
+8.20882618e-03f,-7.99171329e-02f,-8.78786817e-02f,-9.76225063e-02f,+6.25075325e-02f,
+1.33066578e-02f,+3.42707857e-02f,+6.66018426e-02f,+4.89048809e-02f,-1.09870611e-02f,
-1.73723027e-02f,-4.66420427e-02f,-1.07885813e-02f,-1.49510056e-03f,-7.30732977e-02f,
-9.76894721e-02f,-8.66392851e-02f,-6.60422817e-02f,-7.39248693e-02f,-1.56764165e-02f,
+9.15583894e-02f,-2.33573467e-03f,-9.89975855e-02f,+5.97236976e-02f,+4.62157056e-02f,
+7.40947351e-02f,-2.09627897e-02f,+6.95141628e-02f,-4.17292565e-02f,+8.47309306e-02f,
-6.95246756e-02f,-4.21640053e-02f,+8.60086456e-02f,+5.91738448e-02f,+1.06573850e-02f,
+1.47164986e-02f,-7.31957853e-02f,+8.00168738e-02f,+1.57884434e-02f,-3.47230509e-02f,
+7.90336505e-02f,+1.00878842e-01f,+8.64530876e-02f,-7.61497319e-02f,-9.96360555e-02f,
-2.04780046e-02f,+7.82344714e-02f,-7.41096307e-03f,-7.80193433e-02f,+1.68978591e-02f,
+6.39565215e-02f,+8.56188759e-02f,-2.55221054e-02f,+9.44594890e-02f,+6.06601834e-02f,
+1.13647236e-02f,-4.91088405e-02f,-3.62658836e-02f,+2.31618658e-02f,-1.07615665e-02f,
+2.17206404e-02f,-8.37040786e-03f,+2.90571898e-03f,-3.30416746e-02f,-9.09768045e-02f,
+6.82111159e-02f,+9.90398228e-03f,-1.42578110e-02f,-9.65569913e-03f,+9.74984542e-02f,
+6.46027625e-02f,+5.76160252e-02f,+2.48493273e-02f,+2.20811889e-02f,+9.06489491e-02f,
-8.26807767e-02f,-3.49292643e-02f,+3.61987613e-02f,+9.45588499e-02f,-3.33413598e-03f,
-3.19070183e-02f,-4.45342250e-02f,-9.59883630e-02f,-6.49697259e-02f,-1.55671984e-02f,
+7.02511519e-02f,-6.87809214e-02f,-3.02407704e-02f,+8.24250877e-02f,+8.70457441e-02f,
-4.75281402e-02f,-5.26324734e-02f,-1.79018434e-02f,+9.03475136e-02f,+5.00778928e-02f,
-2.45026425e-02f,+7.72387311e-02f,-2.11579725e-02f,+8.83853436e-02f,+6.73927516e-02f,
-9.15014893e-02f,+9.06727090e-02f,+8.37774575e-02f,+1.68218855e-02f,-6.14030436e-02f,
-3.87783609e-02f,+5.16669825e-02f,-7.29949027e-02f,-1.27704311e-02f,+6.09602779e-02f,
-7.36143580e-03f,-3.06171160e-02f,-3.43973450e-02f,-7.24481046e-02f,-7.40818679e-02f,
+7.12470338e-03f,+6.74968511e-02f,+7.21856654e-02f,+5.38334064e-02f,+2.57223491e-02f,
+1.09675881e-02f,+6.13014586e-02f,-4.12913039e-02f,+4.23458554e-02f,+1.30683398e-02f,
-4.00379077e-02f,-3.60691696e-02f,-2.31853537e-02f,-2.70186365e-02f,+3.50623415e-03f,
-2.43639890e-02f,-5.63584566e-02f,+5.74089587e-02f,-5.63309118e-02f,-1.06252410e-01f,
+1.77040026e-02f,+6.70873234e-03f,+6.15665922e-03f,-3.16600427e-02f,+3.92056582e-03f,
+4.61100638e-02f,-8.08188692e-02f,+1.99621473e-03f,+4.72826399e-02f,+2.66865809e-02f,
+3.33941393e-02f,+2.33598407e-02f,-9.29560065e-02f,+2.65802834e-02f,+3.86554264e-02f,
-3.48600633e-02f,+2.30894145e-02f,+5.87987229e-02f,+1.10967495e-01f,+1.68097243e-02f,
-8.32954571e-02f,-1.00605652e-01f,+1.05655126e-01f,-3.07114869e-02f,-5.95730683e-03f,
-6.40520379e-02f,-7.16349632e-02f,-5.50088547e-02f,+5.70281744e-02f,+9.64905545e-02f,
+6.75031096e-02f,-5.33229811e-03f,+8.60494450e-02f,-3.88800837e-02f,-5.33136129e-02f,
+9.20145884e-02f,-2.36216234e-03f,+3.17280069e-02f,+4.19566110e-02f,+6.58088923e-03f,
+8.57043266e-03f,+9.43390280e-03f,-5.60274757e-02f,+1.93437487e-02f,-1.04425102e-03f,
-1.04289643e-01f,+2.00648382e-02f,+2.65854225e-02f,-8.14749449e-02f,-1.02817081e-01f,
-5.17417826e-02f,-1.00785740e-01f,-3.31928730e-02f,-9.19570774e-02f,-6.40903413e-02f,
+6.14077523e-02f,-6.88936189e-02f,-3.01344618e-02f,-4.37125154e-02f,-4.79312986e-03f,
+1.12156272e-02f,-6.00341707e-03f,-6.51179701e-02f,-2.42080390e-02f,-3.15500647e-02f,
-2.71842480e-02f,-1.69598609e-02f,-7.58382529e-02f,-7.57646114e-02f,+8.08546618e-02f,
+4.08196859e-02f,+1.24692242e-03f,+6.13171123e-02f,+4.52914238e-02f,+5.39842844e-02f,
-5.75841554e-02f,+9.02284309e-02f,-1.49084004e-02f,-7.49841481e-02f,+1.94942940e-03f,
+5.99927790e-02f,-1.45246629e-02f,-2.66232248e-02f,-4.02774699e-02f,-3.74722965e-02f,
+6.89053610e-02f,-2.25723945e-02f,+5.75105622e-02f,-7.13286102e-02f,+4.69076559e-02f,
+7.16864392e-02f,-7.96601549e-02f,-8.70434344e-02f,-4.98370714e-02f,+5.87882102e-02f,
+2.90630441e-02f,-1.64904706e-02f,+2.67887227e-02f,-3.66361961e-02f,+6.23100325e-02f,
+3.71574089e-02f,+8.21133330e-02f,+6.15877286e-02f,+5.82002774e-02f,+5.15376776e-03f,
-8.89163017e-02f,-1.00292727e-01f,+7.53962621e-02f,-3.53302434e-02f,-4.49517928e-02f,
+1.06017962e-02f,-8.19207430e-02f,+1.54643655e-02f,-2.86696106e-03f,+1.21241659e-02f,
+2.79594287e-02f,+5.09466454e-02f,+1.04252696e-02f,+1.07739866e-03f,-5.08651696e-02f,
-4.86128144e-02f,-8.46520662e-02f,-6.62741438e-02f,+4.13483158e-02f,-6.29874766e-02f,
-6.55546784e-02f,-9.11539346e-02f,-7.17138797e-02f,+7.32310191e-02f,-1.80487111e-02f,
-7.33890161e-02f,-6.57724440e-02f,+9.39159766e-02f,+9.93629321e-02f,+3.92705165e-02f,
+4.42810804e-02f,+3.03698741e-02f,-9.34154615e-02f,+9.27081555e-02f,+3.43137644e-02f,
+4.75975089e-02f,+7.58823976e-02f,+5.43399788e-02f,+9.39628556e-02f,+8.90551656e-02f,
+6.39991388e-02f,+4.34976667e-02f,+2.30153762e-02f,+2.87283678e-02f,-5.16554490e-02f,
+2.27602124e-02f,-6.71649054e-02f,+2.87177172e-02f,+5.52811846e-02f,-2.20218152e-02f,
-8.17449912e-02f,-6.57706857e-02f,+4.34659198e-02f,-6.95333332e-02f,-6.22366033e-02f,
+2.05155890e-02f,+8.68757814e-02f,-4.90026921e-03f,+4.01301607e-02f,+2.78736884e-03f,
-8.93651024e-02f,-7.08767325e-02f,+6.97015822e-02f,+9.21692774e-02f,-4.32520695e-02f,
+7.33402297e-02f,+8.61316249e-02f,-5.39803095e-02f,-4.51336168e-02f,-7.39149600e-02f,
-1.19887022e-02f,-7.03972802e-02f,+3.11161615e-02f,+6.08160943e-02f,+9.14349109e-02f,
-7.76877850e-02f,-6.50598183e-02f,-7.63872713e-02f,+8.90362039e-02f,-5.90689741e-02f,
+8.58332738e-02f,+5.83715038e-03f,+7.50409439e-02f,+7.74094462e-03f,-7.09911250e-03f,
+3.60777858e-03f,+8.63206536e-02f,+4.36409377e-02f,-8.91215727e-02f,+1.34948855e-02f,
-1.65410247e-02f,-7.60556981e-02f,-6.38221130e-02f,+1.01213180e-01f,+9.05664489e-02f,
-4.42865826e-02f,-1.56050026e-02f,+2.35715583e-02f,+2.65774354e-02f,-9.77339223e-02f,
-1.03562817e-01f,+1.30187050e-02f,+9.20527056e-02f,-9.87471640e-03f,+4.44013551e-02f,
+4.56713662e-02f,-1.04434617e-01f,+5.07641658e-02f,-5.59598953e-02f,+4.87276986e-02f,
+7.04044476e-02f,-1.78225040e-02f,-4.30782773e-02f,+8.04605410e-02f,-9.02621448e-02f,
+5.29445037e-02f,+5.71507737e-02f,-7.63840973e-02f,+7.74004310e-03f,-6.18142039e-02f,
-8.19393173e-02f,+4.26171049e-02f,-8.43363255e-02f,-1.87849775e-02f,-9.73604620e-02f,
-1.05086669e-01f,-1.03688739e-01f,+4.77862060e-02f,-1.02184378e-02f,+5.47613837e-02f,
+5.93757927e-02f,-6.56461017e-03f,-1.04766719e-01f,-3.45099010e-02f,-7.50228316e-02f,
-1.32375946e-02f,-9.15083811e-02f,+7.84731656e-03f,-5.37089221e-02f,-2.10496737e-03f,
+8.54702890e-02f,+3.60190161e-02f,+4.57944497e-02f,+5.77457882e-02f,+5.85479662e-02f,
+7.99973831e-02f,+5.98194040e-02f,-8.46523978e-03f,+6.29108697e-02f,+9.86865163e-02f,
-3.37641425e-02f,+9.86697152e-02f,+1.07302077e-01f,+6.81634098e-02f,-5.57306968e-03f,
+5.11617251e-02f,+5.44825681e-02f,+6.52684495e-02f,+7.09266886e-02f,-8.16375539e-02f,
-7.55941942e-02f,+2.96662841e-02f,-2.22484022e-02f,+2.07658038e-02f,-7.90679231e-02f,
-7.94816539e-02f,-7.27252439e-02f,-3.81298251e-02f,+5.46942577e-02f,+1.75803415e-02f,
+9.56708938e-03f,-9.90663916e-02f,-3.78537700e-02f,+6.99322745e-02f,-1.69967487e-02f,
-9.72986072e-02f,+9.07500461e-02f,-9.05596688e-02f,-8.73664171e-02f,-6.54855222e-02f,
-3.12949196e-02f,+9.08896402e-02f,-7.22462311e-02f,-3.97540964e-02f,-3.91090028e-02f,
+3.19345370e-02f,-8.18123221e-02f,-3.22344080e-02f,+1.31326970e-02f,-1.14761241e-01f,
-1.01662837e-01f,-1.24017354e-02f,-8.17886889e-02f,+6.27397448e-02f,+1.02003507e-01f,
+1.02520742e-01f,+4.34772298e-02f,-4.51001748e-02f,+5.21369986e-02f,+2.24520545e-02f,
-9.34267938e-02f,-6.78889677e-02f,+4.11640853e-03f,-1.03782907e-01f,-1.24318674e-02f,
+8.63933414e-02f,-1.00013465e-01f,-2.55945213e-02f,-1.21576339e-03f,+5.84538803e-02f,
-3.37010697e-02f,-2.66778618e-02f,-6.40610456e-02f,-6.82520419e-02f,-9.16456524e-03f,
-3.11957356e-02f,+3.43934596e-02f,+4.28939387e-02f,-5.76151311e-02f,-9.33980793e-02f,
-1.97746940e-02f,+5.54314032e-02f,-9.75860283e-02f,-4.27115001e-02f,+1.98883545e-02f,
-4.89435904e-02f,-1.25765689e-02f,+7.36903027e-02f,+8.34100470e-02f,-8.04985836e-02f,
+6.56121969e-02f,+5.67524470e-02f,-1.09283365e-01f,-7.52599388e-02f,+9.78848636e-02f,
+4.66202572e-02f,+4.44983281e-02f,-3.87638807e-02f,-8.93475413e-02f,+3.26969288e-02f,
+9.98432264e-02f,+1.20376032e-02f,+6.88988641e-02f,+6.41633198e-02f,-8.56830925e-02f,
+1.82325356e-02f,+1.95646230e-02f,+5.68738803e-02f,-3.18936743e-02f,+7.98162743e-02f,
+1.04735859e-01f,+7.05441609e-02f,+6.88949525e-02f,-1.07773125e-01f,-5.48701175e-02f,
-4.76245508e-02f,-6.48548007e-02f,-3.73060554e-02f,+7.78137818e-02f,-9.24092531e-02f,
+5.82153117e-03f,+7.80435354e-02f,+6.38153255e-02f,+4.23079431e-02f,+6.71394020e-02f,
+4.62511219e-02f,+5.13868481e-02f,-7.55683407e-02f,-8.31227228e-02f,+7.27208629e-02f,
-4.83392626e-02f,+1.92255285e-02f,-3.39934155e-02f,+7.16474727e-02f,-4.45812903e-02f,
+9.26105753e-02f,+4.38745171e-02f,+7.04256678e-03f,+4.67285290e-02f,-6.48120418e-02f,
+1.85105652e-02f,-8.10182095e-02f,+1.78475101e-02f,-9.47166979e-02f,-8.31604898e-02f,
-8.08054209e-02f,+3.10746953e-02f,-5.73099367e-02f,-5.17663881e-02f,-9.94983539e-02f,
+3.48619148e-02f,+9.01281983e-02f,-9.61552635e-02f,-4.18106327e-03f,+8.07171836e-02f,
+8.37575272e-02f,+9.54893455e-02f,-2.63355672e-02f,+3.25168148e-02f,+9.54636931e-02f,
+2.23384518e-02f,+7.52926394e-02f,-2.27126405e-02f,+1.08505050e-02f,+5.30749634e-02f,
+4.13514953e-03f,-7.97895938e-02f,-6.99271634e-02f,+6.82181418e-02f,+6.11314923e-03f,
-5.80290146e-02f,+9.63612273e-03f,-9.38569531e-02f,-3.22868824e-02f,+6.08681439e-05f,
+7.35651553e-02f,+4.97993315e-03f,-1.90095883e-02f,-2.94795539e-02f,-1.97101198e-02f,
-5.82001582e-02f,+7.54601359e-02f,+6.49709702e-02f,-1.68877486e-02f,-6.46771416e-02f,
+3.36596034e-02f,-9.72123072e-02f,+1.24114025e-02f,-9.63857397e-02f,-4.23724391e-02f,
-7.22848326e-02f,-7.01660514e-02f,+1.07952738e-02f,+4.34732735e-02f,+6.08224794e-02f,
+3.35031115e-02f,-8.78509879e-02f,-6.58090264e-02f,+9.72096995e-02f,-1.09028861e-01f,
-2.19791979e-02f,+4.42255996e-02f,-8.51963386e-02f,+9.09559876e-02f,+2.58434098e-02f,
-8.17234255e-03f,-2.91561559e-02f,-1.93816889e-02f,-7.79848844e-02f,+3.97414342e-02f,
+8.08982998e-02f,+5.89213893e-02f,+4.61719967e-02f,+6.88235313e-02f,+1.63733438e-02f,
-6.42312616e-02f,+5.09407632e-02f,-1.01217531e-01f,-3.06515861e-02f,+2.06103344e-02f,
-2.03568377e-02f,+8.74242783e-02f,+3.43281329e-02f,+8.47658962e-02f,-1.03642397e-01f,
+9.21066105e-02f,+3.56565341e-02f,-3.46365832e-02f,-2.70423293e-03f,-2.17821002e-02f,
-7.29747415e-02f,+8.75741988e-02f,-7.58245364e-02f,-4.69834693e-02f,+6.11842750e-03f,
+5.26772812e-02f,+2.78085116e-02f,+8.16503614e-02f,+8.90336707e-02f,+7.60578737e-02f,
+4.66619842e-02f,+1.45377144e-02f,-7.76418000e-02f,+2.85384525e-02f,-4.96515445e-02f,
+6.56141117e-02f,+1.05749205e-01f,+2.27724593e-02f,+1.34362765e-02f,+9.24115777e-02f,
+3.44772376e-02f,+9.15323496e-02f,-5.67456223e-02f,-4.38066423e-02f,+5.11712544e-02f,
+6.53647855e-02f,+8.58112723e-02f,+4.68923105e-03f,-8.14735666e-02f,+7.94195980e-02f,
-6.77784383e-02f,+5.68745397e-02f,+6.42730370e-02f,-9.31370072e-03f,+8.69203359e-02f,
+6.31942451e-02f,-8.77884552e-02f,-3.06779500e-02f,-9.70917940e-02f,-3.02218553e-02f,
+4.63852324e-02f,-9.35156196e-02f,-6.53617606e-02f,+4.96574193e-02f,-4.51437309e-02f,
-2.03707032e-02f,+8.40699524e-02f,-8.09032470e-02f,+3.46359983e-02f,-8.52574967e-03f,
-6.50453120e-02f,+1.14339739e-01f,-4.95894402e-02f,+8.67679864e-02f,-1.90088246e-02f,
-9.41817462e-02f,+7.69578964e-02f,-1.01279497e-01f,-8.14580470e-02f,+5.37210107e-02f,
+1.02497838e-01f,+8.29592198e-02f,+7.00074211e-02f,+8.59949812e-02f,-7.48135429e-03f,
-3.19630243e-02f,-7.41270483e-02f,-6.23927042e-02f,+2.70121638e-02f,-2.62761358e-02f,
+4.56254557e-02f,-5.15122823e-02f,-5.03100120e-02f,+4.92215678e-02f,-6.44067302e-02f,
+5.28654419e-02f,-5.61513677e-02f,+8.46389979e-02f,-7.20119104e-02f,+3.70127745e-02f,
+9.29984376e-02f,-6.54218122e-02f,+5.34879789e-02f,+2.83010621e-02f,+4.65653203e-02f,
-9.36451033e-02f,-9.80780050e-02f,+1.86858531e-02f,-7.65473545e-02f,-7.77330995e-02f,
-7.99269602e-02f,-7.66721070e-02f,+4.15836796e-02f,-5.47544751e-03f,-8.97468403e-02f,
+1.68538205e-02f,+5.09005040e-02f,-3.50645520e-02f,-4.52287123e-02f,+3.75713259e-02f,
-7.20487460e-02f,-2.90676076e-02f,-8.33475143e-02f,+5.34096546e-02f,+1.41443350e-04f,
+3.50690037e-02f,-8.35673064e-02f,+7.39670619e-02f,-9.77728814e-02f,+9.19587091e-02f,
+2.61485577e-04f,-1.51959211e-02f,+7.14142099e-02f,+4.93115708e-02f,-7.86491781e-02f,
+6.23489842e-02f,-6.63087964e-02f,-2.16241702e-02f,+3.16909030e-02f,-1.30162016e-02f,
-6.62926733e-02f,-9.92838591e-02f,-3.42193171e-02f,-1.11215562e-02f,+3.69917378e-02f,
-8.53292942e-02f,-2.51968801e-02f,+8.30401108e-02f,+2.53130123e-02f,+4.50117663e-02f,
-1.54276267e-02f,+6.32368997e-02f,+1.54873729e-02f,+7.95434341e-02f,+6.60708323e-02f,
+7.94942603e-02f,+9.00926515e-02f,-3.77796367e-02f,+7.52291009e-02f,+5.77450916e-02f,
+5.94735071e-02f,-2.45742202e-02f,-2.95611471e-02f,+1.27031151e-02f,+7.03400150e-02f,
+3.39768790e-02f,+3.50522483e-03f,-5.99805750e-02f,-2.27330029e-02f,+4.59876470e-02f,
+7.43252784e-02f,+5.37922904e-02f,-2.65414417e-02f,-7.51551837e-02f,+3.99175435e-02f,
-1.01726912e-01f,-2.25596800e-02f,+6.35485575e-02f,-3.94161046e-03f,+4.43911143e-02f,
-1.01747386e-01f,-7.56898969e-02f,-1.79047007e-02f,-3.43728289e-02f,-2.93649789e-02f,
+6.77044839e-02f,-9.89694968e-02f,+5.06709740e-02f,+8.54298919e-02f,-3.10591850e-02f,
+1.78682189e-02f,-6.02529831e-02f,-9.80313867e-02f,+5.95861077e-02f,-8.34234431e-02f,
-6.51278198e-02f,-6.33566976e-02f,+6.84451461e-02f,+4.40652482e-02f,+3.83544080e-02f,
+8.80436227e-02f,+7.49566704e-02f,+1.54049732e-02f,-4.86320956e-03f,-9.63221341e-02f,
-2.37090029e-02f,+9.62328762e-02f,-6.00118376e-02f,+6.57276139e-02f,-4.80397120e-02f,
+1.68559253e-02f,+8.50427672e-02f,+3.65253314e-02f,-3.31741991e-03f,+6.26768870e-03f,
-2.69512981e-02f,-9.36631560e-02f,+1.01921961e-01f,-6.42488077e-02f,+3.36766951e-02f,
-1.67362224e-02f,-5.74718639e-02f,+3.76944318e-02f,+5.87104000e-02f,-2.34148540e-02f,
+7.40728676e-02f,-5.37131913e-02f,+2.71829274e-02f,+9.71413180e-02f,-4.06867191e-02f,
-1.23883719e-02f,-4.29443978e-02f,-3.99100035e-02f,-1.26592955e-03f,-8.05610344e-02f,
-6.63959011e-02f,+6.61778525e-02f,-8.50453451e-02f,+6.63560778e-02f,+5.22043966e-02f,
+5.60614541e-02f,-7.84404650e-02f,+4.16640565e-02f,+6.67238086e-02f,-3.15452032e-02f,
+8.95667002e-02f,-8.20221975e-02f,+8.57583582e-02f,+7.65931606e-02f,-4.28038090e-02f,
-8.55015516e-02f,+6.11726195e-03f,+5.52940592e-02f,-2.18943637e-02f,-8.64746124e-02f,
-9.10350829e-02f,+4.08177301e-02f,+2.17556953e-03f,+5.14639467e-02f,-2.15265285e-02f,
-9.01176780e-02f,-7.79713271e-03f,-1.63829029e-02f,+1.83580574e-02f,-5.79104088e-02f,
-7.66470283e-03f,-1.64523944e-02f,-4.24724072e-02f,+3.60998772e-02f,+4.46619056e-02f,
+6.97129071e-02f,+1.01727180e-01f,-7.04261810e-02f,+2.17178054e-02f,+5.32003716e-02f,
-7.81026706e-02f,-5.35308905e-02f,+2.28889640e-02f,-5.42742107e-03f,+1.48872018e-03f,
+1.03528105e-01f,-6.26896247e-02f,+1.26907574e-02f,+7.89972246e-02f,+2.48346962e-02f,
-5.53121194e-02f,+1.88498143e-02f,+4.06214669e-02f,+7.51007050e-02f,-2.76720040e-02f,
-7.93825760e-02f,+7.85434619e-03f,-4.32822444e-02f,+9.56604406e-02f,+2.92010866e-02f,
-4.70206551e-02f,-5.24585620e-02f,-6.86390474e-02f,-2.04351787e-02f,-4.12253812e-02f,
+6.96646050e-02f,-2.32993923e-02f,-1.05469219e-01f,-2.68359832e-03f,-8.60653147e-02f,
-8.37454423e-02f,+1.04501627e-01f,-7.16896951e-02f,+6.07805587e-02f,+4.89614904e-03f,
-2.15584002e-02f,+6.56730263e-03f,+3.09164245e-02f,+8.40386376e-02f,+3.68819311e-02f,
-1.02742180e-01f,+9.61641073e-02f,+9.33346599e-02f,+1.08738847e-01f,-2.75098011e-02f,
-1.13976598e-02f,-1.90829542e-02f,-6.00177608e-02f,-9.95700732e-02f,-3.76696861e-03f,
+1.59048215e-02f,-1.73524022e-05f,-2.69731209e-02f,-3.13863382e-02f,+3.27215940e-02f,
-5.52472472e-03f,-1.38984034e-02f,-3.06263268e-02f,-6.23460077e-02f,+6.49869367e-02f,
-4.95680384e-02f,-4.59571071e-02f,-1.07507914e-01f,+4.33382764e-02f,-2.41851583e-02f,
-1.67813599e-02f,-5.96306808e-02f,+2.85486504e-02f,-8.30137655e-02f,-8.82059559e-02f,
+1.68130398e-02f,-9.15537626e-02f,+4.10248339e-03f,+1.49187054e-02f,+3.88175771e-02f,
+5.24867512e-03f,-2.87745316e-02f,+1.95305347e-02f,+2.81607267e-03f,+1.40842358e-02f,
-9.92375538e-02f,-8.92780796e-02f,-7.29431883e-02f,-6.88682646e-02f,+8.95531699e-02f,
-2.51283087e-02f,+9.10244137e-02f,+9.41077769e-02f,-5.17219268e-02f,+2.21153777e-02f,
-1.94620490e-02f,+4.06893976e-02f,-7.18210563e-02f,+6.48091361e-02f,+5.77413738e-02f,
-1.20552331e-02f,+2.07344349e-02f,+7.57784098e-02f,+3.89924645e-02f,+2.43041106e-03f,
+2.17578560e-03f,-1.14014908e-03f,-1.98775250e-02f,+8.74849185e-02f,-2.77969427e-02f,
+2.60793511e-02f,+3.73896980e-03f,-4.51658517e-02f,+2.44137738e-02f,-3.33727002e-02f,
+6.04134835e-02f,-6.07848279e-02f,-2.97786500e-02f,+7.84244016e-02f,-2.32270509e-02f,
-2.40412541e-02f,+1.03877202e-01f,-4.09170277e-02f,-2.35696463e-03f,+6.81948364e-02f,
-4.63015735e-02f,-9.91332158e-02f,+7.78916245e-03f,-2.45919800e-03f,-6.43505603e-02f,
+7.45306686e-02f,-6.49066642e-02f,-4.34271954e-02f,-4.19023484e-02f,-8.73222873e-02f,
-1.05805911e-01f,+2.69849505e-02f,+3.49018257e-04f,-3.63590419e-02f,-9.16321278e-02f,
-6.63098022e-02f,+5.67668397e-03f,+4.55392189e-02f,-1.00676818e-02f,-9.70906466e-02f,
-1.73089118e-03f,-3.64454160e-03f,+6.73758797e-03f,+8.88907909e-03f,-4.45579812e-02f,
+3.87464948e-02f,+8.61587177e-04f,+4.88561429e-02f,+4.12780568e-02f,+7.49827549e-02f,
-8.84477943e-02f,-5.22714965e-02f,+8.35829675e-02f,+7.87354484e-02f,-1.70211568e-02f,
+4.88368198e-02f,+5.67183830e-02f,+6.53386936e-02f,-8.74019265e-02f,+1.86056718e-02f,
+4.00542356e-02f,+9.49099287e-02f,-5.83725311e-02f,+5.16593307e-02f,-7.31826723e-02f,
-9.46315378e-03f,-3.46800350e-02f,+8.63801688e-02f,-8.72657597e-02f,-1.50487339e-02f,
+9.99875143e-02f,-7.32258707e-02f,-1.04162499e-01f,+9.81389806e-02f,+4.16509137e-02f,
+9.11812410e-02f,+3.09522673e-02f,-4.26721722e-02f,-4.20854613e-02f,+7.81184211e-02f,
+8.09025243e-02f,+1.63789839e-03f,-9.20965970e-02f,+4.99552712e-02f,+3.85206565e-02f,
-1.76473558e-02f,-2.07901448e-02f,+3.99984345e-02f,-2.67473683e-02f,+6.32270053e-02f,
-9.21260417e-02f,+3.57864052e-03f,+7.39664361e-02f,-9.86563563e-02f,+9.72095132e-03f,
+5.07186428e-02f,+1.67543665e-02f,-1.55583322e-02f,+3.39876041e-02f,+1.34632513e-02f,
+4.68143076e-03f,-6.88895583e-04f,+3.86888012e-02f,+9.20874402e-02f,-4.31298316e-02f,
+2.59144232e-02f,+9.18474421e-02f,-1.49762258e-02f,+5.22209657e-03f,+1.11633584e-01f,
+4.64482233e-02f,+2.26372406e-02f,+9.23657864e-02f,-5.15270233e-02f,+2.80503016e-02f,
-7.18398541e-02f,-4.30394895e-02f,+1.99224949e-02f,-9.91689265e-02f,+6.87554106e-02f,
+8.67938157e-04f,+2.69946083e-02f,-5.37381321e-02f,-5.87707199e-02f,+8.03448409e-02f,
-8.29540715e-02f,+6.52602687e-02f,+2.17010602e-02f,+7.49366954e-02f,-7.50129372e-02f,
-1.24486862e-02f,+1.10948503e-01f,+3.73972431e-02f,-9.89559144e-02f,+5.07440493e-02f,
+1.52013861e-02f,+3.75693887e-02f,+9.03995261e-02f,-4.90001589e-02f,-8.01202506e-02f,
-8.37251991e-02f,-6.71224520e-02f,+9.07375813e-02f,+8.83156285e-02f,-1.01161160e-01f,
-2.74129212e-02f,-7.65307993e-03f,-2.83952635e-02f,-4.54200432e-02f,-1.94707625e-02f,
+1.69359392e-03f,+2.85305232e-02f,-5.52580357e-02f,-7.64309764e-02f,+8.05222467e-02f,
+7.93692693e-02f,-8.56745243e-02f,-3.27286161e-02f,-2.31231470e-02f,-7.63239264e-02f,
-2.57817786e-02f,+1.26055395e-02f,-3.83131169e-02f,+9.37819257e-02f,+4.55320738e-02f,
-1.64937098e-02f,+2.24201977e-02f,-9.62122753e-02f,+7.84054399e-02f,+2.39675976e-02f,
-9.31182355e-02f,+5.83361909e-02f,+9.31751952e-02f,-4.28692251e-02f,-1.65096596e-02f,
+3.78785841e-02f,+3.69761959e-02f,+5.55141494e-02f,+6.83845878e-02f,+1.40105048e-02f,
+2.86112446e-02f,+3.86910066e-02f,+5.95095493e-02f,+6.29657730e-02f,-1.19324364e-02f,
-7.40818381e-02f,-7.10837618e-02f,-5.37309274e-02f,-1.15841823e-02f,-7.96876997e-02f,
+3.02023422e-02f,-8.06499049e-02f,-1.79417208e-02f,+2.80375108e-02f,+9.66745429e-03f,
-7.95849860e-02f,-1.02391280e-01f,-3.40764858e-02f,-4.76138629e-02f,-7.31204301e-02f,
+9.10693556e-02f,-9.16327685e-02f,+8.21369067e-02f,+9.60649550e-02f,+1.47068985e-02f,
+3.75480242e-02f,+9.18883011e-02f,-2.32462268e-02f,+8.95035192e-02f,+2.17086333e-03f,
-6.09988682e-02f,-6.11792020e-02f,+1.55959353e-02f,-9.95809436e-02f,-9.91006643e-02f,
+3.76123525e-02f,-9.37361941e-02f,-7.64445961e-02f,+3.09397858e-02f,-1.11242309e-02f,
+6.60228506e-02f,-3.74826230e-02f,+2.35762470e-03f,-1.05553247e-01f,-1.08693568e-02f,
-2.39972807e-02f,+4.37798984e-02f,+7.49156550e-02f,+3.86890769e-03f,-3.62674915e-03f,
-1.07548811e-01f,+4.31469716e-02f,-9.22071189e-02f,-7.03607500e-02f,-4.02126163e-02f,
+3.33460346e-02f,-5.43378703e-02f,-5.50094917e-02f,+6.64135292e-02f,-1.04929365e-01f,
+1.83556825e-02f,-3.87390256e-02f,-1.00955255e-01f,-1.85882747e-02f,+9.96392593e-02f,
+6.35203347e-02f,-8.07434097e-02f,+1.04769923e-01f,+1.27719939e-02f,+1.40267238e-02f,
-1.18774772e-02f,+6.72361180e-02f,-8.26457888e-02f,-6.13433234e-02f,+9.02041048e-03f,
+7.25734904e-02f,-6.48007244e-02f,+2.90836021e-02f,+9.19426903e-02f,-3.55178863e-02f,
-6.75157756e-02f,+3.55094001e-02f,+5.76399341e-02f,+6.84097931e-02f,-7.82620460e-02f,
+7.93443695e-02f,+2.59704236e-02f,+3.79469502e-03f,-6.79288730e-02f,+8.88523534e-02f,
-1.57418335e-03f,+6.99829012e-02f,+2.53502675e-03f,+7.11475164e-02f,-1.16702393e-02f,
+9.25654769e-02f,-5.13670854e-02f,+5.82356565e-02f,+4.04931493e-02f,+2.48130374e-02f,
-5.03973924e-02f,-8.25359449e-02f,-9.83952358e-02f,-1.03087649e-01f,+7.35690296e-02f,
-3.19752619e-02f,-1.46602336e-02f,-9.21031609e-02f,-3.57000530e-02f,+5.71376458e-02f,
+3.57190110e-02f,-8.15592408e-02f,-7.48942941e-02f,+5.69665767e-02f,-9.13604572e-02f,
-2.27143466e-02f,+9.36270580e-02f,+9.41913500e-02f,-7.24026561e-02f,+7.52861723e-02f,
-5.20366430e-02f,+7.01434091e-02f,+6.75428733e-02f,-1.65686011e-04f,-3.76334041e-02f,
+1.02493577e-01f,-5.53696528e-02f,+3.74015495e-02f,-3.76054347e-02f,-1.14438534e-02f,
+4.53056470e-02f,+1.54352933e-03f,+2.26702765e-02f,-1.04004800e-01f,-3.88957709e-02f,
-9.84340087e-02f,+3.55064943e-02f,+6.15526959e-02f,+3.15185711e-02f,+9.63866189e-02f,
+6.31450117e-03f,-9.94748771e-02f,-1.04570955e-01f,-1.10196173e-02f,-5.03448322e-02f,
+3.16095874e-02f,-7.06208572e-02f,-8.85641724e-02f,+8.97351131e-02f,-5.99837154e-02f,
-8.97866860e-02f,-9.35886577e-02f,+1.01286322e-01f,+1.71570163e-02f,-6.25384226e-02f,
+4.62685302e-02f,+7.25463778e-02f,-6.39140680e-02f,-1.49213951e-02f,+4.43420075e-02f,
+1.04138099e-01f,-9.46012959e-02f,-1.99194849e-02f,-4.38595414e-02f,-8.30433294e-02f,
-5.49256355e-02f,+3.78704928e-02f,+8.63554403e-02f,-7.31943846e-02f,+7.22370446e-02f,
+4.88774516e-02f,-5.49192540e-02f,-5.04489131e-02f,-7.69158006e-02f,+1.00975670e-01f,
-2.57809609e-02f,-3.02783530e-02f,+2.18471605e-02f,-2.37341672e-02f,-5.82109913e-02f,
+8.47991407e-02f,-7.71223977e-02f,-3.54760513e-02f,-3.63629200e-02f,-4.36593741e-02f,
-3.64329182e-02f,-4.55586560e-04f,-4.09993306e-02f,-1.13813400e-01f,-7.62837380e-03f,
-8.91252980e-03f,-2.21308209e-02f,+2.45369617e-02f,-1.03204295e-01f,-1.45016415e-02f,
+8.75659809e-02f,-5.02733737e-02f,+6.42277822e-02f,+9.37579647e-02f,+5.47881201e-02f,
-4.89293598e-02f,-2.12275293e-02f,-4.75650951e-02f,+3.08177304e-02f,+9.58526880e-02f,
+2.95536499e-02f,+9.74207744e-02f,-1.05819792e-01f,-2.40495186e-02f,+2.22826917e-02f,
-7.23293647e-02f,-6.72919955e-03f,+8.45555589e-02f,+3.87183502e-02f,+9.04944614e-02f,
+7.06358328e-02f,-3.01708728e-02f,-5.80485463e-02f,+1.04843833e-01f,+6.97015002e-02f,
-2.11547911e-02f,+1.26496106e-02f,-4.97353822e-03f,+4.15858254e-02f,-8.40936974e-02f,
-6.84862360e-02f,-8.44896585e-02f,-6.17518574e-02f,+6.79746196e-02f,-7.36900344e-02f,
-5.25284298e-02f,+6.32993951e-02f,-8.83736014e-02f,-9.02576149e-02f,+2.68396661e-02f,
-5.99455461e-02f,+5.00451699e-02f,+1.86370760e-02f,-3.17206308e-02f,-2.58627534e-03f,
-6.60603866e-02f,-3.55377197e-02f,-6.07544817e-02f,-3.89564857e-02f,-8.62454399e-02f,
-6.22999575e-03f,-5.22876345e-02f,-2.81062312e-02f,+7.89627656e-02f,-1.43822480e-03f,
+8.02928582e-02f,+5.85143408e-03f,-7.48900101e-02f,-5.21157123e-02f,+1.01820044e-01f,
-6.31903335e-02f,-4.87175025e-02f,+1.19467443e-02f,+2.78139021e-03f,+9.48679373e-02f,
+5.40946312e-02f,-3.30864787e-02f,+6.94548562e-02f,-8.77738968e-02f,+5.30916937e-02f,
-8.41976479e-02f,-1.91568229e-02f,+9.72556695e-02f,-9.92059037e-02f,-8.85739401e-02f,
-4.56246175e-02f,-3.61942537e-02f,-1.66632980e-02f,+1.87582802e-02f,-4.58819307e-02f,
+5.96096702e-02f,+5.63156530e-02f,+4.97920718e-03f,-1.11497238e-01f,-1.34525234e-02f,
-2.70712823e-02f,+7.96503425e-02f,-6.25568852e-02f,-5.73185459e-03f,-5.39252833e-02f,
-5.99348992e-02f,+1.02068484e-01f,-6.48905262e-02f,+9.10214335e-02f,+6.17969260e-02f,
+4.03666124e-02f,+5.56112304e-02f,+1.59508514e-03f,+3.17549780e-02f,+1.36044028e-03f,
+3.12143639e-02f,-2.10372731e-02f,-7.56870210e-03f,-6.67508394e-02f,+8.60445946e-03f,
+9.79150459e-02f,+4.55559157e-02f,-5.72668985e-02f,+1.58839542e-02f,+5.62878624e-02f,
-2.75964593e-03f,-5.57649173e-02f,-1.04732439e-02f,-1.13802403e-02f,+8.81752968e-02f,
-8.03340226e-03f,-8.61084238e-02f,-3.18834782e-02f,+1.93900652e-02f,-3.16601843e-02f,
-5.37432507e-02f,-3.33114937e-02f,-1.21129081e-01f,-1.01183943e-01f,+7.86046535e-02f,
+9.39934626e-02f,+8.46948251e-02f,-3.26095405e-03f,+8.88355747e-02f,-4.69567105e-02f,
-5.27633987e-02f,-4.10832018e-02f,-8.58560950e-03f,+1.20813586e-01f,+1.27158090e-02f,
+9.03166756e-02f,+4.40840945e-02f,-3.86987627e-02f,+4.63404730e-02f,+4.31631245e-02f,
+1.21662714e-01f,+8.13644007e-02f,-5.06865904e-02f,+9.44602489e-02f,+8.73343870e-02f,
+5.77193163e-02f,-9.83712077e-02f,+8.59152079e-02f,-2.42002402e-02f,-1.09720742e-03f,
+7.41499588e-02f,+4.16904278e-02f,-8.37435052e-02f,+5.05431965e-02f,+9.11147967e-02f,
+1.70916952e-02f,+7.83987418e-02f,-6.39184518e-03f,+4.03792635e-02f,-6.74376339e-02f,
-5.63681535e-02f,-7.43001178e-02f,+2.77202800e-02f,+7.46429041e-02f,-3.08781192e-02f,
-1.07629495e-02f,-7.51317590e-02f,+2.24972740e-02f,-5.04075841e-04f,+7.71343559e-02f,
+3.75727676e-02f,-5.99898696e-02f,-4.42646891e-02f,+3.51730473e-02f,-4.64389945e-04f,
+1.01117902e-01f,-6.15139790e-02f,+9.38837677e-02f,-9.45317075e-02f,-2.47140881e-02f,
-2.32199728e-02f,-3.92055213e-02f,-3.67677771e-02f,-1.04135633e-01f,+4.85790148e-02f,
-1.97248328e-02f,+7.58235157e-02f,+8.09689909e-02f,+7.14453235e-02f,+5.52492402e-02f,
+5.10651479e-03f,-5.38358577e-02f,-6.79033101e-02f,+5.91713451e-02f,+7.58043453e-02f,
-1.01678513e-01f,+2.07252800e-03f,+9.24038589e-02f,-8.33075494e-02f,-5.76348305e-02f,
-1.64251216e-02f,-1.03460349e-01f,-7.10698729e-03f,+5.56021519e-02f,+8.89007673e-02f,
+7.79790208e-02f,+1.91350225e-02f,-5.09339124e-02f,-7.66564440e-03f,+2.62231100e-03f,
+9.98262390e-02f,+3.29632424e-02f,-2.13228017e-02f,-5.88155128e-02f,+2.97066607e-02f,
+9.49494913e-03f,-3.28105390e-02f,-8.11473560e-03f,+1.06516749e-01f,+5.50521202e-02f,
+6.45284951e-02f,+8.77062902e-02f,+9.05975029e-02f,-1.67950336e-02f,-2.22634226e-02f,
+2.73464471e-02f,+5.96505180e-02f,-3.11326096e-03f,+4.45832685e-02f,-1.02180831e-01f,
-8.22254419e-02f,+7.08037764e-02f,-8.30008239e-02f,-6.71390295e-02f,+5.26146032e-02f,
+6.81192502e-02f,+1.03203848e-01f,+3.67423408e-02f,+8.08991045e-02f,+9.08892322e-03f,
+7.50143752e-02f,+6.18481403e-03f,+2.58804355e-02f,+8.28272179e-02f,-9.06242281e-02f,
-9.69217047e-02f,+6.82557225e-02f,-1.00317985e-01f,+6.08140714e-02f,-6.07232153e-02f,
-5.30662313e-02f,-6.90031983e-03f,-1.11995824e-01f,-1.31152291e-02f,+7.22901225e-02f,
-9.77063328e-02f,+5.62016405e-02f,-7.88879469e-02f,-5.80916554e-03f,+1.03325494e-01f,
+1.03021450e-01f,-5.76521456e-03f,-9.68839526e-02f,-4.07919176e-02f,+2.05362141e-02f,
+7.98062701e-03f,+1.04357928e-01f,+2.93857493e-02f,-3.25434804e-02f,-6.54188618e-02f,
+1.12640612e-01f,-3.59900258e-02f,+6.57857920e-04f,+8.84980243e-03f,-5.79838699e-04f,
+1.07884482e-01f,-5.42964563e-02f,-1.48335434e-02f,+9.42063481e-02f,-2.68408842e-02f,
+8.33818465e-02f,+1.02447897e-01f,+4.08058278e-02f,-2.21934747e-02f,-5.35190403e-02f,
+5.55292070e-02f,-9.91659686e-02f,-4.37195897e-02f,-6.32847920e-02f,+7.88938627e-02f,
-2.66939625e-02f,+9.37557518e-02f,-2.18217820e-02f,-7.71728111e-03f,-1.09868422e-01f,
+5.13757840e-02f,-9.27840993e-02f,+1.92970899e-03f,+4.52860594e-02f,+7.83278942e-02f,
-4.99890447e-02f,-5.24094235e-03f,+3.79443318e-02f,-9.19511840e-02f,+9.90639254e-02f,
+6.37717098e-02f,+1.01504410e-02f,+9.86484140e-02f,-6.16380051e-02f,+7.62440860e-02f,
+3.93400826e-02f,-8.58961567e-02f,+6.57453537e-02f,-1.66108292e-02f,-8.79679620e-03f,
+9.57335681e-02f,+2.73573659e-02f,+2.44570393e-02f,-7.47389197e-02f,+3.00457282e-03f,
-5.35072424e-02f,+6.62028268e-02f,+2.84765586e-02f,+5.62320501e-02f,+8.35444406e-02f,
+4.67981771e-02f,+7.23901540e-02f,-8.68351832e-02f,+7.10230768e-02f,+7.71131068e-02f,
+4.10245098e-02f,+8.58904645e-02f,+5.57172969e-02f,-3.21741663e-02f,+8.27490389e-02f,
-2.71101911e-02f,-9.75414589e-02f,+3.40329930e-02f,-8.20793062e-02f,+6.79976568e-02f,
-5.76294139e-02f,-4.74628843e-02f,-2.47708568e-03f,-2.37943903e-02f,+9.58450362e-02f,
+3.72335613e-02f,+7.61768222e-03f,-1.02097236e-01f,-9.85504012e-05f,+6.68286681e-02f,
-6.69843480e-02f,-2.30135042e-02f,+7.30961487e-02f,-8.53537992e-02f,+3.95549759e-02f,
+4.17727195e-02f,-1.49380416e-02f,-2.38033254e-02f,-8.97157714e-02f,-3.41173299e-02f,
-9.50086042e-02f,-9.04795341e-03f,-3.64454687e-02f,+7.65520260e-02f,-5.07255532e-02f,
+9.34286043e-02f,-5.02510853e-02f,-1.01688486e-02f,-5.08334525e-02f,-5.53040728e-02f,
-3.96895781e-02f,-8.30997303e-02f,-5.55143394e-02f,+2.01253667e-02f,-1.95744690e-02f,
+6.27312362e-02f,-2.80497037e-02f,-6.96147829e-02f,-8.27098340e-02f,+6.28310069e-02f,
-6.13445975e-03f,-9.39119235e-02f,+6.71305880e-02f,+8.23434442e-03f,+6.41863979e-03f,
-1.79390479e-02f,+1.03732400e-01f,-4.62698527e-02f,-3.70519534e-02f,+6.17114380e-02f,
+4.36590984e-03f,-1.09012835e-01f,-6.21924140e-02f,+1.29071865e-02f,-1.26410974e-02f,
+2.50480883e-02f,+8.10989961e-02f,-5.24729565e-02f,-8.94362926e-02f,-7.71766528e-02f,
-6.91572130e-02f,+1.66853145e-02f,+1.00481041e-01f,-3.55126783e-02f,+1.04447447e-01f,
-7.14422315e-02f,-5.36982752e-02f,+7.69286528e-02f,+5.15835658e-02f,+1.01053886e-01f,
+8.97823945e-02f,-9.95809957e-02f,-4.48950045e-02f,-2.14363262e-02f,-2.00054795e-02f,
-9.55763608e-02f,-9.38902348e-02f,-8.01205859e-02f,-9.50566679e-03f,-8.77784789e-02f,
-6.92776144e-02f,-3.12734619e-02f,-4.15153950e-02f,-4.46099117e-02f,-8.25266093e-02f,
-7.95113891e-02f,+1.02522098e-01f,+6.68215677e-02f,-5.91447763e-02f,-7.84154981e-03f,
+8.34896490e-02f,-8.50395411e-02f,-7.61495829e-02f,+1.47649618e-02f,+7.81239495e-02f,
+3.44318151e-02f,+9.72282887e-03f,+1.06551692e-01f,-8.14424530e-02f,-3.17651313e-03f,
+4.73912768e-02f,-6.08696602e-02f,+9.40380767e-02f,+9.24185887e-02f,+7.06337541e-02f,
-6.85271993e-02f,-1.22794537e-02f,-8.66638422e-02f,-9.18613374e-02f,+9.75453481e-03f,
-8.23584497e-02f,+5.59091866e-02f,-8.20185393e-02f,+1.80701148e-02f,+5.14927283e-02f,
+3.68713699e-02f,+1.66284684e-02f,-3.74213979e-02f,+7.72599224e-03f,+2.50673834e-02f,
+6.27477691e-02f,+6.98146969e-02f,+9.47264805e-02f,-6.89087585e-02f,+9.45816487e-02f,
+1.45858116e-02f,+7.48510426e-03f,+8.49854797e-02f,-7.09028244e-02f,+6.83249980e-02f,
+3.85597837e-03f,-5.03485873e-02f,-7.81000778e-02f,-9.89661962e-02f,-6.62735850e-02f,
-9.01375785e-02f,+4.04134952e-02f,-5.35002798e-02f,+7.74348974e-02f,+2.59581730e-02f,
-6.91720098e-02f,-4.43101078e-02f,+4.28495184e-02f,+7.56851360e-02f,+6.27073720e-02f,
+1.07181475e-01f,-4.00039088e-03f,+8.27279910e-02f,+5.99714145e-02f,-4.74498011e-02f,
+8.55602771e-02f,+6.57506138e-02f,+1.04723781e-01f,-2.54803952e-02f,-7.16022775e-02f,
-5.87838888e-02f,-5.14942687e-03f,-5.68618719e-03f,+7.03444146e-03f,+5.69354855e-02f,
-3.66152562e-02f,+3.15536670e-02f,-2.55657639e-02f,+1.08003551e-02f,-6.50638118e-02f,
-2.17637997e-02f,-6.73904493e-02f,-9.76820756e-03f,-6.41754083e-03f,-7.01174885e-02f,
+9.10046771e-02f,-1.01306513e-01f,-8.49782526e-02f,+5.45261092e-02f,-7.79915303e-02f,
+4.29460332e-02f,-2.22871751e-02f,-8.21011066e-02f,+6.53571337e-02f,-7.66292736e-02f,
+3.21788192e-02f,-6.75844327e-02f,-7.18212202e-02f,-3.14033478e-02f,+9.42313951e-03f,
-9.67430770e-02f,+6.96192607e-02f,-9.94321853e-02f,-9.96984914e-02f,};


void navdepp(k2c_tensor* conv2d_22_input_input, k2c_tensor* dense_23_output) {

size_t i;
size_t conv2d_22_stride[2] = {1,1};
size_t conv2d_22_dilation[2] = {1,1};

const float conv2d_22_output_array[7744] = {0};
_ssdm_SpecConstant(conv2d_22_output_array);
# 3710 "vlsi_eval4.c"



k2c_tensor conv2d_22_output;

    for (i = 0; i < 7744; ++i) {
_ssdm_Unroll(1, 0, 4, "");
 conv2d_22_output.array[i] = conv2d_22_output_array[i];
    }


    conv2d_22_output.ndim = 3;
    conv2d_22_output.numel = 7744;
    conv2d_22_output.shape[0] = 22;
    conv2d_22_output.shape[1] = 22;
    conv2d_22_output.shape[2] = 16;
    conv2d_22_output.shape[3] = 1;
    conv2d_22_output.shape[4] = 1;


const float conv2d_22_kernel_array[432] = {
+1.49955392e-01f,+1.37450859e-01f,-6.85449988e-02f,+7.76014552e-02f,-1.05239771e-01f,
-8.31414163e-02f,+9.43887383e-02f,-1.36130661e-01f,-1.31359160e-01f,+1.82467133e-01f,
+3.98131646e-02f,+7.96586797e-02f,-3.53495739e-02f,-1.34671703e-01f,-6.84539750e-02f,
-8.17753747e-02f,-9.03555900e-02f,-1.52302876e-01f,-6.39997721e-02f,-5.54997399e-02f,
+1.43396512e-01f,+1.91525385e-01f,-1.61095873e-01f,-4.14774679e-02f,-7.20317140e-02f,
-1.83951125e-01f,-3.07482816e-02f,-1.73523188e-01f,+1.20708339e-01f,+4.28500809e-02f,
-1.57500669e-01f,-1.54504403e-01f,-1.67160660e-01f,+1.15590855e-01f,+5.63136265e-02f,
-1.04674898e-01f,-4.79815453e-02f,-2.37617753e-02f,-1.26298457e-01f,-1.41674310e-01f,
-9.22237039e-02f,+1.84402287e-01f,-1.44339591e-01f,+1.57095224e-01f,+8.35505724e-02f,
+1.27028659e-01f,-1.47946194e-01f,-8.91019478e-02f,-1.04304820e-01f,+1.77393500e-02f,
+5.77620491e-02f,-7.73566365e-02f,+1.44250348e-01f,-6.69905171e-02f,-4.92799804e-02f,
+1.78417563e-02f,-3.44432741e-02f,+4.41659503e-02f,+9.16957557e-02f,+2.11286638e-02f,
-9.68173146e-02f,+1.45318791e-01f,-1.11495055e-01f,-1.39578814e-02f,+1.80709094e-01f,
+1.53815418e-01f,+1.17704965e-01f,-3.64344846e-03f,+2.47014258e-02f,+2.92465743e-02f,
-1.70360908e-01f,+1.85197517e-01f,+4.14220095e-02f,-8.86813924e-02f,-1.90873206e-01f,
+1.70318484e-01f,+3.77883040e-03f,+8.14614668e-02f,+3.20966616e-02f,-1.86207294e-01f,
+1.50400728e-01f,-4.22492102e-02f,-1.52907893e-02f,+2.98624299e-02f,+1.28742233e-01f,
+8.08241367e-02f,-1.77240998e-01f,-1.49496257e-01f,-1.61742583e-01f,-4.77566049e-02f,
+2.61985511e-02f,-1.18057929e-01f,+1.70334131e-02f,-1.40745580e-01f,+8.31109211e-02f,
-1.45379126e-01f,-1.91751853e-01f,-7.68698603e-02f,-1.10008642e-01f,+1.61553293e-01f,
-4.06480916e-02f,-1.77700743e-01f,+8.16857964e-02f,+1.34160638e-01f,-1.16668738e-01f,
-2.73359362e-02f,-1.39132559e-01f,-7.85504282e-03f,+1.22856550e-01f,-1.09269284e-01f,
-3.77721228e-02f,-1.20542392e-01f,+1.43061370e-01f,+4.25326042e-02f,+1.89906210e-01f,
-1.32409200e-01f,+4.53438275e-02f,+1.38609394e-01f,+1.41525745e-01f,+4.35698628e-02f,
-1.78986356e-01f,+1.49875972e-02f,+6.44841269e-02f,+2.60842051e-02f,+1.77720562e-01f,
-3.76705229e-02f,-3.45003349e-03f,+1.13414869e-01f,+5.06682843e-02f,+1.21776730e-01f,
-3.53642367e-02f,-1.49900898e-01f,+5.41888503e-03f,+6.03983812e-02f,-1.73493661e-02f,
-9.25702155e-02f,+9.71256495e-02f,+1.06576033e-01f,+1.04286663e-01f,+7.96022415e-02f,
-1.37904331e-01f,+1.11648113e-01f,+5.18047437e-02f,-2.03653220e-02f,+4.58348915e-02f,
-1.14891805e-01f,-1.63815737e-01f,+4.03025374e-02f,+1.52683347e-01f,+1.26401380e-01f,
-1.67318568e-01f,+1.78220436e-01f,-3.45055759e-02f,-1.38290778e-01f,-1.72860309e-01f,
-1.60836011e-01f,-1.46772504e-01f,-7.15081915e-02f,+1.79721639e-01f,+5.99301159e-02f,
+1.59826912e-02f,-9.81560796e-02f,+1.08977363e-01f,-3.31550241e-02f,+1.31692618e-01f,
-2.23408137e-02f,-1.73323631e-01f,-5.80671690e-02f,+2.76111513e-02f,+4.69876491e-02f,
-6.62967265e-02f,+3.54627483e-02f,+7.58783221e-02f,-3.98260131e-02f,+1.65097952e-01f,
-1.34210020e-01f,-1.19222246e-01f,-1.68582439e-01f,-8.88961554e-02f,-1.06023878e-01f,
-4.27077413e-02f,+1.50697187e-01f,+1.83263078e-01f,-8.92064050e-02f,+7.22008049e-02f,
+5.73341809e-02f,-6.51034201e-03f,-4.87651564e-02f,-1.27709478e-01f,-7.05554336e-02f,
-1.02962323e-01f,-7.84433931e-02f,+7.29142576e-02f,-3.37586366e-02f,-2.26392830e-03f,
-1.09853588e-01f,-3.81350890e-02f,-3.09101343e-02f,-3.02360877e-02f,-2.74233818e-02f,
+9.81581211e-02f,+1.45067960e-01f,-1.79482752e-03f,+8.80536959e-02f,+6.06044084e-02f,
-1.81926385e-01f,-1.39773384e-01f,-1.43813401e-01f,-2.95707248e-02f,-5.00967540e-02f,
-1.23247251e-01f,-7.66690969e-02f,-1.69943780e-01f,-1.32808089e-01f,-4.10836004e-02f,
+1.89714760e-01f,-1.34426594e-01f,+4.60447744e-03f,-9.14283097e-02f,+9.67965403e-04f,
+5.17904796e-02f,-1.77159861e-01f,-1.36278629e-01f,+1.74154401e-01f,+7.68136531e-02f,
+8.00964236e-02f,+1.14394389e-01f,+1.75241549e-02f,-6.21533953e-02f,-1.15687959e-01f,
+1.07452115e-02f,-6.96388632e-02f,-3.84647548e-02f,-1.93850435e-02f,-6.37432188e-02f,
+5.96250519e-02f,+5.80270775e-02f,-1.13881528e-01f,-6.36654496e-02f,+1.14029981e-01f,
+8.53341371e-02f,+1.35445163e-01f,+6.61673024e-02f,-2.38417964e-02f,-9.51632485e-02f,
+7.96330627e-03f,-1.73592046e-01f,+5.87532436e-03f,-1.09889954e-01f,+6.11791350e-02f,
-1.80396393e-01f,+1.17044739e-01f,+1.25927523e-01f,+1.73956305e-01f,+7.04545006e-02f,
+9.22969878e-02f,+9.84196514e-02f,-7.95403719e-02f,+1.21043019e-01f,+5.86735755e-02f,
-1.07374974e-01f,-9.13962051e-02f,+3.19370106e-02f,+1.39884681e-01f,-1.67129815e-01f,
+6.54384121e-03f,-1.14798568e-01f,-7.70869106e-02f,-1.16007768e-01f,-1.11090213e-01f,
+6.80349767e-02f,-9.82157588e-02f,+1.22835867e-01f,+5.54873757e-02f,+1.88822541e-02f,
+1.16506688e-01f,-1.82572380e-03f,+1.57663554e-01f,+7.58661404e-02f,-1.79587662e-01f,
+5.11499941e-02f,+1.02544196e-01f,+1.49838820e-01f,+1.24049142e-01f,-9.04529691e-02f,
-1.55593291e-01f,-9.72611234e-02f,+5.58175743e-02f,-2.39877347e-02f,+1.83036342e-01f,
-1.49028540e-01f,+2.58613583e-02f,+4.12140489e-02f,-5.04017062e-02f,-1.75981373e-01f,
+1.06626280e-01f,-1.74346864e-02f,+8.72390270e-02f,-1.40710056e-01f,-7.85317272e-02f,
-1.73700824e-01f,-8.17797408e-02f,+1.17194481e-01f,+2.12587547e-02f,-7.09866956e-02f,
+1.71685882e-03f,+1.74914777e-01f,+2.34126337e-02f,-3.51463258e-02f,-7.27339387e-02f,
-7.56959915e-02f,+1.68496165e-02f,+5.66075295e-02f,-8.01405236e-02f,+1.37805730e-01f,
+3.36650833e-02f,-7.91772604e-02f,+2.03492474e-02f,-1.69330314e-01f,+5.85261956e-02f,
-1.26595587e-01f,+8.25032039e-05f,+1.67265743e-01f,+8.33177641e-02f,-1.68191105e-01f,
-1.18891470e-01f,-1.52373597e-01f,-1.22709572e-01f,-1.87073052e-01f,-4.53562923e-02f,
+8.91054608e-03f,-1.09262496e-01f,-6.07150644e-02f,-1.10920742e-01f,+1.40078440e-01f,
+1.84055984e-01f,-1.10141292e-01f,+1.53503135e-01f,+2.33362056e-02f,+6.58387095e-02f,
-1.60089403e-01f,-6.68704137e-02f,+1.17632799e-01f,+1.34520635e-01f,-1.70244843e-01f,
+4.84747738e-02f,+9.53519791e-02f,-1.08486056e-01f,+7.18115419e-02f,+1.17697157e-01f,
+1.31747574e-01f,-1.82280883e-01f,+4.37708385e-02f,+1.99148133e-02f,+9.77675468e-02f,
-1.47115201e-01f,-6.98335143e-03f,-1.31156594e-01f,-7.21335337e-02f,+1.52743056e-01f,
-1.72569215e-01f,+5.70744313e-02f,+1.21243328e-01f,+7.14844316e-02f,+1.61519587e-01f,
+1.68259040e-01f,-3.38636078e-02f,-1.08979195e-01f,+1.17562741e-01f,-3.67108434e-02f,
-5.86474091e-02f,-1.21078931e-01f,+6.80528134e-02f,-1.29304081e-02f,+1.73638865e-01f,
-1.41718328e-01f,+1.23803288e-01f,+1.06678776e-01f,+2.50274148e-02f,-9.24648419e-02f,
+1.21013284e-01f,-1.52826399e-01f,-6.89932331e-02f,-6.43121749e-02f,-1.48563638e-01f,
+3.64041664e-02f,+1.02881067e-01f,-7.97584057e-02f,-6.62599457e-03f,+1.75641105e-01f,
-1.08899847e-01f,+6.62264973e-03f,-1.28383338e-02f,-1.51051834e-01f,-1.84923723e-01f,
+3.95973660e-02f,+8.79540145e-02f,-1.77379400e-01f,+5.62551618e-02f,-1.27015799e-01f,
-1.92624666e-02f,+1.95219945e-02f,+9.45623443e-02f,+8.80476832e-02f,+2.82787606e-02f,
-1.16472647e-01f,+2.75685601e-02f,+1.34071961e-01f,-4.13279980e-02f,-1.73091903e-01f,
-1.77854449e-01f,+1.03592001e-01f,+1.55439675e-01f,+9.78378728e-02f,-5.55365048e-02f,
+1.16153717e-01f,-1.80516437e-01f,+6.73091635e-02f,+3.23283300e-02f,+1.05706796e-01f,
-1.51238501e-01f,-3.22120041e-02f,-1.21838510e-01f,-1.44268289e-01f,+4.25368547e-02f,
-1.96579471e-01f,-3.56747918e-02f,+1.00881293e-01f,+1.20544448e-01f,+1.18305400e-01f,
-1.19411722e-01f,+1.24852635e-01f,};
_ssdm_SpecConstant(conv2d_22_kernel_array);
# 3730 "vlsi_eval4.c"





k2c_tensor conv2d_22_kernel;


    for (i = 0; i < 432; ++i) {
_ssdm_Unroll(1, 0, 16, "");
 conv2d_22_kernel.array[i] = conv2d_22_kernel_array[i];
    }

    conv2d_22_kernel.ndim = 4;
    conv2d_22_kernel.numel = 432;
    conv2d_22_kernel.shape[0] = 3;
    conv2d_22_kernel.shape[1] = 3;
    conv2d_22_kernel.shape[2] = 3;
    conv2d_22_kernel.shape[3] = 16;
    conv2d_22_kernel.shape[4] = 1;


const float conv2d_22_bias_array[16] = {
+6.09136000e-03f,-9.43646883e-04f,-4.22003010e-04f,+1.99409528e-03f,+4.18979768e-03f,
+3.96934897e-03f,-8.57431907e-03f,+1.17801916e-04f,+0.00000000e+00f,-2.35763052e-03f,
-5.64247509e-03f,-3.55170947e-03f,-1.21942312e-02f,+8.36638082e-03f,+2.89002806e-03f,
+1.69447740e-03f,};
_ssdm_SpecConstant(conv2d_22_bias_array);
# 3839 "vlsi_eval4.c"



k2c_tensor conv2d_22_bias;


    for (i = 0; i < 16; ++i) {
_ssdm_Unroll(1, 0, 4, "");
 conv2d_22_bias.array[i] = conv2d_22_bias_array[i];
    }


    conv2d_22_bias.ndim = 1;
    conv2d_22_bias.numel = 16;
    conv2d_22_bias.shape[0] = 16;
    conv2d_22_bias.shape[1] = 1;
    conv2d_22_bias.shape[2] = 1;
    conv2d_22_bias.shape[3] = 1;
    conv2d_22_bias.shape[4] = 1;

size_t max_pooling2d_18_stride[2] = {2,2};
size_t max_pooling2d_18_pool_size[2] = {2,2};
const float max_pooling2d_18_output_array[1936] = {0};
_ssdm_SpecConstant(max_pooling2d_18_output_array);
# 3865 "vlsi_eval4.c"



k2c_tensor max_pooling2d_18_output;

    for (i = 0; i < 1936; ++i) {
_ssdm_Unroll(1, 0, 16, "");
 max_pooling2d_18_output.array[i] = max_pooling2d_18_output_array[i];
    }


    max_pooling2d_18_output.ndim = 3;
    max_pooling2d_18_output.numel = 1936;
    max_pooling2d_18_output.shape[0] = 11;
    max_pooling2d_18_output.shape[1] = 11;
    max_pooling2d_18_output.shape[2] = 16;
    max_pooling2d_18_output.shape[3] = 1;
    max_pooling2d_18_output.shape[4] = 1;


size_t conv2d_23_stride[2] = {1,1};
size_t conv2d_23_dilation[2] = {1,1};




k2c_tensor conv2d_23_output;

    for (i = 0; i < 2592; ++i) {
        conv2d_23_output.array[i] = 0.0;
    }


    conv2d_23_output.ndim = 3;
    conv2d_23_output.numel = 2592;
    conv2d_23_output.shape[0] = 9;
    conv2d_23_output.shape[1] = 9;
    conv2d_23_output.shape[2] = 32;
    conv2d_23_output.shape[3] = 1;
    conv2d_23_output.shape[4] = 1;


const float conv2d_23_kernel_array[4608] = {
+7.74891749e-02f,+8.82375762e-02f,+2.97969822e-02f,-6.63630590e-02f,-6.88034445e-02f,
+1.10054277e-01f,+2.49270275e-02f,-2.94289235e-02f,+3.02547440e-02f,-3.87765542e-02f,
+8.42274278e-02f,-3.38624418e-03f,-7.25816637e-02f,-1.12489127e-01f,-1.33929402e-02f,
+1.94729492e-02f,+9.31387171e-02f,-2.08596345e-02f,-9.93313119e-02f,+3.77998897e-03f,
-1.14853360e-01f,+1.70400497e-02f,+8.13035145e-02f,+1.10720485e-01f,+1.08822867e-01f,
-4.24885973e-02f,+1.58986356e-02f,-1.08242631e-02f,-4.34885547e-02f,-1.22215621e-01f,
+7.85399601e-02f,-9.58935395e-02f,-2.37980001e-02f,+3.95852607e-04f,-5.92180528e-02f,
-1.74949877e-02f,+9.52665806e-02f,-7.80257285e-02f,-1.85791478e-02f,+5.74270114e-02f,
-3.26731727e-02f,+1.16660729e-01f,+9.85824391e-02f,+5.97936288e-02f,+7.55913481e-02f,
-8.96912739e-02f,+4.44424041e-02f,+6.73567504e-02f,+5.85081708e-03f,-5.20629287e-02f,
+4.93081734e-02f,+1.63226966e-02f,+6.06830195e-02f,+1.13439173e-01f,-1.08388387e-01f,
+4.12468277e-02f,-9.95465182e-03f,-9.80838463e-02f,-4.06752191e-02f,-1.06283184e-02f,
+3.57004330e-02f,-5.47497086e-02f,+9.95843560e-02f,+6.89517111e-02f,+6.46141022e-02f,
-8.63635689e-02f,-1.13595061e-01f,+4.87310886e-02f,-4.68567014e-02f,-3.94285806e-02f,
-4.19241711e-02f,+2.62875855e-02f,+5.41137159e-02f,+4.71336991e-02f,+2.66149547e-02f,
-5.63191772e-02f,+1.02574617e-01f,-1.03611737e-01f,+6.48980513e-02f,+8.30789953e-02f,
+9.00067836e-02f,-6.63676485e-02f,+6.15463592e-02f,-5.82250692e-02f,-4.24538180e-02f,
-7.39257708e-02f,+2.20398232e-02f,+4.18960564e-02f,+8.51643980e-02f,-7.30445608e-02f,
+8.86256471e-02f,+5.42807020e-02f,+3.18782404e-02f,-1.19051702e-01f,+2.35411115e-02f,
-1.10200634e-02f,-8.16743672e-02f,-7.94122890e-02f,-7.70881847e-02f,+3.82676907e-02f,
-1.25532746e-02f,+5.95495962e-02f,-4.20444310e-02f,+1.05280302e-01f,+7.82498717e-02f,
+4.65597492e-03f,-3.30558009e-02f,-1.00311548e-01f,+9.08644199e-02f,-6.26259148e-02f,
-7.37624764e-02f,-5.06016845e-03f,-4.14055735e-02f,-1.24312788e-02f,+1.55743593e-02f,
-1.32501200e-01f,+7.01140091e-02f,+9.28894728e-02f,+4.58043851e-02f,-2.38393024e-02f,
+4.44513932e-02f,-1.08185839e-02f,+5.03840931e-02f,-7.36550763e-02f,-9.34445634e-02f,
-5.40063269e-02f,-1.20897681e-01f,-4.55381423e-02f,+8.91800970e-02f,-2.15519294e-02f,
+4.75110933e-02f,+1.60765089e-02f,+3.84088308e-02f,+3.24655063e-02f,-8.83071423e-02f,
-1.33136464e-02f,-2.81360988e-02f,+4.77678552e-02f,+8.18508212e-04f,+5.61313406e-02f,
-2.18202583e-02f,+1.44103691e-02f,+3.04686036e-02f,-1.22343473e-01f,-6.14470802e-02f,
-9.39079095e-03f,+5.64507730e-02f,+6.70877397e-02f,+3.95978317e-02f,+3.92141268e-02f,
+8.98560807e-02f,+5.52666709e-02f,+8.40672255e-02f,+1.81558672e-02f,-7.83986524e-02f,
+1.26813967e-02f,+9.28205177e-02f,+1.32275090e-01f,+7.24221617e-02f,-2.47171503e-02f,
-3.60798091e-02f,-1.11838534e-01f,+4.71468754e-02f,-4.11502272e-02f,-1.68537833e-02f,
+1.00424454e-01f,+3.98058668e-02f,+2.37192046e-02f,-9.14300680e-02f,+5.43199517e-02f,
-9.19033736e-02f,-4.50394675e-02f,+9.83852893e-02f,+5.78387901e-02f,+5.91097027e-02f,
-1.54476445e-02f,-9.31859165e-02f,+6.43211678e-02f,+7.73486272e-02f,+5.97606972e-02f,
-5.86578026e-02f,+1.97270159e-02f,+4.45242338e-02f,+1.12478241e-01f,+1.05950542e-01f,
+1.06771179e-01f,+7.24659767e-03f,+1.11711863e-03f,+2.43795589e-02f,-5.45243323e-02f,
+9.24418215e-03f,+1.14584334e-01f,-8.76153409e-02f,+4.44179848e-02f,+9.36795697e-02f,
+6.63317069e-02f,+5.16455285e-02f,-2.25268994e-02f,-7.94155896e-03f,-2.15811115e-02f,
+7.62432888e-02f,+1.03737498e-02f,-1.48007488e-02f,-6.79120421e-03f,-3.58578376e-02f,
+1.72591209e-03f,-1.35735469e-02f,-8.67937459e-04f,+9.67794433e-02f,-8.56117681e-02f,
-9.42662284e-02f,-7.70061314e-02f,-5.29305004e-02f,+1.10266678e-01f,-5.59203327e-02f,
-3.87708209e-02f,-1.10833831e-01f,-7.59749562e-02f,+4.70390916e-02f,+4.51065116e-02f,
+4.29768935e-02f,+4.89178710e-02f,+7.76593387e-02f,-1.09968521e-01f,-1.07998466e-02f,
-2.83396095e-02f,-1.47720026e-02f,+5.28355949e-02f,+1.07753180e-01f,+3.16088311e-02f,
+5.39047495e-02f,-2.55221017e-02f,+5.38935326e-02f,-1.18327275e-01f,-8.93789902e-02f,
-2.39470229e-02f,+2.01536976e-02f,+4.35450301e-02f,-8.77428576e-02f,-5.32021597e-02f,
+9.62049514e-02f,+4.54857089e-02f,-1.79784186e-02f,-2.18944196e-02f,-1.23881161e-01f,
+1.05151847e-01f,-6.78577051e-02f,-3.57230641e-02f,+4.96388972e-02f,-2.17725988e-02f,
-8.97299573e-02f,-7.59503990e-02f,-3.75796482e-02f,-8.38088244e-02f,+4.09889221e-02f,
-1.14453090e-02f,-7.46363103e-02f,+6.49826303e-02f,-6.81388378e-02f,-1.42065212e-02f,
-7.50340372e-02f,-1.17708758e-01f,-2.12583914e-02f,-1.07949659e-01f,+1.11604385e-01f,
-2.78374627e-02f,-8.51583555e-02f,-1.05640069e-01f,-1.59603953e-02f,-1.08932182e-02f,
+8.19552168e-02f,-6.86925054e-02f,-3.84686366e-02f,-5.12407348e-02f,-2.99845338e-02f,
-8.73287469e-02f,-7.95612261e-02f,-3.48959044e-02f,+7.76863322e-02f,+1.42210200e-02f,
-4.46945429e-02f,-5.07675931e-02f,-9.12575945e-02f,-1.13980532e-01f,+3.39014605e-02f,
-2.96128541e-02f,-1.90842897e-02f,+5.72141781e-02f,-1.09874435e-01f,+4.68649007e-02f,
-4.68232408e-02f,-8.40435177e-02f,+4.86589335e-02f,-6.41288459e-02f,-1.15274638e-01f,
-7.05737481e-03f,-1.18860707e-01f,-1.78504847e-02f,-5.26391566e-02f,+1.70632973e-02f,
-1.65886972e-02f,+6.50677308e-02f,-7.80923991e-04f,+1.13071233e-01f,-1.11952141e-01f,
+3.97438742e-03f,+1.10553905e-01f,+9.46400613e-02f,+7.97474235e-02f,-8.39625448e-02f,
+2.90107410e-02f,-3.05566122e-03f,-6.07830137e-02f,-5.00581525e-02f,-6.18860126e-02f,
-9.37731005e-03f,-9.60703939e-02f,+7.45797902e-02f,+7.97110572e-02f,+9.68278851e-03f,
-4.94199060e-02f,+4.15737517e-02f,+3.91048566e-02f,-4.63410132e-02f,-2.81600114e-02f,
-1.19403675e-01f,+6.31832406e-02f,-4.83685918e-02f,+5.70161175e-03f,+1.08838215e-01f,
+1.36820719e-01f,+8.07151943e-03f,-5.73242530e-02f,+4.10562530e-02f,-1.20091133e-01f,
+9.31454226e-02f,+4.20469269e-02f,-1.12707444e-01f,-4.83657867e-02f,-7.39396513e-02f,
-4.37637530e-02f,+5.97621612e-02f,-4.35312763e-02f,+8.95284861e-02f,+4.94611561e-02f,
-2.17017569e-02f,-4.57868502e-02f,-1.05172537e-01f,+2.02318951e-02f,+7.76895508e-02f,
+3.61131839e-02f,-1.25998378e-01f,+5.91905974e-02f,-3.06451153e-02f,+8.52882415e-02f,
-7.32269138e-02f,+6.72385916e-02f,+1.09232366e-01f,+1.10779338e-01f,+1.22616552e-02f,
+6.07624426e-02f,+3.16388570e-02f,-1.23572089e-01f,-1.16659246e-01f,+1.09763600e-01f,
-2.14152336e-02f,-7.19959736e-02f,+1.12751752e-01f,-1.11918487e-01f,+7.23904446e-02f,
+2.37229634e-02f,+6.74560517e-02f,-4.40284722e-02f,-4.38781194e-02f,-7.14566857e-02f,
-1.99237969e-02f,+7.56355003e-02f,-1.14926426e-02f,-7.57328421e-02f,+2.12886091e-02f,
-1.13816693e-01f,-5.93487453e-03f,-8.46913829e-03f,+1.04522422e-01f,-5.21540828e-02f,
+3.05372979e-02f,+9.64551717e-02f,-9.88249183e-02f,+1.39698386e-02f,-9.61898118e-02f,
-1.01562105e-01f,+7.77223930e-02f,-8.78468230e-02f,+8.03444311e-02f,+5.31209372e-02f,
-2.95164809e-02f,-7.31317028e-02f,+7.29440898e-03f,+7.90062025e-02f,+6.52534962e-02f,
-5.93395904e-02f,+8.09846967e-02f,-1.08270533e-01f,-2.12348774e-02f,-1.04861513e-01f,
+9.13358480e-02f,-8.22155550e-03f,+1.57475043e-02f,+7.96304829e-03f,+1.42325135e-02f,
-3.21331136e-02f,+1.74183380e-02f,-9.70433429e-02f,+8.74952972e-02f,-4.92833778e-02f,
-4.26135547e-02f,-6.26105964e-02f,-9.42509323e-02f,-3.07687446e-02f,+8.67044330e-02f,
+1.27020711e-02f,+8.78696889e-02f,-2.36491561e-02f,+5.08489944e-02f,+3.59907858e-02f,
-7.21000135e-02f,+2.87963431e-02f,+1.01075396e-02f,+5.57025298e-02f,+4.50761691e-02f,
+8.51941705e-02f,+6.87915757e-02f,+4.51034456e-02f,-3.09629412e-03f,-6.57209158e-02f,
+8.61282740e-03f,-6.92164898e-02f,-1.03486389e-01f,-1.19536258e-01f,+3.46910506e-02f,
+6.66459575e-02f,+2.53974348e-02f,+3.17459628e-02f,-1.29530683e-01f,-9.96015966e-04f,
+1.38522331e-02f,-2.19247378e-02f,+1.83523186e-02f,-1.85128041e-02f,-9.96662974e-02f,
+9.31072682e-02f,-9.06869620e-02f,-5.07236570e-02f,-8.31886977e-02f,+8.10349733e-03f,
-1.03000216e-01f,-1.01547934e-01f,-7.72947744e-02f,-8.18969086e-02f,-6.91709593e-02f,
+4.41716313e-02f,+2.45926008e-02f,+1.53288133e-02f,+8.52566734e-02f,+6.93761930e-02f,
-2.20974665e-02f,+1.10309765e-01f,-8.97947326e-02f,+1.20928064e-01f,-2.55930554e-02f,
+8.30967054e-02f,-6.24050274e-02f,+1.78165864e-02f,-1.42315820e-01f,+5.30591346e-02f,
-4.65787761e-02f,-2.59107873e-02f,+6.89681619e-02f,+7.80194774e-02f,-9.55952331e-02f,
+4.60628793e-02f,+9.69107598e-02f,-6.23365715e-02f,+9.18974057e-02f,-1.07729077e-01f,
-5.48720770e-02f,-1.04776196e-01f,+2.79195178e-02f,-8.30897689e-02f,-1.15626708e-01f,
-5.33931404e-02f,-1.01983599e-01f,-2.40965113e-02f,+4.45541367e-02f,-2.89530605e-02f,
-1.32866753e-02f,-6.90354109e-02f,-9.49054286e-02f,+5.27560003e-02f,+1.78161282e-02f,
+5.82976639e-02f,+8.98285676e-03f,+5.05047501e-04f,+7.85415340e-03f,-4.39953282e-02f,
-8.86412933e-02f,-6.71254545e-02f,+1.07821278e-01f,-2.02884227e-02f,+4.62130755e-02f,
-4.47414257e-02f,+8.16928521e-02f,-7.32295290e-02f,-8.07725638e-02f,+9.45633948e-02f,
+7.98436031e-02f,+9.83875915e-02f,+5.20191505e-04f,+1.15268372e-01f,-9.14667994e-02f,
+5.22912890e-02f,+8.23696202e-04f,+2.87908204e-02f,+5.27408496e-02f,+5.69304079e-02f,
-4.36095968e-02f,-2.18407288e-02f,-4.43011224e-02f,-4.77705449e-02f,+9.05339718e-02f,
+4.56751511e-03f,-1.06592318e-02f,-1.00127026e-01f,-9.33307856e-02f,+6.47367314e-02f,
+4.81481738e-02f,-4.59653093e-03f,+9.50799733e-02f,+3.90626267e-02f,-1.09430954e-01f,
-1.57065690e-04f,+1.11947201e-01f,+3.06815412e-02f,+8.42696205e-02f,+1.54260891e-02f,
-4.25844528e-02f,-1.07924417e-01f,+7.24814534e-02f,-1.12601370e-01f,+3.25205922e-02f,
+7.27561340e-02f,-5.56925982e-02f,-1.38872741e-02f,+1.06540762e-01f,-9.77171957e-02f,
+5.92847392e-02f,-5.13055362e-02f,+1.10693350e-02f,-1.14418957e-02f,-5.92645966e-02f,
-8.93124007e-03f,+2.37023085e-02f,+3.34266573e-02f,-7.68876821e-02f,+7.86610320e-02f,
-6.13590293e-02f,-1.07026905e-01f,+4.72231060e-02f,-7.67658576e-02f,+6.67037740e-02f,
+4.04958613e-02f,-9.64851677e-02f,-8.63988996e-02f,-6.19287491e-02f,-1.06233537e-01f,
-1.99676957e-02f,+1.04671903e-01f,+1.03877544e-01f,-9.78790596e-02f,+2.44963076e-03f,
+8.05670395e-03f,-2.35823262e-02f,-9.20089334e-02f,-3.92179042e-02f,-1.77705288e-02f,
-4.84303050e-02f,-1.29823787e-02f,+1.27057508e-02f,-1.01043329e-01f,+8.65094736e-02f,
+1.43154031e-02f,-3.51657979e-02f,-5.76669127e-02f,-5.19395731e-02f,-2.36316468e-03f,
-6.80792406e-02f,-7.06010386e-02f,+1.10057063e-01f,-4.12585810e-02f,+7.64590055e-02f,
-4.13178951e-02f,-6.83868080e-02f,+2.21330114e-02f,+6.16994984e-02f,+9.07784626e-02f,
+1.72262508e-02f,-8.87437686e-02f,-1.89063232e-02f,-3.69970240e-02f,-1.06776312e-01f,
-2.33173948e-02f,-4.21249866e-02f,-5.57859913e-02f,+1.15586765e-01f,+4.13147286e-02f,
-7.80158769e-03f,+2.57775281e-02f,-1.04114898e-01f,-1.96847785e-02f,-6.43658191e-02f,
+7.01839402e-02f,+8.31278041e-02f,-8.76537710e-02f,-6.18280657e-03f,-1.13769919e-01f,
+3.53546068e-02f,+8.30797553e-02f,-2.01365235e-03f,+7.21035004e-02f,-7.02855214e-02f,
-1.17967904e-01f,-3.52892652e-02f,-1.98402181e-02f,-1.02899596e-01f,-5.82143366e-02f,
-6.25161901e-02f,+9.36759487e-02f,-3.70134898e-02f,+3.68744992e-02f,+1.14547722e-02f,
+1.06834240e-01f,-6.85165897e-02f,-5.82693666e-02f,+3.24442983e-02f,+1.01837076e-01f,
-1.92867946e-02f,+3.12702581e-02f,-7.62237050e-03f,+1.01868547e-01f,+6.68793023e-02f,
+1.08518461e-02f,-3.84806916e-02f,-1.01398066e-01f,+3.48329321e-02f,+1.22492602e-02f,
-8.78805816e-02f,-4.88380156e-02f,+3.62801626e-02f,-6.69137165e-02f,+1.07200757e-01f,
+6.73703253e-02f,-1.10209316e-01f,-1.74257588e-02f,+3.75239961e-02f,-8.63413513e-02f,
-4.39012833e-02f,-4.23198044e-02f,-1.55515773e-02f,+5.30006215e-02f,-8.36630464e-02f,
+3.62686589e-02f,+7.66401589e-02f,+1.83219183e-03f,-3.87703106e-02f,+6.05903603e-02f,
+8.44071731e-02f,+8.37992355e-02f,-1.80056989e-02f,-4.17921990e-02f,-1.78703340e-03f,
+3.95572670e-02f,-5.56123490e-03f,-4.52338047e-02f,-1.10942900e-01f,-1.68686751e-02f,
-9.73722339e-02f,+1.10438175e-01f,+2.61693299e-02f,-8.17576125e-02f,-6.47374243e-02f,
-1.99340805e-02f,+2.54108720e-02f,-5.77772874e-03f,+5.24917655e-02f,+1.06018530e-02f,
-5.93908019e-02f,+1.23635959e-02f,-1.15762167e-01f,+1.38895875e-02f,-6.13955483e-02f,
+1.17340960e-01f,+6.27867505e-02f,-6.17889650e-02f,+1.80434175e-02f,+9.76886973e-02f,
-6.08957745e-02f,-2.50620320e-02f,-6.34884909e-02f,+3.04296967e-02f,-5.03277406e-02f,
+1.13038197e-02f,+1.02278940e-01f,+9.33147520e-02f,-1.14203036e-01f,-8.24591517e-02f,
-1.83422491e-02f,-4.87661846e-02f,+1.11206509e-01f,-1.60923153e-02f,-5.58821484e-02f,
+1.00979097e-01f,+1.51068652e-02f,+2.94942688e-02f,-1.01496521e-02f,+6.49307668e-02f,
+1.55644519e-02f,+7.78284967e-02f,-9.86936018e-02f,-3.12526198e-03f,-7.50241280e-02f,
-3.55233587e-02f,+4.60970141e-02f,-4.45505083e-02f,+2.96168569e-02f,-4.67578098e-02f,
-9.99489129e-02f,+7.48341531e-02f,-2.31023226e-02f,-3.67742106e-02f,-1.04048967e-01f,
-7.42963031e-02f,-5.82258590e-02f,-1.11941047e-01f,+5.66753186e-02f,-3.50518115e-02f,
+1.58752836e-02f,-5.20384349e-02f,+7.07267448e-02f,-7.88528621e-02f,-2.96655372e-02f,
-5.32523841e-02f,+4.11348566e-02f,-3.62267420e-02f,-1.07196458e-01f,+1.04777284e-01f,
-6.71428293e-02f,-1.23240583e-01f,+1.08323157e-01f,+9.41447616e-02f,-4.19799238e-02f,
+2.82921107e-03f,+2.05485523e-02f,-6.58331439e-02f,-5.68300858e-02f,+9.43257138e-02f,
+7.08735585e-02f,-4.44081426e-02f,-7.63563812e-03f,-1.49576887e-02f,+3.75033915e-03f,
-1.93118230e-02f,+2.52921209e-02f,+5.51783517e-02f,+9.02290121e-02f,+5.56186065e-02f,
-5.02386242e-02f,-1.01435930e-02f,-8.66941810e-02f,-1.29373968e-02f,+7.28404894e-02f,
+5.60267642e-02f,-7.48255774e-02f,+1.94559917e-02f,+2.13478580e-02f,+1.01830773e-01f,
+1.62801817e-02f,-9.55502242e-02f,+1.10603534e-01f,+3.05410996e-02f,+8.30983296e-02f,
+9.12806913e-02f,+6.27286732e-04f,+4.75666672e-03f,+1.95903257e-02f,+2.39222124e-02f,
+7.19525889e-02f,+3.48192528e-02f,+1.16621085e-01f,-4.18667942e-02f,+2.36769691e-02f,
-9.77691785e-02f,+1.98714752e-02f,-4.17132415e-02f,-1.74430478e-02f,-6.25045691e-03f,
+1.15877725e-01f,-3.43506634e-02f,+6.58824369e-02f,-4.56190258e-02f,-1.98521316e-02f,
-1.08427487e-01f,-9.80225578e-02f,+1.06039435e-01f,-6.99311197e-02f,-6.78615272e-02f,
+8.94320682e-02f,-1.69187540e-03f,-9.21933278e-02f,-4.63633239e-02f,+1.10435076e-02f,
-5.53372540e-02f,+1.51985176e-02f,+1.81874987e-02f,+9.99602228e-02f,+1.43004376e-02f,
+7.95459747e-02f,+5.54479212e-02f,-5.71022145e-02f,-2.36194879e-02f,+2.31555756e-02f,
-9.65270866e-03f,+8.52880999e-03f,+5.23189502e-03f,+3.08650937e-02f,-8.21749717e-02f,
+1.25308167e-02f,+9.05019864e-02f,-4.83456403e-02f,+1.12872049e-02f,+5.42706512e-02f,
+1.28700361e-01f,+9.39138457e-02f,+2.32738424e-02f,-1.38854757e-02f,-5.26488619e-03f,
-5.65769449e-02f,+7.26493150e-02f,-8.67899880e-02f,+1.39534697e-02f,-4.50692885e-02f,
-5.57477921e-02f,-1.03803359e-01f,+4.33761142e-02f,+9.19969603e-02f,+1.24137402e-01f,
+6.92741014e-03f,-7.77005255e-02f,-8.53950903e-02f,+5.57766259e-02f,+8.19266960e-02f,
+3.85041311e-02f,+6.28236234e-02f,-5.45327924e-02f,+1.19546659e-01f,-5.75458296e-02f,
-1.02638781e-01f,-4.78592291e-02f,-6.94860592e-02f,+6.35843426e-02f,-5.73643781e-02f,
+6.21682331e-02f,+3.37569527e-02f,+2.61325203e-03f,+1.16828596e-03f,-1.00924544e-01f,
-1.02889284e-01f,-1.17506340e-01f,-1.11369930e-01f,-3.20948400e-02f,-4.17406000e-02f,
-9.81891677e-02f,+1.27174985e-02f,-8.76217410e-02f,-4.36795391e-02f,-1.17785558e-01f,
-5.22195026e-02f,+7.99972117e-02f,-6.69304207e-02f,-1.20602913e-01f,+1.10128760e-01f,
-8.06070343e-02f,-2.34781317e-02f,+6.28016368e-02f,-1.83311256e-03f,+6.63483739e-02f,
+9.28143635e-02f,-1.10158026e-01f,-1.11210674e-01f,-8.02828837e-03f,+3.01051959e-02f,
-7.89620876e-02f,+4.22767363e-02f,-1.10555395e-01f,-7.88003579e-02f,-7.39028212e-03f,
+4.62442636e-02f,-1.24708395e-02f,-1.10414766e-01f,-9.71061438e-02f,-1.12825654e-01f,
+3.35142389e-02f,+6.13587908e-03f,-3.96018438e-02f,-8.36613551e-02f,-1.08112572e-02f,
+5.19959591e-02f,+9.84604508e-02f,-8.74695741e-03f,+2.80866828e-02f,+1.13096401e-01f,
+6.52178228e-02f,-1.14331737e-01f,-6.13054633e-03f,+1.06464632e-01f,-8.04468244e-03f,
-4.96423542e-02f,+2.44833063e-02f,-1.07274503e-01f,-9.97677073e-02f,+1.57929342e-02f,
-9.64392573e-02f,-1.08790673e-01f,-1.06323764e-01f,+7.24454448e-02f,+9.65341553e-02f,
-6.15760013e-02f,+1.20346107e-01f,-8.91106203e-02f,+4.94775064e-02f,-9.06681567e-02f,
-2.47836262e-02f,-5.13556227e-02f,+4.57201451e-02f,+4.76652384e-02f,-6.53424561e-02f,
-1.10804088e-01f,-1.38135878e-02f,+9.64927822e-02f,-2.99820453e-02f,-5.35424799e-02f,
+2.68103811e-03f,+5.50943008e-03f,-4.99933492e-03f,-4.14851084e-02f,+9.96868759e-02f,
+6.58002421e-02f,-3.91509980e-02f,-5.74814789e-02f,+2.70250775e-02f,-8.25980306e-02f,
-2.68500708e-02f,-1.15558811e-01f,-3.48401889e-02f,+2.23524112e-04f,+5.94270043e-02f,
+9.54831839e-02f,+4.22846749e-02f,+6.02906905e-02f,+1.17626324e-01f,-3.53065766e-02f,
+3.84784155e-02f,-1.06038041e-01f,-6.74093738e-02f,+7.33136013e-02f,+3.27940919e-02f,
-1.98165998e-02f,-9.71547514e-02f,-9.57739279e-02f,+1.04697915e-02f,-5.82060404e-02f,
-2.85439864e-02f,-9.56841856e-02f,+8.57066810e-02f,-4.53001894e-02f,-4.37247045e-02f,
+1.31514752e-02f,-8.24436694e-02f,-4.36742753e-02f,+5.74291870e-02f,-5.86439036e-02f,
+9.73410010e-02f,-8.63470286e-02f,-5.83280548e-02f,-9.22398828e-03f,-6.76599219e-02f,
+5.20293973e-02f,+1.17225498e-01f,+1.32358745e-01f,-8.45133066e-02f,+1.71029642e-02f,
+4.18905430e-02f,+1.04390591e-01f,-8.45011845e-02f,-7.62186423e-02f,+3.87677550e-02f,
-5.56051806e-02f,-1.01039864e-01f,-9.67888162e-02f,-7.22057521e-02f,-3.56549695e-02f,
+3.87228802e-02f,+1.93204207e-03f,-1.19657658e-01f,-9.37525854e-02f,-7.00000525e-02f,
-5.98166175e-02f,+1.02097750e-01f,+8.83340016e-02f,+1.73276812e-02f,-2.25836374e-02f,
-7.49415904e-02f,+7.02279061e-02f,+8.03758278e-02f,-1.15889177e-01f,-3.52912396e-03f,
+8.68708864e-02f,-4.93039861e-02f,+1.98484920e-02f,-1.38722174e-02f,-6.43163696e-02f,
-4.29511815e-02f,-4.33687046e-02f,-9.04402956e-02f,+8.96171257e-02f,+1.03057235e-01f,
-1.33398697e-02f,-2.33126595e-03f,-9.44854543e-02f,+3.51318531e-02f,-5.80730736e-02f,
+4.98627648e-02f,+3.80000435e-02f,-1.89939197e-02f,+8.06135684e-02f,+7.65290260e-02f,
+1.15430400e-01f,-3.50459255e-02f,+4.90315855e-02f,+6.96861297e-02f,-3.56965028e-02f,
-8.23125988e-02f,-2.80932020e-02f,+5.32479063e-02f,+1.14876658e-01f,+1.23283146e-02f,
+1.46482810e-02f,-1.39950244e-02f,+3.03519368e-02f,+8.70230347e-02f,-5.43943122e-02f,
+5.18382825e-02f,-1.04592152e-01f,-1.18478164e-02f,+7.34456405e-02f,-6.79291263e-02f,
+5.17619327e-02f,+1.20415367e-01f,-1.05945908e-01f,-9.33016359e-04f,-8.55116844e-02f,
+6.05010837e-02f,+1.11584656e-01f,-1.16942778e-01f,+9.37853679e-02f,-1.16182767e-01f,
+5.23925163e-02f,-8.04875791e-02f,-8.51169787e-03f,+9.80586857e-02f,+7.61505496e-03f,
-6.21684566e-02f,+3.40732820e-02f,+1.65541843e-02f,+1.06237277e-01f,-3.73657942e-02f,
-1.19560368e-01f,-6.59491122e-02f,-1.34829357e-02f,+5.52459480e-03f,+6.57459795e-02f,
+9.19532776e-02f,-8.03687945e-02f,-8.90238807e-02f,-4.09877561e-02f,+4.07538041e-02f,
+9.90118831e-02f,+1.07407831e-01f,-7.32472241e-02f,-1.01315580e-01f,-4.19548303e-02f,
+5.36428988e-02f,-6.61317483e-02f,-5.31212986e-03f,-5.37316538e-02f,+2.06459388e-02f,
-4.46597449e-02f,-1.16263255e-01f,-8.78222138e-02f,-4.45361668e-03f,-7.92984366e-02f,
+7.98545778e-02f,-3.26969731e-03f,-1.29501065e-02f,+4.61206958e-02f,-7.85532817e-02f,
+2.30870750e-02f,-1.09404735e-01f,-1.17591679e-01f,-6.10887110e-02f,-9.96436365e-03f,
-3.92427891e-02f,+4.70448248e-02f,+1.13753773e-01f,+5.67989387e-02f,+4.26650532e-02f,
-1.37660056e-02f,-4.28520814e-02f,-8.07402357e-02f,-4.14425544e-02f,-5.57657182e-02f,
-7.85513669e-02f,-9.99580473e-02f,+6.01533568e-03f,+1.03086703e-01f,-8.94612819e-02f,
-3.13470252e-02f,+6.12075925e-02f,+5.60428053e-02f,+6.32307753e-02f,-6.77311793e-02f,
-1.59263890e-02f,-7.35383406e-02f,+1.13078646e-01f,-9.96763483e-02f,-7.83429593e-02f,
-8.94989818e-02f,-3.08008157e-02f,-7.75895873e-03f,-6.10876419e-02f,-8.47716480e-02f,
-3.33542265e-02f,+9.84426886e-02f,-4.59937342e-02f,+7.02417642e-02f,-1.15741894e-01f,
+5.78903221e-02f,-5.33848368e-02f,-2.45506875e-02f,+2.06407681e-02f,-9.10329521e-02f,
+7.26436311e-03f,+7.73599520e-02f,+5.89729436e-02f,-6.42731041e-03f,+5.66747796e-04f,
-5.63602820e-02f,+2.02730633e-02f,-6.06668815e-02f,+8.83768275e-02f,+1.03419544e-02f,
-1.04161911e-01f,-7.38475397e-02f,-4.60387906e-03f,+5.36981635e-02f,-8.16225037e-02f,
+8.89807269e-02f,+7.48796854e-04f,+3.95167880e-02f,+1.13675803e-01f,-2.49747443e-03f,
+9.28439125e-02f,+1.23075931e-03f,+4.66884393e-03f,-3.83201130e-02f,-2.18131654e-02f,
-1.03016019e-01f,+3.37841585e-02f,-5.95546886e-02f,+8.61537158e-02f,-7.58341104e-02f,
-1.65410116e-02f,+5.89383319e-02f,-5.09498902e-02f,-1.31537423e-01f,-1.02773411e-02f,
+1.09450899e-01f,+4.62878309e-02f,+2.04219148e-02f,-4.19125482e-02f,-1.79565344e-02f,
-9.73227173e-02f,-9.40128788e-02f,+5.93451597e-02f,+5.03757503e-04f,-1.16277017e-01f,
+8.14165547e-02f,+1.85686853e-02f,-8.06832165e-02f,+9.54092443e-02f,+1.11307669e-02f,
-5.41069545e-02f,+5.02129905e-02f,-6.71960413e-02f,-1.17881238e-01f,+5.16840927e-02f,
-6.85865283e-02f,+4.84496355e-02f,-1.47254914e-02f,+8.61050859e-02f,+3.27873491e-02f,
+8.09115916e-02f,-3.99799421e-02f,+9.44403484e-02f,+8.54653306e-03f,-8.27130750e-02f,
-9.06320959e-02f,-3.44708413e-02f,-1.61928162e-02f,+1.23040378e-01f,+7.32456371e-02f,
-2.38697771e-02f,-4.19257432e-02f,+3.74108627e-02f,+3.29391137e-02f,-1.19130261e-01f,
+3.40807624e-02f,-1.63017847e-02f,+7.57169351e-03f,+7.14684576e-02f,-7.71165639e-02f,
-1.06791332e-01f,-4.30865549e-02f,+9.29604401e-04f,-1.06016174e-01f,-2.28272378e-02f,
-9.17806700e-02f,-6.55838698e-02f,-2.07572747e-02f,-2.63253506e-02f,-8.36084560e-02f,
-6.26556054e-02f,+4.60858941e-02f,-1.88683402e-02f,+4.23513725e-02f,-2.17878968e-02f,
-1.02665409e-01f,+9.08630062e-03f,-5.54301627e-02f,+7.74047598e-02f,-1.15628056e-01f,
+8.82213041e-02f,-1.05153799e-01f,+1.21426322e-01f,-7.98148587e-02f,-1.00621670e-01f,
-4.69281338e-02f,+3.73269059e-02f,-9.47946906e-02f,-1.00760557e-01f,+9.81498733e-02f,
-9.20916498e-02f,-8.77046511e-02f,-4.96111624e-03f,-5.17695621e-02f,-1.08263172e-01f,
-1.56130837e-02f,+2.42689475e-02f,+5.63873686e-02f,-2.51593199e-02f,-3.19879910e-05f,
+1.45542696e-02f,-7.22313821e-02f,-8.73404667e-02f,+4.72415313e-02f,+1.36960670e-02f,
-1.07972220e-01f,-3.23198885e-02f,+7.34865740e-02f,-4.26181629e-02f,-3.14331502e-02f,
-2.43071243e-02f,+5.48825935e-02f,-1.14031754e-01f,+6.49266914e-02f,+5.61647490e-02f,
-2.29584873e-02f,-5.88115156e-02f,+8.77764001e-02f,-6.97678998e-02f,+2.32593790e-02f,
+1.17846839e-01f,+1.16637997e-01f,+7.80104846e-03f,+1.07209302e-01f,-1.99309662e-02f,
-3.76820639e-02f,+8.82147327e-02f,-5.66480905e-02f,+4.80704531e-02f,-1.43874735e-02f,
+5.71332499e-02f,-5.81686907e-02f,-1.03805460e-01f,+7.55090341e-02f,-5.42488396e-02f,
+8.44659135e-02f,-7.80495107e-02f,-5.06641082e-02f,+2.39049867e-02f,-1.06716692e-01f,
+1.00565329e-01f,-4.48492952e-02f,+9.15683992e-03f,-7.78867006e-02f,-1.07000515e-01f,
-6.08998351e-02f,+9.72369760e-02f,+4.87773959e-03f,+8.78586546e-02f,-9.60332304e-02f,
+6.53533451e-03f,+7.14722148e-04f,+2.22047716e-02f,-6.39488772e-02f,+9.90627632e-02f,
+1.55211324e-02f,+1.49936583e-02f,+4.49277721e-02f,+1.28148710e-02f,+3.32946703e-02f,
-2.28984356e-02f,+5.87785468e-02f,-6.42874688e-02f,-6.54862896e-02f,-1.13913402e-01f,
+5.85258864e-02f,+1.92195848e-02f,-2.49566957e-02f,-1.05122216e-01f,-4.34424281e-02f,
-1.00154340e-01f,+3.76691669e-02f,-8.02227855e-02f,+1.06638812e-01f,-1.11947469e-01f,
-3.47312763e-02f,+5.05036786e-02f,+4.33601514e-02f,-5.99841364e-02f,+4.65258658e-02f,
+2.67693475e-02f,+2.93593109e-02f,+7.07994550e-02f,+3.34576815e-02f,-3.37674574e-05f,
+6.00077445e-03f,+7.54478201e-02f,+8.37282762e-02f,+1.06629178e-01f,+4.21745144e-02f,
+4.45176139e-02f,+7.46650323e-02f,+7.67544657e-03f,+1.07941329e-01f,+2.03087647e-02f,
-1.23442382e-01f,+6.26460761e-02f,-4.83816350e-03f,+5.94193339e-02f,-3.97772063e-03f,
+2.92813871e-02f,-7.65818879e-02f,+2.15597078e-02f,+2.55351700e-02f,+3.79442498e-02f,
+3.94366048e-02f,-1.22029550e-01f,+7.42701665e-02f,-1.09027684e-01f,-3.45268101e-02f,
+2.98742740e-03f,+3.09997983e-02f,-6.29820600e-02f,+1.08083375e-01f,+3.79993347e-04f,
+1.21540472e-01f,-2.01005526e-02f,+6.78813234e-02f,-8.40418115e-02f,+4.10819538e-02f,
+1.15744388e-02f,+5.42570353e-02f,+1.01184942e-01f,+3.47035378e-02f,+2.97182426e-02f,
+3.94805521e-02f,+1.47412857e-02f,-8.56799930e-02f,-1.05413228e-01f,+8.83040950e-02f,
-6.72483966e-02f,+9.96108428e-02f,+3.08727734e-02f,+2.65652929e-02f,+4.06328812e-02f,
-7.95994550e-02f,+7.77851045e-02f,-2.72793602e-02f,+5.38442060e-02f,-6.15377985e-02f,
+1.06490001e-01f,-7.61854574e-02f,-1.18325092e-01f,-1.22159034e-01f,+3.12267919e-03f,
+1.06710091e-01f,-7.74733052e-02f,-7.85193369e-02f,+8.11377764e-02f,+7.20947683e-02f,
+9.09598023e-02f,+4.48396727e-02f,-7.15753138e-02f,+5.43735139e-02f,+4.04470824e-02f,
-8.48122239e-02f,+4.60392162e-02f,+9.28293765e-02f,+5.11721410e-02f,-9.53842103e-02f,
-4.16872092e-02f,+5.38950041e-02f,+1.07434422e-01f,+4.51519638e-02f,-5.02203517e-02f,
+2.89998539e-02f,+7.25137368e-02f,-1.18918315e-01f,+1.75586641e-02f,+6.46455884e-02f,
-1.03392698e-01f,-6.27666861e-02f,-2.07420962e-05f,+4.57581356e-02f,-1.72135998e-02f,
-1.29495058e-02f,+2.08516493e-02f,-3.62558179e-02f,+5.02852984e-02f,-6.63911551e-02f,
-9.08648372e-02f,-7.43608773e-02f,+6.06194213e-02f,+5.98910563e-02f,-1.08946688e-01f,
+1.35564074e-01f,-4.62778248e-02f,+1.14747614e-01f,+2.09955052e-02f,+1.01793697e-02f,
+1.05087087e-01f,+2.22300310e-02f,-7.25773424e-02f,+1.02124527e-01f,-6.21626116e-02f,
-3.30432020e-02f,+5.52122146e-02f,-1.31802738e-01f,+5.07752970e-02f,-9.55246091e-02f,
-1.01276755e-01f,+1.07009090e-01f,-8.38504434e-02f,+2.51307860e-02f,+2.98260967e-03f,
-3.70975137e-02f,+9.44620967e-02f,-6.86789826e-02f,+1.12722166e-01f,-1.04910620e-01f,
+7.15417862e-02f,-1.07876383e-01f,+3.76845933e-02f,-7.03358054e-02f,-7.56373331e-02f,
-3.61121483e-02f,-8.54009092e-02f,-1.44974329e-02f,+7.31726959e-02f,+5.82369901e-02f,
+1.11988328e-01f,+4.41039354e-02f,+2.39681173e-02f,+3.13969478e-02f,+8.50979760e-02f,
+1.31894834e-03f,-5.97804710e-02f,+1.91141050e-02f,-7.10516842e-03f,-1.01530187e-01f,
+5.09082302e-02f,-3.63413878e-02f,-9.54756886e-03f,+1.56437755e-02f,-1.37423826e-02f,
+6.03561625e-02f,+8.79324302e-02f,+5.50475791e-02f,+5.39289974e-02f,+1.20415546e-01f,
+8.56501535e-02f,-8.97922963e-02f,+6.90587536e-02f,+2.03968883e-02f,+5.88847622e-02f,
-9.84836891e-02f,+6.30266294e-02f,+3.11041474e-02f,+8.35649148e-02f,+2.57017016e-02f,
-1.57088228e-02f,+9.55287367e-02f,+7.78404251e-02f,-8.04428309e-02f,+5.41118206e-03f,
+2.98813153e-02f,+2.70113032e-02f,-8.72823149e-02f,+6.81154579e-02f,-1.22191586e-01f,
+8.56755897e-02f,+9.27758142e-02f,+5.74005023e-02f,+7.91624114e-02f,+5.09006269e-02f,
+9.67290476e-02f,+2.40175389e-02f,-7.94948041e-02f,+2.38744561e-02f,-1.12010621e-01f,
-9.53198597e-02f,-1.13873720e-01f,-7.21654743e-02f,+8.06845501e-02f,+1.21524207e-01f,
+7.66426697e-02f,-8.88778716e-02f,+3.63222510e-02f,+7.76902065e-02f,+3.64163406e-02f,
+4.19218205e-02f,-4.53802980e-02f,+4.05460931e-02f,-6.42193258e-02f,-1.10311225e-01f,
+1.47347720e-02f,+1.14547931e-01f,-6.83963969e-02f,+8.85897875e-03f,+1.09753348e-01f,
+1.11816198e-01f,+7.54171908e-02f,-2.35860888e-02f,+1.12434387e-01f,+1.02964416e-02f,
+1.06930144e-01f,+5.47410734e-02f,-8.64179432e-02f,-6.39906302e-02f,+6.61278442e-02f,
-4.34784405e-02f,+7.07659051e-02f,+5.68020940e-02f,+5.57106212e-02f,-7.66707882e-02f,
+1.03922717e-01f,+3.54307368e-02f,-4.03278321e-02f,+1.11627094e-01f,+1.90486275e-02f,
-2.77917664e-02f,-7.68981054e-02f,+9.75046493e-03f,+4.73936610e-02f,-3.66515364e-04f,
+1.06451891e-01f,+1.74056664e-02f,-9.96767264e-03f,+4.12406102e-02f,+9.65309814e-02f,
+7.77930766e-02f,+5.39736673e-02f,-8.31528232e-02f,+7.78338760e-02f,+1.93203264e-03f,
-7.09705651e-02f,-8.00212175e-02f,-8.50333497e-02f,-1.22584201e-01f,-1.06116243e-01f,
+5.35889762e-03f,+1.61030814e-02f,+8.59522447e-02f,-1.77744254e-02f,-8.98095593e-02f,
-5.61415181e-02f,-2.10387241e-02f,+1.13992222e-01f,-3.47183160e-02f,+2.16680160e-03f,
-2.34230906e-02f,+8.99317861e-03f,-3.35140228e-02f,-5.92577010e-02f,-8.13916996e-02f,
+9.26092565e-02f,+1.14559278e-01f,-5.00177331e-02f,-6.71205148e-02f,+4.50368375e-02f,
-5.48352227e-02f,-4.90513593e-02f,+1.57656856e-02f,-9.09955986e-03f,+1.12015188e-01f,
-3.38810384e-02f,+1.04754843e-01f,-4.84968312e-02f,-1.10948965e-01f,+8.47721174e-02f,
+2.64157075e-02f,+1.09737225e-01f,+5.25004081e-02f,-3.48905474e-03f,+6.46983981e-02f,
+3.02803740e-02f,+5.27769886e-02f,-1.81084946e-02f,+9.83285978e-02f,+6.11460917e-02f,
-6.47862330e-02f,-7.18303993e-02f,+5.97273484e-02f,-3.79573479e-02f,+1.14728939e-02f,
-2.56169494e-02f,+8.89401510e-02f,-3.84632051e-02f,+3.31306178e-03f,-3.05916332e-02f,
-4.82887104e-02f,-5.39734028e-02f,-4.10023071e-02f,-1.43218040e-02f,-1.53563628e-02f,
+2.12356262e-02f,-1.27659841e-02f,+2.10703425e-02f,+1.14773974e-01f,+1.50889521e-02f,
-6.58927783e-02f,+1.10711336e-01f,+6.61391988e-02f,-2.32499279e-03f,+1.04027726e-01f,
+6.41561225e-02f,+8.14013556e-02f,-3.71700674e-02f,-3.85629870e-02f,+2.78789289e-02f,
-1.09605968e-01f,+7.10549206e-02f,+9.12578776e-02f,+6.21142723e-02f,-1.01571240e-01f,
+6.61705807e-02f,-7.35361651e-02f,-4.66567017e-02f,+4.23062453e-03f,-7.08522052e-02f,
+1.87450331e-02f,-6.70733452e-02f,-6.23545796e-03f,-5.25057763e-02f,-4.76471484e-02f,
-1.10698402e-01f,+2.08159294e-02f,-8.68320763e-02f,-4.00280505e-02f,-2.73038703e-03f,
-5.94264083e-02f,-8.97743106e-02f,-5.96751906e-02f,+4.13957238e-02f,-1.06838971e-01f,
-1.10598162e-01f,+1.04266100e-01f,-9.11619216e-02f,+4.20824215e-02f,+1.42908767e-02f,
-9.33885872e-02f,+1.23213090e-01f,+4.35279608e-02f,-6.42320514e-02f,+1.34832142e-02f,
+7.55360816e-03f,+5.52115180e-02f,-5.13242669e-02f,+1.30895553e-02f,+6.86447769e-02f,
-4.11806628e-02f,-7.43641034e-02f,+6.98135346e-02f,-1.17153853e-01f,+9.71382931e-02f,
-3.64482552e-02f,-9.14244652e-02f,+4.73665260e-02f,+5.21736592e-02f,+4.73427176e-02f,
+8.40217993e-02f,+2.55995407e-03f,+6.53772727e-02f,-1.15481317e-01f,+7.70209804e-02f,
+9.30376574e-02f,+5.03441319e-02f,-7.79247731e-02f,-6.31238744e-02f,+1.94846019e-02f,
-6.23820424e-02f,+5.53991720e-02f,-7.34383091e-02f,+2.41097938e-02f,+5.64120933e-02f,
+1.05579816e-01f,-2.65699197e-02f,+2.20955070e-03f,-6.64998144e-02f,-3.78388762e-02f,
+1.59304705e-03f,+3.50831039e-02f,-1.11963369e-01f,+1.01273425e-01f,+2.12664474e-02f,
-7.88554922e-02f,+1.05364248e-02f,-5.33041842e-02f,-3.07063642e-03f,-1.12181408e-02f,
+3.56732085e-02f,+4.66061570e-02f,+1.12869427e-01f,+6.71137348e-02f,+8.18161145e-02f,
-5.06788632e-03f,-1.64181367e-02f,-4.89958227e-02f,+2.88419556e-02f,-3.70001979e-02f,
+1.08533099e-01f,+3.19636986e-02f,+1.14821717e-01f,-5.90079501e-02f,-3.32467556e-02f,
-8.76200423e-02f,-1.36601850e-02f,-3.99867781e-02f,+9.24149752e-02f,+1.13498718e-01f,
-3.03350948e-02f,+1.18651040e-01f,+9.12390426e-02f,-4.61521260e-02f,+2.65619401e-02f,
+6.81751668e-02f,+7.55704418e-02f,-2.55108569e-02f,+9.40761790e-02f,-5.31969890e-02f,
+4.53256033e-02f,+4.88586277e-02f,-2.90640742e-02f,-3.47315893e-02f,+4.90958467e-02f,
-8.33069533e-02f,-8.01725537e-02f,+4.93890569e-02f,+5.28547093e-02f,-9.97022465e-02f,
-1.12529546e-02f,+7.90812597e-02f,-1.46028996e-02f,+2.42176875e-02f,-3.46219540e-02f,
+9.05623361e-02f,-8.24848413e-02f,+1.03988253e-01f,+9.48140770e-03f,-8.90352726e-02f,
-7.98621774e-02f,+9.71861407e-02f,+4.51828763e-02f,+1.99850574e-02f,+7.00418651e-03f,
-1.11927390e-01f,-3.30124497e-02f,-2.68495083e-03f,-7.76430070e-02f,+1.93983391e-02f,
+8.40931386e-03f,+9.21711996e-02f,-1.83783546e-02f,+9.04737189e-02f,+6.98149800e-02f,
+4.60768193e-02f,+1.19204789e-01f,+5.17942198e-02f,-3.07723545e-02f,+4.69320193e-02f,
-1.07699275e-01f,-6.31863205e-03f,-2.63494756e-02f,-5.55025227e-02f,+7.65693262e-02f,
-1.85685530e-02f,-2.01140586e-02f,-2.32830718e-02f,+1.44776907e-02f,-1.91466906e-03f,
+3.44972946e-02f,+3.05500515e-02f,+9.98059958e-02f,-5.15185297e-02f,+5.65307513e-02f,
+3.59628238e-02f,+6.17925189e-02f,+4.65232916e-02f,-8.04741681e-02f,-3.81597728e-02f,
+5.65502271e-02f,+7.62710646e-02f,-1.00629777e-03f,-7.35926554e-02f,-1.42702339e-02f,
+3.33891697e-02f,-7.47311115e-02f,-4.05582711e-02f,+2.87983567e-03f,+1.03399187e-01f,
-3.81152518e-03f,-6.97795078e-02f,+1.01961263e-01f,-1.16795208e-02f,+5.76862656e-02f,
+4.95189354e-02f,+6.79275915e-02f,-1.83632970e-02f,-1.30490005e-01f,+1.04874395e-01f,
-1.34602771e-04f,-2.47292034e-02f,+2.17221454e-02f,-7.57378526e-03f,-3.08359526e-02f,
-6.28299862e-02f,+4.94120531e-02f,+1.21998012e-01f,-6.84076548e-02f,-3.53502408e-02f,
+8.91550723e-03f,-2.98289731e-02f,-8.32184851e-02f,-5.73340803e-02f,-8.62719864e-02f,
-9.10089388e-02f,+9.65921730e-02f,+4.18672636e-02f,-4.49803891e-03f,-6.88237995e-02f,
-3.92639190e-02f,+8.00842941e-02f,-3.58882025e-02f,+5.79896010e-02f,-6.67669848e-02f,
-4.77453973e-03f,-1.28839724e-02f,-3.93168814e-02f,-9.58525762e-03f,-1.68370456e-02f,
+8.55559558e-02f,-8.58755261e-02f,-4.74743694e-02f,+5.48507310e-02f,-6.44994006e-02f,
+2.79088095e-02f,-1.42447529e-02f,-9.72168669e-02f,-1.03818469e-01f,+5.80203906e-02f,
+7.24119842e-02f,-8.76219794e-02f,+4.48434167e-02f,-2.61692535e-02f,+3.38997808e-03f,
+4.60111909e-02f,-7.32717961e-02f,+6.56281710e-02f,+9.85688195e-02f,+2.51035187e-02f,
+9.10976753e-02f,-6.71857074e-02f,-6.59390315e-02f,+4.17649299e-02f,+8.12494382e-02f,
+5.61753027e-02f,-1.11884542e-01f,-7.38126710e-02f,+3.70927788e-02f,+5.24806883e-03f,
-7.81981423e-02f,-1.17677763e-01f,+5.08671440e-03f,-8.26327503e-02f,-4.53053340e-02f,
+1.22593984e-01f,+7.72828087e-02f,+3.45806889e-02f,-1.06520258e-01f,-3.72661464e-02f,
+9.97439586e-03f,-3.22932675e-02f,-1.16832867e-01f,+1.15891844e-01f,-6.79359883e-02f,
+9.10772458e-02f,+8.86953771e-02f,+2.20061690e-02f,-3.45340595e-02f,+2.28123646e-02f,
+2.82503646e-02f,-4.36455309e-02f,-9.19903442e-02f,-2.17132233e-02f,+8.23790878e-02f,
-7.99138322e-02f,+1.01723194e-01f,+2.18750555e-02f,-1.08034201e-01f,+7.78484419e-02f,
-4.74249013e-02f,-2.14006621e-02f,-8.12107101e-02f,-8.93496051e-02f,+9.33708549e-02f,
-1.05963133e-01f,+1.33694429e-02f,-6.69475570e-02f,-6.50144890e-02f,-2.42798403e-02f,
-7.94286802e-02f,+9.93400812e-02f,-4.41126116e-02f,+1.05251625e-01f,+7.41900951e-02f,
+1.86228510e-02f,+1.33519191e-02f,-8.48967861e-03f,-5.47913946e-02f,-2.70503107e-04f,
+5.91279045e-02f,-2.26610387e-03f,+8.24258924e-02f,+1.26335040e-01f,-1.11713462e-01f,
+3.85962836e-02f,+1.24921076e-01f,-7.67333731e-02f,-1.27658471e-02f,+2.52766851e-02f,
+3.34971026e-02f,-7.47970641e-02f,-8.84429589e-02f,-8.18512067e-02f,-1.00153714e-01f,
+6.41077682e-02f,-4.04475033e-02f,-1.09954439e-01f,-1.16031310e-02f,-8.37459043e-02f,
-9.47072431e-02f,+2.76767816e-02f,+9.39280838e-02f,+5.79914153e-02f,-1.14620797e-01f,
+1.07654072e-02f,-1.06249392e-01f,+5.02707586e-02f,+6.77748248e-02f,-5.96614648e-03f,
-8.24498162e-02f,-7.12156817e-02f,-7.46649355e-02f,+9.22573060e-02f,+1.00711130e-01f,
-1.64516345e-02f,-1.09465815e-01f,-4.35957052e-02f,+3.15328948e-02f,+8.80808085e-02f,
+1.10522382e-01f,-3.61440773e-03f,-9.01605412e-02f,+1.13947131e-01f,+9.92667824e-02f,
-9.73863825e-02f,+1.30053371e-01f,-2.54804641e-02f,-5.49925566e-02f,-9.56688523e-02f,
+9.93692316e-03f,-3.35146822e-02f,-6.46510199e-02f,+7.95490742e-02f,-3.98874432e-02f,
-7.27100223e-02f,+5.15447147e-02f,+1.00622289e-01f,-9.47949216e-02f,-1.26683548e-01f,
+1.07752226e-01f,+9.58403125e-02f,+1.10768169e-01f,+5.20880148e-02f,+5.54458797e-03f,
-1.06686085e-01f,-3.62322405e-02f,+1.02081537e-01f,-9.75982398e-02f,+3.85428108e-02f,
+3.36090364e-02f,+2.36269413e-03f,-3.62332985e-02f,-4.38822918e-02f,-9.18999687e-02f,
-8.96115527e-02f,+7.42600262e-02f,-3.66549008e-02f,+6.69282824e-02f,+6.95286170e-02f,
-5.55067062e-02f,-6.03323132e-02f,-3.99902537e-02f,-1.55306468e-02f,-7.00344667e-02f,
+1.28629301e-02f,-6.84973970e-02f,-3.80716659e-02f,-9.81277749e-02f,+9.07594636e-02f,
+8.35112929e-02f,-1.52276354e-02f,-5.09363860e-02f,-1.22136232e-02f,+3.22138779e-02f,
-2.06160266e-02f,+3.15124914e-02f,-2.70967502e-02f,+1.21459300e-02f,+1.19078636e-01f,
+9.78849381e-02f,+4.23806012e-02f,+1.15327328e-01f,-8.65363926e-02f,+3.77303921e-02f,
-1.08512133e-01f,+1.10068396e-02f,+3.96694839e-02f,+8.92708376e-02f,+6.49474338e-02f,
+6.54129535e-02f,-5.75037003e-02f,-1.77854430e-02f,-7.66513795e-02f,-5.31210825e-02f,
+5.75221218e-02f,+2.78613251e-02f,-7.01223761e-02f,+1.46888783e-02f,-1.52433915e-02f,
+1.60334166e-02f,-7.17840716e-02f,+5.29245147e-03f,+8.69823843e-02f,-9.24810320e-02f,
-4.68184948e-02f,-3.37828845e-02f,+5.59189804e-02f,-6.77733421e-02f,+3.19507089e-03f,
-8.56893659e-02f,-2.02550851e-02f,+1.02234572e-01f,+4.09458438e-03f,-1.03068694e-01f,
+4.17259149e-02f,+4.16845568e-02f,-6.77410364e-02f,+3.96050885e-02f,+2.04862282e-02f,
-6.44311458e-02f,+7.91274384e-03f,+1.64447259e-02f,-9.01136696e-02f,-1.67575479e-02f,
+1.60190389e-02f,-2.33757067e-02f,+9.44404006e-02f,-7.82805085e-02f,+1.12230882e-01f,
+1.27597274e-02f,+4.00932692e-02f,+6.81590736e-02f,+2.55315471e-02f,+2.12733857e-02f,
+5.57190590e-02f,+4.88857478e-02f,+5.30556776e-02f,+1.79624334e-02f,-8.88082013e-02f,
-9.27666426e-02f,+7.91458264e-02f,+5.61740696e-02f,+2.83738878e-02f,+4.40032966e-03f,
+1.27966767e-02f,+3.59505713e-02f,+1.22680247e-01f,+5.93709499e-02f,+8.84067267e-02f,
+8.67198631e-02f,-1.15488647e-02f,-1.57297328e-02f,+2.23811176e-02f,-7.07224607e-02f,
+1.90860257e-02f,-9.11550969e-02f,+1.07173197e-01f,-9.16060880e-02f,+1.13899922e-02f,
+6.90960512e-02f,+1.38077186e-02f,+6.20466471e-02f,-7.34860450e-02f,-7.22248480e-02f,
+3.40554118e-02f,-7.15502128e-02f,+9.62959900e-02f,+3.44064198e-02f,-6.57694340e-02f,
-1.09783389e-01f,+2.06269845e-02f,+4.82996777e-02f,+4.87745404e-02f,+6.24900274e-02f,
-8.72250795e-02f,+2.11468060e-02f,+5.15636466e-02f,+6.46602139e-02f,-4.68263589e-03f,
-1.48402657e-02f,+8.38512331e-02f,-1.58158839e-02f,+1.66426264e-02f,+9.38227102e-02f,
+1.43640926e-02f,-3.80523279e-02f,-6.09953962e-02f,+4.87968624e-02f,+6.06751069e-02f,
+9.19505805e-02f,-5.21031469e-02f,-1.16090164e-01f,-2.64784861e-02f,+7.98236430e-02f,
+4.42238227e-02f,-1.03019267e-01f,-6.13376163e-02f,-7.24028572e-02f,-1.88374557e-02f,
-1.03734918e-01f,-9.86413360e-02f,+1.10806063e-01f,+4.61308956e-02f,-1.62616596e-02f,
-1.16233416e-01f,+9.22012776e-02f,-9.03588161e-02f,+5.40098324e-02f,+6.47955434e-03f,
+8.15143436e-02f,+2.03599129e-02f,-1.23268537e-01f,-4.83513549e-02f,-8.57214034e-02f,
+5.25351614e-02f,+1.67895528e-03f,+3.56227346e-02f,+6.46204203e-02f,+8.43860880e-02f,
-6.89251348e-02f,-1.12999104e-01f,-9.26640481e-02f,-8.44262019e-02f,+1.08763702e-01f,
+6.11231513e-02f,+1.29563492e-02f,+4.48158905e-02f,-7.71703199e-02f,+1.84757002e-02f,
+1.12750316e-02f,-9.31594148e-02f,-9.79184806e-02f,+2.61936374e-02f,+1.09983698e-01f,
-1.09298199e-01f,+1.22681260e-03f,-9.71849039e-02f,-1.85535811e-02f,-7.96147063e-02f,
-1.04965875e-02f,+1.92431677e-02f,-2.13474333e-02f,+1.00442588e-01f,-7.64993876e-02f,
+7.64500052e-02f,-5.04321009e-02f,+1.00730702e-01f,-2.12007668e-03f,-3.53278778e-02f,
+8.73931348e-02f,+6.27767816e-02f,-8.76431093e-02f,-1.06545068e-01f,+2.05202005e-03f,
-1.04956955e-01f,-9.01802331e-02f,+7.89404809e-02f,-5.13581857e-02f,-3.90090197e-02f,
+1.11799136e-01f,-5.33684343e-02f,-9.34350584e-03f,+4.10242528e-02f,-6.04603663e-02f,
-8.35490227e-02f,+5.70050487e-03f,-3.71874422e-02f,-1.17511459e-01f,-1.37120867e-02f,
-1.28385708e-01f,-2.07743570e-02f,-9.77110639e-02f,+1.09661631e-01f,-3.52126993e-02f,
-7.13700727e-02f,+4.69648354e-02f,-4.50798161e-02f,-1.02160200e-01f,-8.81382972e-02f,
+8.99593625e-03f,+1.37252463e-02f,+7.27175623e-02f,-8.44059736e-02f,+3.70816998e-02f,
-1.03280179e-01f,-8.29034746e-02f,+5.90048209e-02f,+5.33244275e-02f,-8.42919275e-02f,
+5.60418516e-02f,+8.29232931e-02f,+8.49881396e-02f,-1.62778310e-02f,+5.31318113e-02f,
+4.61720973e-02f,+9.95178297e-02f,-2.05392353e-02f,-9.45778266e-02f,+7.93345422e-02f,
-5.52171171e-02f,-4.55109328e-02f,-7.81041682e-02f,+4.56962809e-02f,+4.06462029e-02f,
+7.72662982e-02f,+2.58046016e-02f,+5.68228289e-02f,+2.03217790e-02f,+2.55276486e-02f,
+1.24743581e-03f,+4.25741896e-02f,-8.02552104e-02f,-1.12450801e-01f,-9.49172899e-02f,
+6.99480399e-02f,+1.05835594e-01f,+9.41726640e-02f,+4.39886674e-02f,+5.74668422e-02f,
+7.36790672e-02f,-8.79882053e-02f,+7.16970935e-02f,-8.85428861e-02f,+5.84048778e-03f,
+7.99518749e-02f,+8.59255716e-02f,+4.26778123e-02f,-1.15589671e-01f,-3.42439488e-02f,
+2.98157260e-02f,-9.29007605e-02f,+1.05226748e-01f,-8.46281201e-02f,+3.97766158e-02f,
-2.54560784e-02f,+8.72894656e-03f,+9.23305899e-02f,-5.63395657e-02f,+2.52208449e-02f,
-1.24090863e-02f,+9.76852253e-02f,-2.06469819e-02f,+4.99365889e-02f,-2.88392957e-02f,
+7.14524314e-02f,+6.00980874e-03f,+9.43853706e-03f,-9.08134207e-02f,+4.56668958e-02f,
+8.81891772e-02f,+2.54412759e-02f,-3.88730690e-02f,-1.55883310e-02f,-6.86564595e-02f,
+3.34930830e-02f,+3.62319574e-02f,+8.46166909e-02f,-1.61769129e-02f,-5.07370122e-02f,
-4.69803549e-02f,+9.29098651e-02f,+8.01321715e-02f,-2.97540277e-02f,+3.34844068e-02f,
+7.48478547e-02f,-1.82122067e-02f,+1.16123363e-01f,+8.86728764e-02f,-1.72534790e-02f,
-8.65859017e-02f,+2.42024101e-02f,+1.09294109e-01f,-3.99353467e-02f,-2.98306942e-02f,
-7.98319131e-02f,-6.24957196e-02f,-3.33384089e-02f,-3.04369628e-02f,+6.02356270e-02f,
+1.36040986e-01f,+3.33584473e-02f,+1.02467000e-01f,-8.54754224e-02f,+6.88739493e-02f,
-7.04314858e-02f,-7.02915266e-02f,-4.39226301e-03f,+8.85618925e-02f,+5.83714582e-02f,
-4.89021502e-02f,-2.81241145e-02f,-3.29746567e-02f,+1.99172925e-02f,+5.51461466e-02f,
-8.54555368e-02f,+8.31448287e-03f,+7.90989846e-02f,+2.37474237e-02f,-9.89162177e-02f,
+1.06315374e-01f,+8.94397870e-02f,+1.54012013e-02f,-1.20177865e-01f,+5.35819568e-02f,
-1.21466346e-01f,-7.87502378e-02f,-7.70903602e-02f,+9.35083032e-02f,-1.47437630e-02f,
+1.84849668e-02f,+7.93942884e-02f,+6.84857592e-02f,-1.09187394e-01f,-7.93331265e-02f,
+4.87000979e-02f,+1.68084167e-02f,-1.16972728e-02f,+2.31935061e-03f,-3.91927361e-02f,
+5.45599423e-02f,+2.16167960e-02f,-7.17869624e-02f,-7.30972216e-02f,+2.10939385e-02f,
+2.90430412e-02f,-1.08647108e-01f,-6.04118854e-02f,+3.72930244e-02f,-6.61902875e-02f,
+6.81355670e-02f,-1.31839765e-02f,-8.40009004e-02f,-6.79571480e-02f,-5.42467907e-02f,
-1.21564724e-01f,+3.85788605e-02f,-1.95287745e-02f,-7.00970143e-02f,+3.44372913e-02f,
-1.43222837e-02f,-7.55770132e-02f,-2.50951648e-02f,-6.83365911e-02f,+9.74842310e-02f,
+5.93665913e-02f,+1.15321830e-01f,+1.10782407e-01f,+1.97639130e-02f,+5.38694933e-02f,
-1.95593983e-02f,+6.09615408e-02f,+4.32210527e-02f,-6.91250637e-02f,-3.27360770e-03f,
-3.08644073e-03f,+1.95547044e-02f,+4.99790162e-02f,+1.96540039e-02f,+9.71269906e-02f,
+9.60837379e-02f,+8.12078044e-02f,-9.91721302e-02f,+2.67259199e-02f,-7.60691054e-03f,
+1.00761235e-01f,+4.22912790e-03f,-4.78370264e-02f,-1.47304330e-02f,+4.80328202e-02f,
-1.76253319e-02f,+6.04778603e-02f,-1.22734252e-02f,-4.82307449e-02f,+9.97288153e-02f,
+4.35204133e-02f,+6.06364533e-02f,+7.93248340e-02f,-1.96176991e-02f,+1.52938878e-02f,
+9.23043862e-02f,-6.04638457e-02f,+4.20003831e-02f,-6.90363944e-02f,-4.53932844e-02f,
+1.86096933e-02f,+8.92478451e-02f,-5.31548597e-02f,+4.59755445e-03f,+8.33940059e-02f,
-1.01494610e-01f,-8.65373313e-02f,+8.87789950e-02f,-4.10868675e-02f,+8.79826322e-02f,
-2.04617940e-02f,+3.41666676e-02f,-4.68268059e-02f,+1.00726016e-01f,+9.33243260e-02f,
+4.32581306e-02f,-4.22820821e-02f,-9.60300192e-02f,+3.24426265e-03f,-1.65345147e-02f,
+5.04755154e-02f,-2.55761277e-02f,+2.39558145e-02f,+6.18873984e-02f,+7.26071373e-02f,
+6.59133270e-02f,-2.31705909e-03f,-9.45721716e-02f,-5.59861101e-02f,+1.12747543e-01f,
-1.06960848e-01f,-1.13125697e-01f,-4.67830040e-02f,+2.63509545e-02f,-7.48249739e-02f,
+1.36635453e-02f,+4.37708721e-02f,+5.19097745e-02f,+1.88566372e-02f,-3.85332331e-02f,
+8.82950574e-02f,-8.66912454e-02f,+1.21837325e-01f,+1.03934519e-02f,+6.24090172e-02f,
-2.18540132e-02f,-6.23701960e-02f,+8.70795697e-02f,-3.02469395e-02f,-4.35265154e-02f,
-1.83666013e-02f,+8.44904333e-02f,-6.39226660e-02f,+4.81237806e-02f,-1.12636723e-01f,
-2.21416429e-02f,-7.56052881e-03f,+4.49625775e-02f,+1.14935748e-02f,+3.64140049e-02f,
-2.63549611e-02f,-9.73163694e-02f,-1.08031533e-03f,-9.11047980e-02f,+5.46568930e-02f,
-1.27038866e-01f,-7.48306438e-02f,-1.88745130e-02f,+9.58605185e-02f,-1.04651578e-01f,
+1.57272397e-03f,+2.69229785e-02f,-9.96008590e-02f,+1.17592514e-01f,+6.93632737e-02f,
-7.72228539e-02f,-6.86474144e-02f,+3.49988081e-02f,-3.21043171e-02f,+4.00868729e-02f,
-6.38136864e-02f,+1.20420083e-02f,-5.25368527e-02f,-2.66978946e-02f,+8.28032289e-03f,
+9.89307612e-02f,+7.83759430e-02f,+5.70054874e-02f,+8.57702643e-03f,-7.08783716e-02f,
+2.00085342e-05f,+1.89144369e-02f,+4.43941057e-02f,-8.17884505e-02f,+2.86938343e-02f,
+5.90417348e-02f,-1.04827210e-01f,-1.16200738e-01f,-7.14949667e-02f,-9.01271999e-02f,
-8.80510733e-02f,-2.08153925e-03f,-9.79517773e-02f,+8.89155492e-02f,-1.06154181e-01f,
-1.21058688e-01f,+7.55482540e-02f,+1.06192436e-02f,+9.68606621e-02f,+9.32558253e-02f,
+1.00006908e-01f,+2.50784960e-02f,-8.30131769e-02f,+4.78692725e-02f,+4.98097725e-02f,
-9.92747396e-03f,+9.14719515e-03f,+4.12691049e-02f,-2.08812058e-02f,+8.79577026e-02f,
-4.68921363e-02f,-1.04656585e-01f,+3.48723345e-02f,-3.62517349e-02f,-8.98982659e-02f,
+1.95790958e-02f,-4.82934304e-02f,+3.25901173e-02f,-1.16007626e-01f,+8.19556862e-02f,
+1.03669062e-01f,-4.85142283e-02f,-9.69385579e-02f,+6.70086667e-02f,+6.98405355e-02f,
+5.80464676e-02f,+2.32948586e-02f,+1.09521434e-01f,+4.48253378e-02f,-1.17770016e-01f,
+9.17269960e-02f,-8.43783841e-02f,+5.53881191e-02f,+4.63339165e-02f,+7.78207034e-02f,
-3.38798016e-02f,+9.92542803e-02f,-1.68433115e-02f,-8.44131410e-02f,+2.81859823e-02f,
+1.95060894e-02f,-8.04083794e-02f,-8.09064060e-02f,-1.14614882e-01f,-6.95807487e-02f,
-4.82223518e-02f,+1.12761576e-02f,-2.49584299e-02f,-9.36419368e-02f,+1.00816451e-02f,
-1.16528690e-01f,+3.41939507e-03f,+8.01788196e-02f,+3.70470919e-02f,-3.72663029e-02f,
+7.28813000e-03f,+9.29928869e-02f,-9.01518539e-02f,+6.72349483e-02f,+1.09229378e-01f,
+9.19454321e-02f,-4.69899587e-02f,+8.15358385e-02f,+1.20157585e-01f,-2.02093013e-02f,
-1.16618931e-01f,-6.56589419e-02f,-7.66292065e-02f,+7.69276023e-02f,-5.16714863e-02f,
-5.31070679e-02f,+5.61449453e-02f,-9.63802040e-02f,-3.27124409e-02f,+1.67646930e-02f,
-5.27535155e-02f,+2.48233862e-02f,+9.20156762e-02f,-9.08995122e-02f,-4.10448350e-02f,
-8.10892880e-02f,+1.10347576e-01f,+4.06051390e-02f,-2.68704407e-02f,+6.84328526e-02f,
+5.80393150e-02f,+4.96263318e-02f,+9.12868530e-02f,+2.80557293e-02f,+1.16630383e-01f,
-5.87300397e-03f,-5.88690629e-03f,-4.96252440e-02f,+1.00449100e-01f,-8.76814574e-02f,
-8.28479007e-02f,-7.51802176e-02f,+3.34152840e-02f,+1.94409098e-02f,+6.09974489e-02f,
-8.82816091e-02f,+2.78985430e-03f,-1.29125401e-01f,+5.46188280e-03f,-9.10242647e-02f,
-5.48083559e-02f,+6.50424734e-02f,-2.14180965e-02f,-4.41061109e-02f,+2.07268987e-02f,
+3.30081326e-04f,-4.77973977e-03f,+2.33976264e-02f,-3.94856744e-02f,+1.23660132e-01f,
-8.80321115e-02f,-1.78658869e-02f,+8.74613076e-02f,+1.06480129e-01f,-8.29835609e-02f,
-9.29924995e-02f,+6.76661506e-02f,+2.69152038e-02f,+1.17082603e-01f,+1.11200482e-01f,
+9.35085788e-02f,-1.75142009e-02f,+5.93714379e-02f,+9.51359048e-02f,+5.81617877e-02f,
+3.34216654e-02f,+2.64594033e-02f,-3.76382507e-02f,+5.42099103e-02f,+4.07195054e-02f,
+2.16028243e-02f,-1.02002844e-01f,-1.16831116e-01f,-3.42964381e-02f,+1.11790942e-02f,
+5.01140021e-02f,+2.33614501e-02f,-3.79901044e-02f,-9.15411487e-02f,+3.17981914e-02f,
+8.87265578e-02f,+1.26399457e-01f,+4.86937687e-02f,-1.39660947e-03f,+6.28513470e-03f,
+1.18693203e-01f,+4.76962402e-02f,+5.22125065e-02f,-9.68915001e-02f,-2.42787153e-02f,
+4.35519814e-02f,+5.28565347e-02f,+4.01205476e-03f,+5.15002161e-02f,-4.33874279e-02f,
+1.34765863e-01f,-2.07892936e-02f,-3.47763747e-02f,+5.49985468e-03f,+2.98250690e-02f,
-7.97019228e-02f,-4.33120877e-02f,-1.21941753e-01f,-1.02341235e-01f,-1.43606290e-02f,
-5.44556677e-02f,+5.47286049e-02f,-3.77370939e-02f,-1.16423503e-01f,+9.41082370e-03f,
+7.84429386e-02f,+1.41550163e-02f,+1.78977158e-02f,+1.25917062e-01f,+8.72609951e-03f,
+4.35279272e-02f,+4.82756048e-02f,+1.43181570e-02f,-3.53964381e-02f,-4.29061167e-02f,
-1.03150763e-01f,+4.32949588e-02f,+6.40937164e-02f,+4.49571647e-02f,-2.28974558e-02f,
+6.17844164e-02f,-1.00859866e-01f,+2.08317414e-02f,-2.34300867e-02f,-9.89380181e-02f,
-1.38455778e-02f,-9.41119269e-02f,+6.28045574e-02f,-1.05128728e-01f,+3.10446750e-02f,
+9.05504003e-02f,+7.93265086e-03f,+8.17782953e-02f,+7.67681329e-03f,+6.72323033e-02f,
+9.71413851e-02f,+5.48838302e-02f,+4.22697701e-02f,-3.02389245e-02f,-7.13672256e-03f,
-2.60699280e-02f,-2.82023177e-02f,-6.23048004e-03f,-9.99048054e-02f,-5.37206344e-02f,
+1.68532692e-02f,-1.42451597e-03f,-5.26894331e-02f,+3.58668272e-03f,+3.05040758e-02f,
-9.71490070e-02f,-6.87806234e-02f,-7.81779364e-02f,-1.43624395e-02f,-4.58535552e-02f,
-2.70202607e-02f,-9.68627632e-03f,-1.53768808e-02f,+1.04023598e-01f,-1.09585457e-01f,
-1.04339190e-01f,-1.25706345e-02f,+3.76477018e-02f,-7.33020529e-02f,-1.12701967e-01f,
-1.07391298e-01f,-4.61792648e-02f,-5.83254211e-02f,-4.79763448e-02f,+3.06176916e-02f,
-2.39754841e-02f,+2.96051875e-02f,+3.34690139e-02f,-5.10886386e-02f,+5.34031764e-02f,
+8.87420997e-02f,-1.09255731e-01f,+3.99453565e-02f,-4.66530770e-02f,-5.41954264e-02f,
+2.18362287e-02f,-7.65949488e-04f,-1.07926309e-01f,+1.80013129e-03f,-9.16400775e-02f,
+3.39462794e-02f,+1.08396575e-01f,-2.14560386e-02f,-1.67470388e-02f,-6.35844469e-03f,
+1.82564240e-02f,+4.85529341e-02f,+9.79134068e-02f,-3.34969871e-02f,-5.39678335e-02f,
-8.47946703e-02f,+2.27393433e-02f,-3.45080011e-02f,-9.92179364e-02f,+1.06833190e-01f,
-3.90730686e-02f,+8.14734027e-02f,+6.90061152e-02f,-3.83866094e-02f,-1.12377964e-01f,
+6.46355152e-02f,-1.01215942e-02f,-2.73355693e-02f,+3.39522329e-03f,+6.61759973e-02f,
+1.00943401e-01f,+3.36158797e-02f,-6.06540926e-02f,+4.40448932e-02f,+2.34058499e-02f,
+4.30288240e-02f,-1.03034027e-01f,+2.25479901e-03f,+1.12559073e-01f,-5.53584397e-02f,
-4.44255359e-02f,-1.37486681e-02f,-8.84732679e-02f,+2.05509439e-02f,-8.64966288e-02f,
-4.28579897e-02f,+4.18384746e-02f,+3.25426422e-02f,+1.15601949e-01f,-2.10127756e-02f,
-4.22912911e-02f,+1.12165190e-01f,+8.60804394e-02f,+6.45850226e-02f,-3.30433343e-03f,
-8.39518681e-02f,-9.63146165e-02f,-2.99009439e-02f,+1.02040865e-01f,-6.96232021e-02f,
+1.01118334e-01f,-6.82477430e-02f,-6.57041892e-02f,+1.01241387e-01f,-9.26472396e-02f,
+9.72748995e-02f,+4.35649268e-02f,+6.09470382e-02f,+9.57312509e-02f,-3.98356989e-02f,
+6.44550622e-02f,-2.76845507e-02f,+1.17028370e-01f,-2.17792690e-02f,+7.97825307e-02f,
-8.88639688e-02f,+2.97117494e-02f,+7.61087984e-02f,+7.05246553e-02f,+2.91755982e-02f,
-3.80394980e-02f,+1.08595602e-02f,+8.33544508e-02f,-3.86032015e-02f,-1.19530313e-01f,
-6.27073795e-02f,-4.82616574e-02f,+3.64707112e-02f,+7.47782588e-02f,+6.95026144e-02f,
-2.14411356e-02f,-2.05992125e-02f,-1.11233685e-02f,-1.12938732e-02f,-7.79977664e-02f,
-1.15281858e-01f,+7.81432725e-03f,-7.76720271e-02f,-1.14293192e-02f,+1.09975776e-02f,
-5.20684756e-02f,-9.45629738e-03f,-8.01748410e-02f,+5.03154248e-02f,+3.41096744e-02f,
-2.81275138e-02f,+2.00601704e-02f,-1.19974628e-01f,+8.90306979e-02f,-5.10727875e-02f,
-8.02074373e-03f,+1.15840413e-01f,-2.61863992e-02f,+9.97203961e-03f,-3.55786607e-02f,
-8.42780173e-02f,+1.47557482e-02f,-1.03400633e-01f,+6.99386895e-02f,+8.88001844e-02f,
+4.08463590e-02f,-3.86879630e-02f,+1.67030003e-02f,+8.57213736e-02f,+7.36819357e-02f,
-3.51090394e-02f,-7.89723918e-02f,+7.11570010e-02f,+5.86371161e-02f,-4.27305549e-02f,
+1.07758045e-01f,-4.77306964e-03f,+9.43939537e-02f,+3.42664979e-02f,-3.38421762e-02f,
+7.36985803e-02f,+1.76756480e-03f,+3.59156057e-02f,-4.93464954e-02f,-1.54214855e-02f,
-9.58773643e-02f,+7.96258170e-03f,-1.12910561e-01f,+5.90742603e-02f,+5.30936792e-02f,
-4.72381376e-02f,-3.35140750e-02f,-1.02790430e-01f,+4.07272726e-02f,-1.05906017e-01f,
+8.70767087e-02f,+9.83076915e-02f,+3.78486142e-02f,-1.16457589e-01f,-6.29621521e-02f,
-7.40801767e-02f,-4.41668108e-02f,+6.50057644e-02f,+5.66774867e-02f,+5.90296611e-02f,
+2.19293311e-02f,+1.15501314e-01f,+1.06843576e-01f,+4.00738791e-02f,-1.00853838e-01f,
+1.04268402e-01f,-1.04141146e-01f,+2.55886707e-02f,+3.42304036e-02f,-1.73058584e-02f,
+4.04808931e-02f,+6.35574386e-02f,+9.01656598e-02f,-3.48062478e-02f,+1.17508136e-01f,
+2.57948078e-02f,-1.58798397e-02f,-1.24943014e-02f,-1.03815831e-01f,-7.48293698e-02f,
-6.45509809e-02f,-1.01898359e-02f,+3.99283990e-02f,-7.71955922e-02f,+7.87075385e-02f,
+5.37100174e-02f,-6.33700490e-02f,-5.32480814e-02f,-8.76019821e-02f,+1.68923326e-02f,
+1.10616557e-01f,+1.06789522e-01f,+3.57809216e-02f,-3.26745249e-02f,-9.89837646e-02f,
+8.15991536e-02f,-2.80209500e-02f,-4.39151563e-02f,-1.02991499e-01f,+1.88809761e-03f,
+2.96276230e-02f,-4.63650450e-02f,+9.35443118e-02f,+1.05988190e-01f,-5.67575470e-02f,
-5.25261983e-02f,-5.59909642e-02f,+2.12760083e-02f,+1.16083048e-01f,-1.37922978e-02f,
+7.05970153e-02f,+2.56811157e-02f,+7.68023729e-02f,-5.62979765e-02f,+1.27448589e-01f,
+1.10084511e-01f,+1.41713601e-02f,-2.65611690e-02f,+1.07158653e-01f,+8.64312053e-02f,
-1.92093884e-03f,-1.12367518e-01f,+3.28798033e-02f,-9.94073600e-02f,+7.85106570e-02f,
+6.04646988e-02f,-8.05924013e-02f,+4.84457873e-02f,-6.56524450e-02f,+4.18471843e-02f,
-9.65756774e-02f,-5.16980849e-02f,+9.67976004e-02f,+1.83517262e-02f,+9.72708836e-02f,
-8.68324861e-02f,-1.09689496e-01f,+8.00769255e-02f,-7.46349618e-02f,+7.85641838e-03f,
+9.86055806e-02f,+8.40460360e-02f,+7.51872286e-02f,+8.31720531e-02f,+1.75892271e-03f,
+7.52122179e-02f,-7.77250752e-02f,+8.71283412e-02f,+8.03719312e-02f,-1.68457292e-02f,
-1.20583996e-01f,+1.18852079e-01f,+9.39793587e-02f,-1.71964744e-03f,+9.97899398e-02f,
+2.81500444e-02f,+1.12604298e-01f,+7.38733485e-02f,+2.51841894e-03f,-4.68408428e-02f,
+3.32699157e-02f,+1.05901793e-01f,-8.58591869e-02f,+1.05630189e-01f,+8.30540508e-02f,
-9.50401574e-02f,+6.84487298e-02f,-8.43202025e-02f,+7.83126801e-02f,+8.89857560e-02f,
-3.22363824e-02f,+1.72535181e-02f,+4.91786078e-02f,+1.10357456e-01f,-8.43934640e-02f,
+9.23949201e-03f,-3.77515815e-02f,+8.27540234e-02f,+1.23211481e-01f,+6.03535287e-02f,
-1.07954837e-01f,+1.71927754e-02f,-8.67938101e-02f,+9.89442170e-02f,+9.02002305e-02f,
+8.54048207e-02f,-8.88677388e-02f,+1.26048252e-02f,+1.07077442e-01f,+3.48352757e-03f,
+2.57162340e-02f,-4.58577387e-02f,+7.75881857e-02f,+1.91668626e-02f,-1.06445916e-01f,
+7.47678510e-04f,+3.41513045e-02f,-9.54964459e-02f,+9.36993435e-02f,-1.58366133e-02f,
-1.00371964e-01f,+2.30203057e-03f,-7.08826780e-02f,+1.39368130e-02f,+1.99435279e-02f,
-6.03594035e-02f,-2.47770641e-02f,-1.06535554e-01f,-1.14862867e-01f,-1.13441296e-01f,
+1.02864735e-01f,+4.14921455e-02f,-1.17898928e-02f,-1.47466697e-02f,+9.55352560e-02f,
+8.82984474e-02f,-4.27858196e-02f,-1.04338139e-01f,+9.15493742e-02f,-1.04848936e-01f,
-9.28571224e-02f,+1.15682922e-01f,-4.11008932e-02f,+1.01457238e-01f,+4.50222790e-02f,
+3.85256261e-02f,-1.14853993e-01f,-2.98817400e-02f,+3.41165401e-02f,-1.10349640e-01f,
+1.20472619e-02f,-8.80275220e-02f,+2.04370525e-02f,+4.90089841e-02f,+5.99117503e-02f,
+8.17173347e-02f,+8.52815881e-02f,-4.18353900e-02f,+1.09282762e-01f,-5.95653057e-03f,
+7.23547414e-02f,-9.91412774e-02f,+3.89639698e-02f,+1.01455264e-01f,-1.84873398e-02f,
+5.25864027e-02f,+8.15543830e-02f,+1.00629151e-01f,-6.84437752e-02f,-1.07653797e-01f,
+8.86452422e-02f,+1.03018366e-01f,+6.22102469e-02f,+8.41121003e-02f,+2.56790109e-02f,
-8.28329027e-02f,+5.32756411e-02f,+5.48019819e-02f,-4.90320772e-02f,+3.59335868e-03f,
+3.05375047e-02f,-3.47129628e-02f,-2.83410810e-02f,+1.14818774e-02f,+9.35309008e-02f,
+2.88189761e-02f,-1.32442564e-02f,+6.05347343e-02f,-7.02697784e-02f,+9.63763967e-02f,
-9.40393284e-02f,+3.12735811e-02f,-9.20345187e-02f,+3.73267643e-02f,+7.59138092e-02f,
-2.14357153e-02f,+8.80381539e-02f,+1.74918044e-02f,-1.13334239e-01f,+3.91617902e-02f,
-5.61943091e-03f,-4.04560380e-02f,+5.86464629e-02f,-2.34778747e-02f,-7.35352188e-02f,
-8.53025764e-02f,-7.06735924e-02f,-5.39296679e-02f,-7.43304715e-02f,-4.54124063e-02f,
+9.20377970e-02f,+1.00926533e-01f,-8.50772113e-02f,+8.86793062e-02f,-8.60325620e-02f,
-9.83869731e-02f,+9.09579322e-02f,-2.86504496e-02f,-3.51131856e-02f,+6.62078485e-02f,
-4.87876460e-02f,-9.52906534e-02f,+1.00065313e-01f,-1.83036998e-02f,-6.02039844e-02f,
-5.08375913e-02f,+1.08074844e-01f,+6.80474788e-02f,+5.31569831e-02f,-5.24589270e-02f,
-4.54854108e-02f,-1.15568481e-01f,+1.29262116e-02f,+7.40483850e-02f,-6.72596917e-02f,
+1.04242586e-01f,-7.33385980e-02f,-5.64050823e-02f,-6.71212748e-02f,-7.52898380e-02f,
+9.85480025e-02f,+1.05889514e-02f,-6.92949891e-02f,+8.19727778e-02f,-3.24914232e-02f,
+1.17425479e-01f,+7.51081109e-02f,-7.20317811e-02f,-1.81630813e-02f,-8.20047706e-02f,
+4.58425283e-03f,-1.14389047e-01f,-8.70199502e-02f,-4.04677428e-02f,+5.90999350e-02f,
+9.40333232e-02f,-1.03883259e-01f,-8.94467235e-02f,+6.60790130e-02f,+1.75807753e-03f,
+6.29781261e-02f,+9.77007151e-02f,-3.76691669e-02f,+3.08118723e-02f,-1.21023133e-01f,
+7.10831359e-02f,+1.04121909e-01f,+1.81756392e-02f,-4.09302451e-02f,+8.93780291e-02f,
-8.36251229e-02f,+2.85504181e-02f,+4.73558120e-02f,-1.19037725e-01f,+2.28996668e-02f,
-6.53227195e-02f,+4.96478193e-02f,+1.17516890e-02f,-7.85687566e-02f,+7.53957108e-02f,
+1.94344204e-02f,-8.64860974e-03f,-5.28015122e-02f,-7.55723193e-02f,-1.15772367e-01f,
-3.63689512e-02f,-1.22996360e-01f,+7.37757757e-02f,+1.03999771e-01f,-1.20934425e-03f,
+6.23320676e-02f,+3.04649561e-03f,+4.86841425e-02f,+9.00296718e-02f,-4.83915135e-02f,
-6.14586473e-02f,-6.51108194e-03f,-5.74846789e-02f,+1.73526853e-02f,+2.11374387e-02f,
-7.51605406e-02f,-7.98707083e-02f,+4.88669947e-02f,+6.65420070e-02f,+2.14665756e-02f,
-3.20539400e-02f,+2.32821181e-02f,-9.46443453e-02f,-8.49334598e-02f,-1.14053056e-01f,
+7.72246346e-02f,-1.06645606e-01f,+1.58608183e-02f,+2.45202556e-02f,+5.93480393e-02f,
-2.14897543e-02f,+5.00512645e-02f,-5.21899089e-02f,-2.83782333e-02f,-8.79790783e-02f,
+8.16294327e-02f,+6.48474470e-02f,+2.77042463e-02f,+1.01693653e-01f,+6.93613812e-02f,
+1.08575262e-01f,+3.25807855e-02f,-1.11232504e-01f,-9.32239667e-02f,-2.46402547e-02f,
-1.15430862e-01f,+5.71370497e-02f,-8.36978257e-02f,-8.72851163e-02f,-1.09234490e-01f,
+3.91097143e-02f,-1.84907876e-02f,+1.50454240e-02f,-4.78795208e-02f,+6.48491979e-02f,
+4.87393029e-02f,+9.78175327e-02f,-6.78453296e-02f,+8.11767280e-02f,-5.21151945e-02f,
-1.12924777e-01f,-6.02003969e-02f,-9.44205895e-02f,-9.47729200e-02f,-3.02095953e-02f,
-4.96492498e-02f,-8.60251635e-02f,+4.58172560e-02f,-2.09986474e-02f,-4.75129820e-02f,
+6.94298521e-02f,-3.11982315e-02f,-1.46890646e-02f,+3.78418826e-02f,-1.04481339e-01f,
-8.21802914e-02f,-1.02773070e-01f,+6.39437810e-02f,-2.71381885e-02f,-7.88851976e-02f,
+7.78237879e-02f,+1.05762683e-01f,+4.44737561e-02f,+3.67053077e-02f,-4.58384901e-02f,
-3.63506936e-02f,+8.61472413e-02f,-9.64181274e-02f,+2.83427164e-02f,-4.49767821e-02f,
-3.89672257e-03f,+8.78033042e-02f,-4.44102511e-02f,+1.00717343e-01f,-7.04905912e-02f,
-4.77597713e-02f,+2.56894575e-03f,-2.02851687e-02f,+4.76593748e-02f,-1.21871587e-02f,
+6.50045946e-02f,+4.60957214e-02f,-9.68912467e-02f,-5.19429445e-02f,-5.47648361e-03f,
-9.23337266e-02f,-5.08123003e-02f,-4.66336962e-03f,-6.79733604e-02f,+4.07916121e-02f,
-1.52619109e-02f,-6.73098862e-02f,+7.07606152e-02f,+8.05376247e-02f,-1.11394897e-01f,
+1.75877642e-02f,-9.74938869e-02f,+3.20069958e-03f,+3.58082987e-02f,-9.30637941e-02f,
-4.01482731e-02f,-1.90405007e-02f,+7.12528229e-02f,+3.73045951e-02f,-7.99196586e-02f,
-4.01482731e-02f,-4.08853814e-02f,-2.47660503e-02f,-7.81646445e-02f,-3.68451774e-02f,
+7.70099759e-02f,-7.75372759e-02f,-8.37062225e-02f,+1.27649605e-01f,+1.27823194e-02f,
+1.19508468e-01f,-4.03547809e-02f,-8.56566727e-02f,+7.64337704e-02f,+3.18469852e-02f,
+1.54823752e-03f,-8.79467800e-02f,+6.81170002e-02f,+6.53842315e-02f,-1.86014250e-02f,
+2.07816157e-02f,+5.06577976e-02f,+4.83150668e-02f,-3.85510735e-02f,-2.51373351e-02f,
-6.71701357e-02f,+6.27932474e-02f,+3.42352614e-02f,-2.60847751e-02f,+1.10871278e-01f,
-1.80966090e-02f,-2.99538150e-02f,-8.39623660e-02f,+8.88904929e-02f,+1.14589728e-01f,
-1.28076719e-02f,-2.39285938e-02f,+9.27238986e-02f,-5.60505427e-02f,+3.67678851e-02f,
+1.20774612e-01f,-7.17189535e-02f,-8.16973448e-02f,+7.77681768e-02f,+3.90990190e-02f,
-3.08349635e-03f,-4.01045755e-02f,-1.07923977e-01f,+5.98697327e-02f,-1.14041761e-01f,
+3.48415822e-02f,+5.30287251e-02f,+1.21659152e-01f,-7.84595534e-02f,+5.34965517e-03f,
-9.20795873e-02f,-2.07488406e-02f,-1.93843804e-02f,+9.17803347e-02f,-5.22547588e-02f,
+8.09152424e-02f,+5.01684435e-02f,+8.67416151e-03f,+1.46928709e-02f,-2.46387422e-02f,
-5.00997826e-02f,-1.03553601e-01f,+2.84215305e-02f,+1.18002892e-01f,-9.01149884e-02f,
+1.12642489e-01f,-1.77536253e-02f,-1.08330455e-02f,+9.49338973e-02f,-1.29937986e-02f,
-1.44970370e-04f,-5.57828620e-02f,-1.03095382e-01f,+1.15920074e-01f,-2.11576466e-02f,
-9.10671279e-02f,-1.01715237e-01f,-9.40191820e-02f,-9.52604637e-02f,+6.45188168e-02f,
+8.50850046e-02f,-1.43470103e-02f,-1.37708941e-02f,+4.87959199e-02f,+1.12469591e-01f,
-5.42525053e-02f,+3.28536704e-02f,-5.05943634e-02f,+2.05013771e-02f,-1.77761484e-02f,
-9.06303898e-03f,+4.19564620e-02f,-6.07342385e-02f,+9.79312137e-02f,+7.89911225e-02f,
+1.64244305e-02f,-4.54610437e-02f,-4.36735526e-02f,+6.22164756e-02f,-3.35698724e-02f,
+8.84862021e-02f,+1.42118067e-01f,-1.15377633e-02f,+1.06417969e-01f,-1.69431362e-02f,
+8.76078680e-02f,-1.35359094e-01f,+6.23839796e-02f,+2.32552812e-02f,+2.49787867e-02f,
-4.22322482e-04f,-4.29579727e-02f,+1.17792413e-02f,+3.95793878e-02f,-6.43504560e-02f,
+6.79316074e-02f,-5.05220816e-02f,-3.90461646e-02f,+7.84597024e-02f,+3.16654257e-02f,
+1.12661272e-01f,-4.58650477e-02f,-1.29699051e-01f,-8.80210549e-02f,+3.53588210e-03f,
+1.57361403e-02f,-6.03844859e-02f,+3.82702351e-02f,-8.13007951e-02f,-5.58887003e-03f,
-7.28225037e-02f,-9.10689496e-03f,+6.03101067e-02f,+9.70266908e-02f,+5.71272289e-03f,
+2.09738631e-02f,-7.95232803e-02f,-8.43202323e-02f,+4.01456952e-02f,+9.40717161e-02f,
+1.03782393e-01f,-2.52894256e-02f,-7.40810856e-02f,+1.17887832e-01f,-1.07521340e-01f,
+8.02599043e-02f,+6.61146268e-02f,+1.06018551e-01f,+5.52253053e-02f,+5.06993234e-02f,
+6.69389442e-02f,+8.29194561e-02f,-4.93959151e-02f,+7.42724910e-02f,+6.79232031e-02f,
-3.88258770e-02f,-1.10065393e-01f,+6.60787001e-02f,+2.13651285e-02f,-1.09544471e-01f,
-9.17287637e-03f,-5.96972071e-02f,+5.54364994e-02f,+7.70961791e-02f,-9.28713456e-02f,
+5.40767657e-03f,-8.56834054e-02f,+8.69874135e-02f,+7.38744512e-02f,+4.77301702e-03f,
-8.51005763e-02f,-9.41849351e-02f,+3.32693681e-02f,-2.79189628e-02f,-9.79747251e-02f,
-7.78139457e-02f,-1.27526606e-02f,+1.17856190e-01f,-7.31449015e-03f,-7.44143948e-02f,
+4.81501818e-02f,-9.73087922e-02f,-9.12110060e-02f,-8.57269093e-02f,+6.05850518e-02f,
+9.18255225e-02f,-7.10978359e-02f,-1.04649276e-01f,-3.50774676e-02f,-1.10993758e-01f,
+1.00687265e-01f,-8.32860395e-02f,-4.30026390e-02f,+7.37609565e-02f,+1.27044236e-02f,
-7.53082708e-03f,-5.10036834e-02f,+3.00005712e-02f,-9.13696513e-02f,+1.37117784e-02f,
-9.67429206e-02f,-1.84343085e-02f,-4.90954630e-02f,+2.02724598e-02f,+5.62924892e-03f,
+6.49681985e-02f,+8.87390003e-02f,+6.02213666e-02f,-7.15937391e-02f,-1.02096982e-01f,
-2.11200807e-02f,+7.22016469e-02f,+4.82755825e-02f,+9.17564109e-02f,-9.30693150e-02f,
+6.89603835e-02f,+6.82511851e-02f,+1.77294314e-02f,+9.34322774e-02f,-7.17531890e-02f,
-4.85097729e-02f,+7.39807561e-02f,+9.88796055e-02f,+2.78274938e-02f,-9.52054635e-02f,
+4.24555279e-02f,+1.13108099e-01f,-7.57626668e-02f,+1.45752952e-02f,+5.66699123e-03f,
+9.80789363e-02f,-4.08364646e-02f,-3.34699787e-02f,+5.43139279e-02f,+2.68437006e-02f,
+1.68111008e-02f,-9.49214995e-02f,-1.14789139e-02f,-2.34047342e-02f,+1.03636868e-01f,
-9.62079316e-02f,+3.74786519e-02f,-2.71137618e-02f,+3.53499502e-02f,+7.77298510e-02f,
-3.57664861e-02f,+1.89713910e-02f,+9.81316417e-02f,+8.09095055e-02f,+6.06397539e-02f,
-7.58032023e-04f,-7.36678541e-02f,-4.53617796e-02f,+1.00390814e-01f,+6.79754391e-02f,
+3.18368971e-02f,-1.67081524e-02f,+7.02992156e-02f,+2.00180560e-02f,-6.77182004e-02f,
+1.44225769e-02f,-2.02984903e-02f,+1.16156280e-01f,-2.57548061e-03f,+3.69064473e-02f,
-5.16814962e-02f,-9.94835645e-02f,-2.70975810e-02f,-1.19580701e-02f,+7.88436383e-02f,
+5.01628742e-02f,-9.58622172e-02f,-8.31649005e-02f,-1.18416212e-02f,-6.41197257e-04f,
+1.62165449e-03f,-8.36704001e-02f,+3.48116755e-02f,+4.62934300e-02f,+9.00077261e-03f,
-9.24319588e-03f,+3.69895138e-02f,-7.96901137e-02f,-4.27470729e-02f,+1.12136781e-01f,
-1.96472034e-02f,+4.93752724e-03f,-2.37108301e-02f,-5.14520854e-02f,-3.30053978e-02f,
+3.93393673e-02f,+2.30546929e-02f,+1.13018580e-01f,-2.40900423e-02f,-9.35684144e-03f,
-8.16213265e-02f,+6.57738224e-02f,-6.27234876e-02f,+3.31204683e-02f,+1.17571903e-02f,
-4.99629229e-02f,-9.53785330e-02f,+1.39557077e-02f,+5.88654801e-02f,+4.71048169e-02f,
-4.46508527e-02f,-1.08644135e-01f,-7.70027488e-02f,-6.36228994e-02f,+7.59289041e-02f,
+4.92025092e-02f,-1.36908907e-02f,-1.05313854e-02f,+1.21213816e-01f,-1.11162990e-01f,
-1.11246325e-01f,-6.49762107e-03f,-1.05942935e-01f,-4.58528586e-02f,+2.35287528e-02f,
-1.05235413e-01f,-1.23552956e-01f,+3.93163264e-02f,+1.30502030e-01f,+2.62039248e-02f,
+1.27834111e-01f,-9.73755717e-02f,-2.50042751e-02f,-4.04626057e-02f,+9.30847526e-02f,
-6.57759979e-02f,-9.25863981e-02f,+6.86179325e-02f,-6.12206757e-02f,+1.03260033e-01f,
+8.44701752e-02f,+5.26048578e-02f,-7.12034777e-02f,-1.20929703e-02f,+4.75853458e-02f,
-3.68244462e-02f,-1.23163149e-01f,-5.43121994e-02f,+1.08588129e-01f,+1.26889944e-01f,
+1.00414127e-01f,-1.07841954e-01f,+1.06506296e-01f,+5.91927283e-02f,+8.52570310e-02f,
-2.73231957e-02f,+3.63572948e-02f,-3.73964421e-02f,-7.58707821e-02f,-1.01016678e-01f,
-6.31210301e-03f,+6.25608340e-02f,+2.41779145e-02f,-1.21616721e-01f,+1.89732444e-02f,
-7.27099031e-02f,+5.24029955e-02f,+4.13934924e-02f,+8.12942833e-02f,+3.95138189e-02f,
-4.76875789e-02f,+1.05991475e-01f,+2.24433932e-02f,+6.53057173e-02f,-4.11057211e-02f,
+9.24424157e-02f,+1.03910841e-01f,+1.86334755e-02f,-4.25224416e-02f,+2.09161565e-02f,
+4.43057790e-02f,-3.70087661e-02f,-5.74732386e-02f,-3.05353180e-02f,+1.02250449e-01f,
-3.47813517e-02f,+5.83032742e-02f,+1.11393914e-01f,-5.05775847e-02f,-9.62977260e-02f,
+6.93810657e-02f,-2.55763866e-02f,-1.07222930e-01f,+9.73831117e-02f,+3.12875919e-02f,
+1.96815487e-02f,+2.70259250e-02f,+2.92045157e-02f,-1.07117474e-01f,-3.71500440e-02f,
+1.06134936e-01f,-2.62560546e-02f,-6.65758997e-02f,-7.71515220e-02f,+3.64099927e-02f,
-1.12765551e-01f,-3.27065140e-02f,+7.13801309e-02f,-7.55009055e-02f,+9.25735608e-02f,
-1.02432773e-01f,+4.98654023e-02f,+9.74778086e-03f,-1.17784090e-01f,+5.72694093e-03f,
-3.48036289e-02f,-2.52187103e-02f,-8.95491242e-02f,-3.64052653e-02f,+8.17386732e-02f,
-1.19234547e-02f,-3.82564142e-02f,+9.34126154e-02f,-2.43120417e-02f,-5.26415855e-02f,
-5.46167791e-02f,-1.11515842e-01f,+8.51593390e-02f,+9.15277824e-02f,-1.00350410e-01f,
+1.46756694e-02f,-6.10828362e-02f,-1.59706473e-02f,-1.69966966e-02f,-1.73507333e-02f,
+2.10921988e-02f,+8.15048441e-02f,+5.61062396e-02f,+2.97338646e-02f,+8.23521763e-02f,
-6.36303127e-02f,+1.00152887e-01f,+1.17160594e-02f,+2.08090022e-02f,+1.08441999e-02f,
-6.01901039e-02f,-8.49389564e-03f,+1.29900835e-02f,-1.54113919e-02f,-2.74933465e-02f,
+2.13538483e-02f,-7.60439932e-02f,-2.68279929e-02f,-1.98725946e-02f,+9.15968120e-02f,
-2.55683530e-02f,-7.66756013e-02f,+9.77103338e-02f,+8.06368794e-03f,+1.90484095e-02f,
+5.95066361e-02f,-9.33274105e-02f,-4.05480340e-02f,+1.17148370e-01f,-1.17213808e-01f,
+1.16734497e-01f,-1.12580970e-01f,-2.94046514e-02f,-6.61702501e-03f,-2.26400718e-02f,
+6.40315413e-02f,+1.02982640e-01f,-7.45371878e-02f,+1.53778167e-02f,-3.24006602e-02f,
-2.55778581e-02f,-6.53128549e-02f,-1.05062395e-01f,+5.41371293e-02f,+3.53751294e-02f,
-1.10123828e-02f,-4.49142680e-02f,-1.11338541e-01f,+7.30767772e-02f,+1.18740378e-02f,
+5.95085323e-04f,+1.99208148e-02f,-3.44894603e-02f,-4.33453694e-02f,+1.05762295e-01f,
-4.22397256e-02f,+3.26441079e-02f,+8.74080062e-02f,-1.14562057e-01f,+3.16647515e-02f,
-1.73322074e-02f,-2.06479076e-02f,-7.63878748e-02f,-8.99858028e-03f,-7.82386437e-02f,
-7.99643472e-02f,+2.71972362e-02f,-2.79627424e-02f,-9.79550853e-02f,+4.21463400e-02f,
+7.95751885e-02f,-3.01802419e-02f,-1.04196928e-01f,-9.33397412e-02f,-1.11486398e-01f,
-6.00589290e-02f,-6.77794032e-03f,-8.79074782e-02f,-1.06240645e-01f,+1.67632103e-03f,
-4.16888632e-02f,-5.65138534e-02f,-3.71518917e-02f,-4.28777002e-02f,+1.46494312e-02f,
-1.91506818e-02f,+7.80492127e-02f,-7.82527030e-03f,-2.43819915e-02f,-1.02204777e-01f,
+4.81290258e-02f,-1.22810006e-01f,+6.29675463e-02f,-2.85349023e-02f,-4.88758162e-02f,
-1.12252228e-01f,+5.27308583e-02f,-2.56410092e-02f,+6.18992485e-02f,-9.55614820e-02f,
-2.62423810e-02f,-4.52460349e-02f,-9.84918028e-02f,+3.81677859e-02f,-5.47516495e-02f,
+2.38088463e-02f,+8.78212899e-02f,+9.31524951e-03f,+5.90693094e-02f,+1.16809912e-01f,
-1.15698660e-02f,+1.03513502e-01f,+2.33429968e-02f,+2.53960509e-02f,+5.83652630e-02f,
-6.09080791e-02f,+3.57807949e-02f,+6.53414205e-02f,-4.39823419e-03f,+3.60000990e-02f,
-8.24083239e-02f,-5.89583106e-02f,-1.30728483e-02f,+7.06973970e-02f,+7.75446882e-03f,
+1.81951150e-02f,+1.11568354e-01f,-6.37592226e-02f,+7.30890408e-02f,+7.22863078e-02f,
-3.91293783e-03f,+2.59188861e-02f,+1.11035351e-02f,-1.13193221e-01f,+7.56494179e-02f,
+6.87376037e-02f,-5.39088547e-02f,+1.19254142e-01f,-1.03535615e-01f,+1.03144206e-01f,
+6.35192841e-02f,+1.18301138e-02f,+5.84826898e-03f,+9.26257148e-02f,-6.27035052e-02f,
+2.28827149e-02f,-6.27715960e-02f,+6.27928749e-02f,-1.51073802e-02f,+1.52261527e-02f,
-4.05392125e-02f,+1.11165091e-01f,-5.13503961e-02f,-4.98053953e-02f,-3.13707665e-02f,
-7.53664225e-03f,+2.73862425e-02f,-3.00620124e-02f,+5.91557696e-02f,+7.43448287e-02f,
+5.63065195e-03f,-8.93897340e-02f,+8.33988562e-02f,-2.54796110e-02f,+5.67783415e-02f,
-8.24694242e-03f,-1.30741343e-01f,+9.40539762e-02f,+8.48906860e-02f,+1.58457123e-02f,
-9.75872427e-02f,-5.89263402e-02f,-4.68518808e-02f,+1.62636489e-03f,+3.67006809e-02f,
+4.79540974e-03f,+2.72625014e-02f,-1.22890770e-01f,+6.87086657e-02f,+3.05765793e-02f,
+5.44572249e-03f,-9.35120434e-02f,-3.09345555e-02f,+4.93804179e-02f,+3.60495523e-02f,
+5.95425069e-02f,+4.02422622e-03f,+1.87715273e-02f,-5.81604615e-02f,+8.49007219e-02f,
-8.18982720e-02f,+1.55176530e-02f,-1.21883983e-02f,+7.84201548e-02f,-1.93605516e-02f,
-3.86651382e-02f,-9.79691371e-02f,-5.95253520e-02f,+1.05868213e-01f,-3.79160568e-02f,
-1.00332737e-01f,+2.14026608e-02f,-4.45272438e-02f,-3.98843753e-04f,+1.29052743e-01f,
+3.36834267e-02f,-9.31050554e-02f,+4.39111143e-03f,+5.37180454e-02f,+8.74024332e-02f,
+9.89426449e-02f,+2.91335806e-02f,+7.08400980e-02f,+3.25025432e-02f,+1.69268884e-02f,
-1.01263873e-01f,+2.74759233e-02f,-3.46650407e-02f,+6.84713647e-02f,-8.39527622e-02f,
-1.00779548e-01f,-3.68833682e-03f,+8.57425705e-02f,-7.70597458e-02f,+3.80984098e-02f,
-9.40739512e-02f,-3.69061343e-02f,-7.79803172e-02f,-6.08261302e-02f,-1.08665660e-01f,
+4.80345115e-02f,+9.18378532e-02f,-7.18691722e-02f,-7.54706934e-02f,+5.90350814e-02f,
-3.56465466e-02f,+9.02660117e-02f,-1.45211071e-02f,+3.29196081e-02f,+8.93911347e-02f,
-9.72123519e-02f,-4.06364240e-02f,-1.00121498e-01f,+6.16966486e-02f,+9.07934457e-02f,
-7.80868754e-02f,-1.22661628e-01f,+1.16884328e-01f,+3.88477370e-02f,-5.58702461e-02f,
+8.11261460e-02f,-7.67431483e-02f,-5.58006205e-02f,+4.65183966e-02f,-2.56716460e-02f,
+8.38503018e-02f,-5.36684953e-02f,+8.19634572e-02f,+5.02207056e-02f,+2.86304560e-02f,
+3.82325649e-02f,-1.10473663e-01f,+6.39223233e-02f,-9.66052637e-02f,-1.60723329e-02f,
-7.13108107e-02f,-3.98111194e-02f,+9.87058654e-02f,-1.00842901e-01f,+7.80325904e-02f,
+9.93583873e-02f,+9.31714848e-02f,+4.28942963e-02f,-3.51401195e-02f,+9.26677585e-02f,
-3.46420072e-02f,-5.40453792e-02f,-5.44677675e-02f,+3.88161018e-02f,-6.84176013e-02f,
-7.26570785e-02f,+9.96620953e-02f,+1.01948470e-01f,+1.09356411e-01f,+1.06714390e-01f,
+9.57851037e-02f,+6.28382042e-02f,-3.97189036e-02f,+5.96660636e-02f,-5.01623936e-02f,
-6.10181652e-02f,-3.46107595e-02f,-7.06353709e-02f,-9.68926772e-02f,+1.12857684e-01f,
+1.00372411e-01f,-8.29581916e-03f,-1.38309374e-02f,-1.08901136e-01f,-7.73096532e-02f,
-1.68735478e-02f,-7.59650022e-02f,+4.13286611e-02f,+7.49110207e-02f,+1.09064683e-01f,
-8.49602222e-02f,+9.69720706e-02f,+5.97448973e-03f,-7.60207474e-02f,+1.23320594e-01f,
+7.92141408e-02f,+8.66318867e-02f,+1.03538796e-01f,-7.07608759e-02f,-9.29434225e-02f,
+6.86526448e-02f,-1.07114501e-01f,-6.27984703e-02f,+4.66384068e-02f,-1.02305092e-01f,
-5.19508906e-02f,+7.43414164e-02f,+6.92865402e-02f,+4.47892025e-02f,+8.91735032e-02f,
+2.26714443e-02f,+1.16886362e-01f,+5.40737845e-02f,+2.08945796e-02f,-3.55286077e-02f,
+9.66567546e-02f,-2.33136583e-02f,-1.10275753e-01f,-4.65790406e-02f,-5.34841642e-02f,
-4.51685563e-02f,+6.05738088e-02f,+6.49491400e-02f,+8.91672745e-02f,-7.46716708e-02f,
+3.02467216e-03f,-8.14602748e-02f,+6.79829121e-02f,-2.48330422e-02f,-2.59479750e-02f,
+5.28899394e-03f,-5.35623021e-02f,-1.27193838e-01f,-1.10414542e-01f,-3.79484259e-02f,
-9.61787999e-03f,+3.26526947e-02f,-2.05095895e-02f,+3.19661610e-02f,+9.30724945e-03f,
-8.43240619e-02f,+8.37884247e-02f,+2.83336136e-02f,+9.71064568e-02f,+1.23804184e-02f,
+4.00257632e-02f,-7.74156079e-02f,-1.06175013e-01f,-8.27411860e-02f,+9.02566165e-02f,
+1.16324849e-01f,-8.86560082e-02f,-4.19088304e-02f,+3.44091803e-02f,-2.81131756e-03f,
+3.13688070e-02f,-6.07893132e-02f,+4.03775722e-02f,-1.18465628e-02f,-3.24743465e-02f,
-2.57058777e-02f,+4.40024696e-02f,-1.14143804e-01f,-5.75694814e-02f,-3.69955339e-02f,
+1.22683883e-01f,-6.52506724e-02f,+6.40377477e-02f,-9.41022411e-02f,+2.65667289e-02f,
-7.94446319e-02f,-9.28149968e-02f,-1.27628529e-02f,-3.65453847e-02f,+1.03833362e-01f,
-9.02817696e-02f,-3.83951440e-02f,+4.68325391e-02f,-1.62259322e-02f,+1.70149822e-02f,
-6.66001216e-02f,-4.55918387e-02f,+1.15467533e-02f,+1.01991341e-01f,+8.55051354e-02f,
+9.03818235e-02f,-7.92788491e-02f,+1.73389912e-04f,+6.51876852e-02f,-7.03060776e-02f,
+1.03896216e-01f,+7.45364800e-02f,+9.37018171e-02f,+1.07718143e-03f,-7.87941813e-02f,
-4.03801017e-02f,+3.30140591e-02f,-2.83271521e-02f,+2.81172022e-02f,-4.79065552e-02f,
+1.11042649e-01f,+3.90413217e-02f,+2.37373170e-02f,-6.72927648e-02f,-6.89002126e-02f,
+1.13577329e-01f,-9.75363702e-02f,+3.26562449e-02f,+6.56477138e-02f,+1.24860033e-02f,
+4.97951433e-02f,+4.79427390e-02f,+8.03670809e-02f,+1.03638820e-01f,-6.42017573e-02f,
-5.22759035e-02f,+4.76210788e-02f,-2.27763355e-02f,+1.74756977e-03f,-6.82270378e-02f,
+1.06396280e-01f,-3.55360322e-02f,+8.79970342e-02f,-1.04376003e-01f,-5.52335866e-02f,
-2.68225148e-02f,+8.99361521e-02f,+2.01125629e-02f,+8.07367265e-03f,+1.62135754e-02f,
-2.94748391e-03f,-1.12630598e-01f,+1.01721310e-03f,-4.63603623e-02f,-3.80558521e-02f,
+5.08469949e-03f,-5.78006320e-02f,-4.42043841e-02f,+4.32633236e-02f,+1.61380041e-02f,
-1.16203807e-01f,+8.85655358e-02f,-8.26353580e-02f,-9.43464041e-02f,+4.25958633e-02f,
+3.60105112e-02f,-6.78159893e-02f,-3.30193564e-02f,+2.39897892e-02f,+4.09604236e-02f,
-6.50230125e-02f,-1.65896062e-02f,-8.95142481e-02f,-3.42001580e-02f,+1.17163911e-01f,
+5.92722297e-02f,-3.49147338e-03f,-9.49523821e-02f,+1.95513926e-02f,-7.15768188e-02f,
+6.72522113e-02f,+1.21095903e-01f,+2.18102261e-02f,-1.07152179e-01f,+4.43002656e-02f,
+7.99085200e-02f,-9.75629166e-02f,+6.14246801e-02f,-1.07925966e-01f,-2.76944414e-02f,
+9.68526378e-02f,+6.77355751e-02f,+3.71073261e-02f,+7.00604245e-02f,+1.59797594e-02f,
-3.48352119e-02f,+8.68111029e-02f,-9.69203338e-02f,-9.27641988e-02f,-9.51759517e-04f,
+6.72559515e-02f,+6.33690283e-02f,-4.08887342e-02f,-1.17225029e-01f,-5.99194169e-02f,
+1.29163489e-02f,+4.81077060e-02f,+1.03980266e-01f,+3.32122222e-02f,+8.45434591e-02f,
+3.63131389e-02f,-7.04067349e-02f,+1.18992105e-02f,-1.82556808e-02f,+8.81416425e-02f,
-8.12009349e-02f,+1.36019289e-03f,+6.49466589e-02f,+1.02884047e-01f,-7.65272826e-02f,
+1.35236757e-03f,+1.02122523e-01f,+4.07495499e-02f,+1.34774446e-02f,+2.81938445e-02f,
+1.74589679e-02f,-3.28386901e-03f,+1.08595312e-01f,-6.86808899e-02f,+4.19743126e-03f,
-9.08642262e-02f,-7.88327679e-02f,-8.27583969e-02f,-1.02783656e-02f,-3.39559875e-02f,
+6.26311079e-02f,-5.62636321e-03f,+9.52557698e-02f,-7.72416294e-02f,-3.58390585e-02f,
+1.08646750e-01f,-6.55427426e-02f,-5.85099198e-02f,+6.29525781e-02f,-1.12469606e-01f,
+9.43195745e-02f,-4.33684625e-02f,-1.05968118e-02f,-7.85347894e-02f,-5.43410480e-02f,
+5.15937172e-02f,+1.04879171e-01f,+9.53374952e-02f,-1.23390555e-02f,-8.87643769e-02f,
+9.18848068e-02f,-5.58760902e-03f,+7.28239343e-02f,+2.04682560e-03f,-1.03568852e-01f,
+1.06648942e-02f,+1.07000202e-01f,+9.39481035e-02f,+1.67241376e-02f,-6.79295361e-02f,
-5.18926494e-02f,+2.62685306e-02f,-5.29283546e-02f,-8.45396072e-02f,-7.43912160e-02f,
-1.05023876e-01f,-7.91297667e-03f,-9.89053845e-02f,+2.84908433e-03f,-4.49917391e-02f,
+4.96114157e-02f,+2.93050185e-02f,+5.83451129e-02f,+9.95889604e-02f,-2.48322189e-02f,
+4.41461094e-02f,+1.41668143e-02f,-4.02498506e-02f,+1.51805263e-02f,-5.45371398e-02f,
-5.93268126e-02f,+1.13281950e-01f,-5.50885014e-02f,+4.99591045e-03f,-8.16792399e-02f,
-9.15590897e-02f,+5.45147620e-02f,+2.22977102e-02f,-5.32549620e-02f,-7.00680390e-02f,
-7.10296929e-02f,-7.62582570e-02f,-4.75273058e-02f,-3.16004455e-02f,-8.45526829e-02f,
+6.32786080e-02f,+3.20274755e-02f,-3.51536311e-02f,+4.86086793e-02f,-3.55853327e-02f,
+9.78231896e-03f,-4.80216034e-02f,+7.55947679e-02f,+7.26488903e-02f,-2.24944633e-02f,
-7.76846632e-02f,-1.07498176e-01f,-6.23786114e-02f,+1.02846242e-01f,+1.08659565e-01f,
+6.80251271e-02f,+1.91038027e-02f,-8.51434991e-02f,+8.14044550e-02f,-1.43013028e-02f,
-8.17562193e-02f,+8.98657963e-02f,+1.09331414e-01f,-7.10955486e-02f,+7.55252987e-02f,
+7.03899264e-02f,+9.76884142e-02f,-5.51411398e-02f,-6.89835697e-02f,+8.58461484e-02f,
+1.03683487e-01f,-9.89324749e-02f,-3.79473828e-02f,-5.03603779e-02f,+6.25939947e-03f,
-3.60230766e-02f,+6.19101860e-02f,-6.09904826e-02f,+6.49074242e-02f,+6.37046322e-02f,
-3.42480317e-02f,+1.25073940e-02f,+3.90594080e-02f,-8.77412558e-02f,-1.35858851e-02f,
-9.51170996e-02f,+5.93803357e-04f,+8.37494340e-03f,+9.36441794e-02f,+2.13301983e-02f,
+6.72030374e-02f,+9.88997295e-02f,-1.10761866e-01f,-1.17141262e-01f,+7.79488385e-02f,
-1.09027244e-01f,-6.14479408e-02f,-5.33648320e-02f,+5.51195666e-02f,+4.70205806e-02f,
+1.01504393e-01f,-1.18501306e-01f,-3.49016488e-02f,+1.00198485e-01f,+6.44744784e-02f,
-1.18023030e-01f,+9.38500538e-02f,-1.24350615e-01f,-9.54049453e-02f,+4.81265076e-02f,
-2.89482195e-02f,-9.26259160e-02f,+8.75599086e-02f,+1.18266791e-02f,+1.84615031e-02f,
+7.53057078e-02f,+1.09661492e-02f,-6.47075251e-02f,+5.31362072e-02f,+1.70847308e-02f,
+4.70615923e-02f,-1.04525276e-01f,+6.63693175e-02f,+1.14509664e-01f,+1.12011641e-01f,
-8.57123286e-02f,-6.70319423e-02f,+3.75981443e-02f,-1.16481781e-01f,-7.70985335e-02f,
-9.80603173e-02f,-3.51231210e-02f,-8.20530355e-02f,+1.28575775e-05f,+9.70234051e-02f,
-9.65648070e-02f,+8.33798051e-02f,-3.29386853e-02f,-7.10192025e-02f,-1.11387081e-01f,
-1.29382044e-01f,-8.97776037e-02f,-1.01901315e-01f,+5.95199503e-02f,-1.27988765e-02f,
+3.50087211e-02f,-9.76052359e-02f,-1.01954155e-01f,+6.98233023e-02f,+2.74967961e-02f,
-1.23287573e-01f,+9.72074047e-02f,+9.13015753e-02f,+7.29949847e-02f,+1.00239798e-01f,
+1.14693023e-01f,-7.83635005e-02f,-6.72725514e-02f,-3.52059603e-02f,-7.50300884e-02f,
-1.20934402e-03f,-7.89908767e-02f,+3.29368636e-02f,+5.15317582e-02f,-8.14698860e-02f,
-3.58797610e-03f,-1.04854867e-01f,+7.15893432e-02f,+6.87858015e-02f,-1.02451384e-01f,
-1.50825689e-02f,+1.11588702e-01f,-7.20910504e-02f,-3.54074650e-02f,+6.43750280e-02f,
+9.86039415e-02f,-4.14650105e-02f,+4.91305552e-02f,+1.21137887e-01f,-7.61784613e-03f,
-1.00216486e-01f,+3.73006314e-02f,-3.21914963e-02f,};
_ssdm_SpecConstant(conv2d_23_kernel_array);
# 3907 "vlsi_eval4.c"




k2c_tensor conv2d_23_kernel;

    for (i = 0; i < 4608; ++i) {
_ssdm_Unroll(1, 0, 16, "");
 conv2d_23_kernel.array[i] = conv2d_23_kernel_array[i];
    }


    conv2d_23_kernel.ndim = 4;
    conv2d_23_kernel.numel = 4608;
    conv2d_23_kernel.shape[0] = 3;
    conv2d_23_kernel.shape[1] = 3;
    conv2d_23_kernel.shape[2] = 16;
    conv2d_23_kernel.shape[3] = 32;
    conv2d_23_kernel.shape[4] = 1;


const float conv2d_23_bias_array[32] = {
-1.61267084e-03f,+9.63731552e-04f,+2.56118039e-03f,-4.24924027e-03f,-1.97840598e-03f,
-2.02866644e-03f,+0.00000000e+00f,+1.09254560e-02f,-4.12326399e-03f,-4.42386558e-03f,
-5.73894591e-04f,+0.00000000e+00f,-4.85784281e-03f,+0.00000000e+00f,+3.26000823e-04f,
-4.97594103e-03f,-5.43238409e-03f,-1.76540553e-03f,-1.42967430e-04f,+1.15183350e-02f,
-5.06593613e-03f,+3.86713597e-04f,-7.85194617e-03f,+5.00536698e-04f,-2.94541102e-03f,
-3.82383470e-03f,+9.35774355e-04f,-2.25352379e-03f,+0.00000000e+00f,-1.09035531e-02f,
+1.22337497e-03f,+3.61672044e-03f,};
_ssdm_SpecConstant(conv2d_23_bias_array);
# 4850 "vlsi_eval4.c"



k2c_tensor conv2d_23_bias;

    for (i = 0; i < 32; ++i) {
_ssdm_Unroll(1, 0, 8, "");
 conv2d_23_bias.array[i] = conv2d_23_bias_array[i];
    }


    conv2d_23_bias.ndim = 1;
    conv2d_23_bias.numel = 32;
    conv2d_23_bias.shape[0] = 32;
    conv2d_23_bias.shape[1] = 1;
    conv2d_23_bias.shape[2] = 1;
    conv2d_23_bias.shape[3] = 1;
    conv2d_23_bias.shape[4] = 1;

size_t max_pooling2d_19_stride[2] = {2,2};
size_t max_pooling2d_19_pool_size[2] = {2,2};




k2c_tensor max_pooling2d_19_output;

    for (i = 0; i < 512; ++i) {
_ssdm_Unroll(1, 0, 16, "");
 max_pooling2d_19_output.array[i] = 0;
    }


    max_pooling2d_19_output.ndim = 3;
    max_pooling2d_19_output.numel = 512;
    max_pooling2d_19_output.shape[0] = 4;
    max_pooling2d_19_output.shape[1] = 4;
    max_pooling2d_19_output.shape[2] = 32;
    max_pooling2d_19_output.shape[3] = 1;
    max_pooling2d_19_output.shape[4] = 1;





k2c_tensor flatten_12_output;
    for (i = 0; i < 512; ++i) {
_ssdm_Unroll(1, 0, 8, "");
 flatten_12_output.array[i] = 0.0;
    }


    flatten_12_output.ndim = 1;
    flatten_12_output.numel = 512;
    flatten_12_output.shape[0] = 512;
    flatten_12_output.shape[1] = 1;
    flatten_12_output.shape[2] = 1;
    flatten_12_output.shape[3] = 1;
    flatten_12_output.shape[4] = 1;




k2c_tensor dense_22_output;
    for (i = 0; i < 32; ++i) {
_ssdm_Unroll(1, 0, 8, "");
 dense_22_output.array[i] = 0.0;
    }

    dense_22_output.ndim = 1;
    dense_22_output.numel = 32;
    dense_22_output.shape[0] = 32;
    dense_22_output.shape[1] = 1;
    dense_22_output.shape[2] = 1;
    dense_22_output.shape[3] = 1;
    dense_22_output.shape[4] = 1;





k2c_tensor dense_22_kernel;

 for (i = 0; i < 16384; ++i) {
_ssdm_Unroll(1, 0, 16, "");
 dense_22_kernel.array[i] = dense_22_kernel_array[i];
    }
    dense_22_kernel.ndim = 2;
    dense_22_kernel.numel = 16384;
    dense_22_kernel.shape[0] = 512;
    dense_22_kernel.shape[1] = 32;
    dense_22_kernel.shape[2] = 1;
    dense_22_kernel.shape[3] = 1;
    dense_22_kernel.shape[4] = 1;



const float dense_22_bias_array[32] = {
-8.73224996e-03f,-4.92934184e-03f,+5.83923771e-04f,-4.32144618e-03f,+4.16831393e-03f,
+3.51074222e-03f,-5.89787634e-03f,-6.08375669e-03f,+5.01501199e-04f,+4.33022535e-04f,
-3.77515308e-03f,-8.81358236e-03f,+4.99365060e-03f,-5.42187644e-03f,-4.89189196e-03f,
-5.89636760e-03f,+7.84417964e-04f,+0.00000000e+00f,-8.48195632e-04f,+0.00000000e+00f,
+1.96831604e-03f,-5.89543767e-03f,-5.89622650e-03f,-5.88010857e-03f,-4.89415135e-03f,
+2.67548789e-03f,+5.29009337e-03f,+2.97897332e-03f,-1.82988530e-03f,+6.45782100e-03f,
-3.71133978e-03f,+3.15405545e-03f,};
_ssdm_SpecConstant(dense_22_bias_array);
# 4954 "vlsi_eval4.c"



k2c_tensor dense_22_bias;



    for (i = 0; i < 32; ++i) {
_ssdm_Unroll(1, 0, 8, "");
 dense_22_bias.array[i] = dense_22_bias_array[i];
    }


    dense_22_bias.ndim = 1;
    dense_22_bias.numel = 32;
    dense_22_bias.shape[0] = 32;
    dense_22_bias.shape[1] = 1;
    dense_22_bias.shape[2] = 1;
    dense_22_bias.shape[3] = 1;
    dense_22_bias.shape[4] = 1;


float dense_22_fwork[16896] = {0};


const float dense_23_kernel_array[64] = {
+2.71187663e-01f,+3.72623146e-01f,-1.96379557e-01f,-1.30965352e-01f,+3.34297240e-01f,
+1.67991444e-01f,+1.80095151e-01f,+4.02806550e-01f,+3.06602955e-01f,-4.15560842e-01f,
+3.53035718e-01f,-3.84905815e-01f,-2.88228452e-01f,+2.95974523e-01f,+3.50646794e-01f,
+2.32967526e-01f,+4.19607788e-01f,-8.59309286e-02f,-6.17947839e-02f,+1.69997752e-01f,
-2.01772615e-01f,+3.74087930e-01f,-1.25851166e-02f,+2.03786284e-01f,+3.21968764e-01f,
-9.57716815e-03f,+9.49531347e-02f,+8.12423765e-04f,-2.96749204e-01f,+3.58773738e-01f,
+3.33061427e-01f,+4.48079817e-02f,+1.77852139e-01f,+7.93973580e-02f,+1.63446933e-01f,
-1.54319406e-01f,-3.69659156e-01f,-2.20482498e-01f,-4.67911959e-02f,-3.75976712e-01f,
+4.06448871e-01f,-4.11884397e-01f,-4.56966981e-02f,+1.54669777e-01f,-3.62678111e-01f,
+2.07825124e-01f,+2.11856246e-01f,+1.89236403e-02f,+3.64652306e-01f,+1.55361101e-01f,
-3.85495126e-01f,+3.69683318e-02f,+1.06873304e-01f,-1.62133515e-01f,-4.39203084e-02f,
-1.41121849e-01f,+4.11373883e-01f,+3.76280159e-01f,-4.11285162e-01f,+3.29892099e-01f,
-1.89212486e-01f,+4.09383714e-01f,+3.52237344e-01f,-2.05068976e-01f,};
_ssdm_SpecConstant(dense_23_kernel_array);
# 4986 "vlsi_eval4.c"



k2c_tensor dense_23_kernel;

    for (i = 0; i < 64; ++i) {
_ssdm_Unroll(1, 0, 8, "");
 dense_23_kernel.array[i] = dense_23_kernel_array[i];
    }


    dense_23_kernel.ndim = 2;
    dense_23_kernel.numel = 64;
    dense_23_kernel.shape[0] = 32;
    dense_23_kernel.shape[1] = 2;
    dense_23_kernel.shape[2] = 1;
    dense_23_kernel.shape[3] = 1;
    dense_23_kernel.shape[4] = 1;

const float dense_23_bias_array[2] = {
+3.44709668e-04f,-4.02648281e-03f,};
_ssdm_SpecConstant(dense_23_bias_array);
# 5018 "vlsi_eval4.c"



k2c_tensor dense_23_bias;

    for (i = 0; i < 2; ++i) {
        dense_23_bias.array[i] = dense_23_bias_array[i

  ];
    }


    dense_23_bias.ndim = 1;
    dense_23_bias.numel = 2;
    dense_23_bias.shape[0] = 2;
    dense_23_bias.shape[1] = 1;
    dense_23_bias.shape[2] = 1;
    dense_23_bias.shape[3] = 1;
    dense_23_bias.shape[4] = 1;

float dense_23_fwork[96] = {0};

k2c_conv2d(&conv2d_22_output,conv2d_22_input_input,&conv2d_22_kernel,
 &conv2d_22_bias,conv2d_22_stride,conv2d_22_dilation);
k2c_maxpool2d(&max_pooling2d_18_output,&conv2d_22_output,max_pooling2d_18_pool_size,
 max_pooling2d_18_stride);
k2c_conv2d(&conv2d_23_output,&max_pooling2d_18_output,&conv2d_23_kernel,
 &conv2d_23_bias,conv2d_23_stride,conv2d_23_dilation);
k2c_maxpool2d(&max_pooling2d_19_output,&conv2d_23_output,max_pooling2d_19_pool_size,
 max_pooling2d_19_stride);
k2c_flatten(&flatten_12_output,&max_pooling2d_19_output);
k2c_dense(&dense_22_output,&flatten_12_output,&dense_22_kernel,
 &dense_22_bias,0,dense_22_fwork);
k2c_dense(dense_23_output,&dense_22_output,&dense_23_kernel,
 &dense_23_bias,1,dense_23_fwork);

}

void navdepp_initialize() {

}

void navdepp_terminate() {

}
