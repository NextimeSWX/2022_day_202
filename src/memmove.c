/*
 * E89 Pedagogical & Technical Lab
 * project:     memmove
 * created on:  2023-02-03 - 11:35 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: memmove.c
 */

#include "stu.h"


#include <stdio.h>
void *stu_memmove(void *dest,
                  const void *src,
                  unsigned int n)
{
    char *liste;
    char *nbr;
    unsigned int i;

    i = 0;
    liste = dest;
    nbr = (char*)src;
    if (dest < src) {
        while (i < n) {
            liste[i] = nbr[i];
            i += 1;
        }
    } else {
        while (n > 0) {
            n -= 1;
            liste[n] = nbr[n];
        }
    }
    return (dest);
}
