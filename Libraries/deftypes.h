

// ===============================================================================
//
// Файл с различными макроопределениями, помогающими при работе с разными
// числовыми типами данных
//
// -------------------------------------------------------------------------------
//
// A file with various macro definitions that help when working with
// different numeric data types
//
// ===============================================================================


#ifndef DEFTYPES_H_
#define DEFTYPES_H_

#include <stdint.h>
#include <limits.h>
#include <stdbool.h>


// definitions of 8-bit types

typedef int8_t     int8;
typedef uint8_t    uint8;
typedef int8_t     i8;
typedef uint8_t    u8;
typedef uint8_t    natural8;

typedef int8_t     INT8;
typedef uint8_t    UINT8;
typedef int8_t     I8;
typedef uint8_t    U8;
typedef uint8_t    NATURAL8;


// definitions of 16-bit types

typedef int16_t    int16;
typedef uint16_t   uint16;
typedef int16_t    i16;
typedef uint16_t   u16;
typedef uint16_t   natural16;

typedef int16_t    INT16;
typedef uint16_t   UINT16;
typedef int16_t    I16;
typedef uint16_t   U16;
typedef uint16_t   NATURAL16;


// definitions of 32-bit types

typedef int32_t    int32;
typedef uint32_t   uint32;
typedef int32_t    i32;
typedef uint32_t   u32;
typedef uint32_t   natural32;

typedef int32_t    INT32;
typedef uint32_t   UINT32;
typedef int32_t    I32;
typedef uint32_t   U32;
typedef uint32_t   NATURAL32;



#ifdef NUM_64BIT_SUPPORT

// definitions of 64-bit types

typedef int64_t    int64;
typedef uint64_t   uint64;
typedef int64_t    i64;
typedef uint64_t   u64;
typedef uint64_t   natural64;

typedef int64_t    INT64;
typedef uint64_t   UINT64;
typedef int64_t    I64;
typedef uint64_t   U64;
typedef uint64_t   NATURAL64;

#endif


// definitions of the float and double real type

typedef float      float32;
typedef float      f32;

typedef float      FLOAT32;
typedef float      F32;


// defining a boolean data type

typedef _Bool      boolean;
typedef _Bool      logical;

typedef _Bool      BOOL;

typedef _Bool      BOOLEAN;
typedef _Bool      LOGICAL;


// minimum and maximum values of certain 8-bit data types

#define MIN_INT_8_VAL      SCHAR_MIN
#define MAX_INT_8_VAL      SCHAR_MAX
#define MIN_UINT_8_VAL     0
#define MAX_UINT_8_VAL     UCHAR_MAX

#define MIN_U8_VAL         0
#define MAX_U8_VAL         UCHAR_MAX

#define MIN_NATURAL8_VAL   0
#define MAX_NATURAL8_VAL   UCHAR_MAX


// minimum and maximum values of certain 16-bit data types

#define MIN_INT16_VAL      SHRT_MIN
#define MAX_INT16_VAL      SHRT_MAX
#define MIN_UINT16_VAL     0
#define MAX_UINT16_VAL     USHRT_MAX

#define MIN_U16_VAL        0
#define MAX_U16_VAL        USHRT_MAX

#define MIN_NATURAL16_VAL  0
#define MAX_NATURAL16_VAL  USHRT_MAX


// minimum and maximum values of certain 32-bit data types

#define MIN_INT32_VAL      INT_MIN
#define MAX_INT32_VAL      INT_MAX
#define MIN_UINT32_VAL     0
#define MAX_UINT32_VAL     UINT_MAX

#define MIN_U32_VAL        0
#define MAX_U32_VAL        UINT_MAX

#define MIN_NATURAL32_VAL  0
#define MAX_NATURAL32_VAL  UINT_MAX



#ifdef NUM_64BIT_SUPPORT

// minimum and maximum values of certain 64-bit data types

#define MIN_INT64_VAL      LLONG_MIN
#define MAX_INT64_VAL      LLONG_MAX
#define MIN_UINT64_VAL     0ULL
#define MAX_UINT64_VAL     ULLONG_MAX

#define MIN_I64_VAL        LLONG_MIN
#define MAX_I64_VAL        LLONG_MAX
#define MIN_U64_VAL        0ULL
#define MAX_U64_VAL        ULLONG_MAX

#define MIN_NATURAL64_VAL  0ULL
#define MAX_NATURAL64_VAL  ULLONG_MAX

#endif



// minimum and maximum values of the FLOAT type (float)

#define MIN_F32_VAL        3.4E-38
#define MAX_F32_VAL        3.4E+38

#define MIN_FLOAT32_VAL    3.4E-38
#define MAX_FLOAT32_VAL    3.4E+38

// boolean value macros
#define OFF      false
#define ON       true
#define FORBID   false
#define ALLOW    true
#define DISABLE  false
#define ENABLE   true

// ------------------- defining macros of basic math constants -------------------

// pi value macro
#define MATH_PI         3.141592f

// the value macro of the Euler number
#define MATH_E          2.718281f

// macro of the square root value of 0.5
#define MATH_SQRT_HALF  0.707106f

// macro of the square root value of 2
#define MATH_SQRT_2     1.414213f

// macro of the square root value of 3
#define MATH_SQRT_3     1.732050f

// macro of the square root value of 5
#define MATH_SQRT_5     2.236067f

// macro values of the natural logarithm from 2
#define MATH_LN_2       0.693147f

// macro values of the natural logarithm from 10
#define MATH_LN_10      2.302585f

// macro of the base 2 logarithm value of the Euler number
#define MATH_LOG_2_E    1.442695f

// macro of the base 10 logarithm value of the Euler number
#define MATH_LOG_10_E   0.434294f

// -------------------- defining macros for manipulating bits --------------------

// macros for setting a single bit
#define SETBIT_HIGH(val, pos) (val |=  (1 << pos))
#define SETBIT_LOW(val, pos)  (val &= ~(1 << pos))

// macro for getting a single bit
#define GETBIT(val, pos) (val & (1 << pos))

// macros for exchanging variable values
#define TSWAP(A, B, val_type) val_type tmp = A; A = B; B = tmp;
#define XORSWAP(A, B) (B ^= (A ^= B)); A ^= B;
#define FXORSWAP(A, B) (*((uint32_t*)&B) ^= (*((uint32_t*)&A) ^= *((uint32_t*)&B))); *((uint32_t*)&A) ^= *((uint32_t*)&B);

// macros for cyclic bit shifting
#define ROTL(val, pos, val_type) (val << pos) | (val >> (sizeof(val_type) * 8 - pos))
#define ROTR(val, pos, val_type) (val >> pos) | (val << (sizeof(val_type) * 8 - pos))


#endif


