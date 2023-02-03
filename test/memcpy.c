/*
 * E89 Pedagogical & Technical Lab
 * project:     memcpy
 * created on:  2023-02-02 - 10:45 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: memcpy.c (test)
 */

#include "stu.h"

Test(memcpy, normal) {
    unsigned int arr_size;
    unsigned int i;
    int *dest;
    int *array;
    unsigned int n;

    n = 6;
    i = 0;
    arr_size = sizeof(int) * 12;
    array = malloc(arr_size);
    dest = malloc(arr_size);
    while (i <= 12) {
        array[i] = 0;
        i += 1;
    }
    i = 0;
    stu_memcpy(dest, array , n);
    while (i <= n) {
        cr_assert_eq(dest[i], 0);
        i += 1;
    }
}
