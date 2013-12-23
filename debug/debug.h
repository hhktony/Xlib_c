/*
 * $Id: debug.h,v 1.5 2006/01/30 23:07:57 mclark Exp $
 *
 * Copyright (c) 2004, 2005 Metaparadigm Pte. Ltd.
 * Michael Clark <michael@metaparadigm.com>
 * Copyright (c) 2009 Hewlett-Packard Development Company, L.P.
 *
 * This library is free software; you can redistribute it and/or modify
 * it under the terms of the MIT license. See COPYING for details.
 *
 */

#ifndef _DEBUG_H_
#define _DEBUG_H_

#include <stdlib.h>

#ifdef __cplusplus
extern "C"
{
#endif

#ifdef NDEBUG
#define XDEBUG(format...)
#else
#define XDEBUG(format, ...) do { \
    fprintf(stderr, "[\033[33mDEBUG\033[m](%s:%d) ", __FILE__, __LINE__); \
    fprintf(stderr, format, ##__VA_ARGS__); \
} while(0)
#endif

#define XERROR(format, ...) do { \
    fprintf(stderr, "[\033[31mERROR\033[m](%s:%d) ", __FILE__, __LINE__); \
    fprintf(stderr, format, ##__VA_ARGS__); \
    exit(0); \
} while(0)

#ifdef __cplusplus
}
#endif

#endif
