/*
 * E89 Pedagogical & Technical Lab
 * project:     Rev
 * created on:  2022-11-22 - 09:48 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: stu.h
 */

#ifndef STU_H_
#define STU_H_

#include <criterion/criterion.h>
#include <unistd.h>

void *stu_memset(void *ptr, char byte, unsigned int n);
void *stu_memcpy(void *dest,
                 const void *src,
                 unsigned int n);
void *arrset(void *array,
             void *elem,
             unsigned int elem_size,
             unsigned int n);
void *stu_memmove(void *dest,
                  const void *src,
                  unsigned int n);

#endif
