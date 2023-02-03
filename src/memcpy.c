/*
 * E89 Pedagogical & Technical Lab
 * project:     memcpy
 * created on:  2023-02-02 - 10:44 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: memcpy.c
 */

#include "stu.h"

void *stu_memcpy(void *dest,
                 const void *src,
                 unsigned int n)
{
    unsigned int i;
    char *liste;
    char *str_dest;

    i = 0;
    liste = (char*)src;
    str_dest = (char*)dest;
    while (i <= n) {
        str_dest[i] = liste[i];
        i += 1;
    }
    return (dest);
}
