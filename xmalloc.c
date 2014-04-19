/**
 *  Filename: xmalloc.c
 *   Created: 2013-12-27 18:34:32
 *      Desc: TODO (some description)
 *    Author: xutao(Tony Xu), butbueatiful@gmail.com
 *   Company: myself
 */

#include <stdlib.h>
#include <string.h>

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
	dst = xmalloc(len);
	strncpy(dst, str, len);

	return dst;
}

void *xmalloc(size_t size)
{
	void *ptr = malloc(size);
	if (!ptr) {
		fprintf(stderr, "malloc(): Cannot allocate memory!\n");
		exit(EXIT_FAILURE);
	}

	return ptr;
}

void *xcalloc(size_t m, size_t n)
{
	void *ptr;

	if (!(ptr = calloc(m, n))) {
		fprintf(stderr, "calloc(): Cannot allocate memory!\n");
		exit(EXIT_FAILURE);
	}

	return ptr;
}

void *xrealloc(void *ptr, size_t n)
{
	if (!(ptr = realloc(ptr, n))) {
		fprintf(stderr, "realloc(): Cannot allocate memory!\n");
		exit(EXIT_FAILURE);
	}

	return ptr;
}
