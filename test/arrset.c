/*
 * E89 Pedagogical & Technical Lab
 * project:     arrset
 * created on:  2023-02-02 - 14:52 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: arrset.c (test)
 */

#include "stu.h"

Test(arrset, inttest) {
    unsigned int elem_size;
    int *array;
    int default_value = 1970;

    elem_size = sizeof(int);
    array = malloc(elem_size * 89);
    arrset(array, &default_value, elem_size, 89);

    int i = 0;
    while (i < 89) {
        cr_assert_eq(array[i], 1970);
        i += 1;
    }
}

Test(arrset, chartest) {
    unsigned int elem_size;
    char *array;
    char default_value = 'b';

    elem_size = sizeof(char);
    array = malloc(elem_size * 20);
    arrset(array, &default_value, elem_size, 20);

    int i = 0;
    while (i < 20) {
        cr_assert_eq(array[i], 'b');
        i += 1;
    }
}

Test(arrset, charlistetest) {
    unsigned int elem_size;
    char *array;
    char *default_value = "blob";

    elem_size = sizeof(char) * 5;
    array = malloc(elem_size * 20);
    arrset(array, default_value, elem_size, 20);

    unsigned int i = 0;
    while (i <= elem_size * 19) {
        cr_expect_str_eq(&array[i], default_value);
        cr_expect_eq(array[i], 'b');
        cr_expect_eq(array[i + 1], 'l');
        cr_expect_eq(array[i + 2], 'o');
        cr_expect_eq(array[i + 3], 'b');
        i += 5;
    }
}
