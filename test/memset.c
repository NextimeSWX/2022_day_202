/*
 * E89 Pedagogical & Technical Lab
 * project:     memset
 * created on:  2023-02-01 - 14:42 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: memset.c (test)
 */

#include "stu.h"

Test(memset, normal) {
    unsigned int arr_size;
    int *array;
    unsigned int i;

    i = 0;
    arr_size = sizeof(int) * 12;
    array = malloc(arr_size);
    stu_memset(array, 0, arr_size);
    while (i <= 12) {
        cr_assert_eq(array[i], 0);
        i += 1;
    }
}
