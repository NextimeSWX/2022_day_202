/*
 * E89 Pedagogical & Technical Lab
 * project:     arrset
 * created on:  2023-02-02 - 14:44 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: arrset.c
 */

#include "stu.h"

void *arrset(void *array,
             void *elem,
             unsigned int elem_size,
             unsigned int n)
{
    unsigned int i;
    unsigned int j;
    char *str;
    char *nbr;

    i = 0;
    j = 0;
    str = (char*)array;
    nbr = (char*)elem;
    while (i < n * elem_size) {
        while (j < elem_size && i < n * elem_size) {
            str[i] = nbr[j];
            j += 1;
            i += 1;
        }
        j = 0;
    }
    return (array);
}
