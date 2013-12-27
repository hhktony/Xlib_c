/**
 * @file defs.h
 * @brief 
 * @author xutao butbueatiful@gmail.com
 * @version 1.0
 * @date 2013-12-20
 */

#ifndef DEFS_H
#define DEFS_H

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

#include <stdlib.h>

/* checks the C compiler version */
#if defined (__STDC__)
/* define COMPILER_C89 The compiler is compatible with C89. */
# define COMPILER_C89
# if defined(__STDC_VERSION__)
/* define COMPILER_C90 The compiler is compatible with C90. */
#  define COMPILER_C90
#  if (__STDC_VERSION__ >= 199409L)
/* define COMPILER_C94 The compiler is compatible with C94. */
#   define COMPILER_C94
#  endif
#  if (__STDC_VERSION__ >= 199901L)
/* define COMPILER_C99 The compiler is compatible with C99. */
#   define COMPILER_C99
#  endif
# endif
#endif

enum _xbool
{
  XFALSE = 0,
  XTRUE
};

/* Computer storage units */
#define KB	(1 << (1 * 10))
#define MB	(1 << (2 * 10))
#define GB	(1 << (3 * 10))
#define TB	(1 << (4 * 10))
#define PB	(1 << (5 * 10))ULL
#define EB	(1 << (6 * 10))ULL
// #define ZB	(1 << (7 * 10))ULL
// #define YB	(1 << (8 * 10))ULL

/* define KILO Definition of one Kilo value. */
#define KILO		1000
/* define MEGA Definition of one Mega value. */
#define MEGA		1000000
/* define GIGA Definition of one Giga value. */
#define GIGA		1000000000
/* define TERA Definition of one Tera value. */
#define TERA		1000000000000
/* define PETA Definition of one Peta value. */
#define PETA		1000000000000000
/* define EXA Definition of one Exa value. */
#define EXA		1000000000000000000
/* define ZETTA Definition of one Zetta value. */
#define ZETTA		1000000000000000000000
/* define YOTTA Definition of one Yotta value. */
#define YOTTA		1000000000000000000000000

/* define IS_SPACE True if the character is a space. */
#define	IS_SPACE(c)	(c == ' ' || c == '\t' || c == '\n' || c == '\r')

/* define IS_CHAR True if the character is an ASCII  character. */
#define IS_CHAR(c)	((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
   
/* define IS_NUM True if the character is a numeric digit. */
#define	IS_NUM(c)	(c >= '0' && c <= '9')

/* define IS_HEXA True if the character is an hexadecimal digit. */
#define	IS_HEXA(c)	(IS_NUM(c) || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F'))

#define ABS(x)          ((x) >= 0  ? (x) : -(x))
#define MIN(x, y)       ((x) < (y) ? (x) :  (y))
#define MAX(x, y)       ((x) > (y) ? (x) :  (y))

#define ARRAY_SIZE(x)   (sizeof(x) / sizeof(x[0]))
#define STRING_SIZE(x)  (sizeof(x) - 1)

#define SIZEOF_STR      1024    /* Default string size. */
#define SIZEOF_ARG      32      /* Default argument array size. */

/* ******* MEMOTY MANAGEMENT ********** */
#ifdef USE_BOEHM_GC
/* define XMALLOC Memory allocation macro. */
# define	XMALLOC(s)	(GC_MALLOC(s))
/* define XCALLOC Memory allocation macro. */
# define	XCALLOC(n, s)	(GC_MALLOC(n * s))
/* define XFREE Memory liberation macro. */
# define	XFREE(p)	((void*)p ? (GC_FREE((void*)p), NULL) : NULL, p = NULL)
#else
/* define XCALLOC Memory allocation macro. */
# define	XMALLOC(s)	(calloc(1, s))
/* define XCALLOC Memory allocation macro. */
# define	XCALLOC(n, s)	(calloc(n, s))
/* define XFREE Memory liberation macro. */
# define	XFREE(p)	((void*)p ? (free((void*)p), NULL) : NULL, p = NULL)
#endif /* USE_BOEHM_GC */

#if defined(__cplusplus)
}
#endif /* __cplusplus */

#endif /* end of include guard: DEFS_H */
