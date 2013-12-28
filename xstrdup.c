/**
 *  Filename: xstrdup.c
 *   Created: 2013-12-28 21:28:11
 *      Desc: TODO (some description)
 *    Author: xutao(Tony Xu), butbueatiful@gmail.com
 *   Company: myself
 */

#include <string.h>
#include <stdlib.h>

#include "xmalloc.h"

void *xmemdup(const void *p, size_t n)
{
	void *q = xmalloc(n);
	memcpy(q, p, n);
	return q;
}

char *xstrdup(const char *str)
{
	size_t len;
	char *dst;

	len = strlen(str) + 1;
	dst = malloc(len);
	strncpy(dst, str, len);

	return dst;
}
