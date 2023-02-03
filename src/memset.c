/*
 * E89 Pedagogical & Technical Lab
 * project:     memset
 * created on:  2023-02-01 - 14:49 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: memset.c
 */

#include "stu.h"

void *stu_memset(void *ptr, char byte, unsigned int n)
{
    unsigned int i;
    char *dest;

    i = 0;
    dest = (char*)ptr;
    while (i <= n) {
        dest[i] = byte;
        i += 1;
    }
    return (dest);
}
