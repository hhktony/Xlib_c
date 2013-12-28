/**
 *  Filename: xmalloc.h
 *   Created: 2013-12-27 18:45:47
 *      Desc: TODO (some description)
 *    Author: xutao(Tony Xu), butbueatiful@gmail.com
 *   Company: myself
 */
#ifndef XMALLOC_H
#define XMALLOC_H

#include <stdio.h>

void *xmalloc(size_t size);
void *xcalloc(size_t nmemb, size_t size);
void *xrealloc(void *ptr, size_t size);

char *xstrdup(const char *str);
void *xmemdup(const void *p, size_t n);

#endif /* end of include guard: XMALLOC_H */

