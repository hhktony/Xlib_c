/**
 *  Filename: test_debug.c
 *   Created: 2013-12-20 00:20:44
 *      Desc: TODO (some description)
 *    Author: xutao(butbueatiful), butbueatiful@gmail.com
 *   Company: myself
 */
#include "debug.h" 

#include <stdio.h>

int main(void)
{
    XDEBUG("This is DEBUG!\n");
    XERROR("This is ERROR!\n");

    return 0;
}
