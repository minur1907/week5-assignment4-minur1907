/*
WEEK 1 — TASK 1 (Storing a Pointer)

Goal:
Learn how to store a memory address in a pointer variable.

Task:
1. Declare a pointer p and store the address of n in it.
2. Print the address stored in p using the %p format specifier.
*/

#include <stdio.h>

int main(void)
{
    int n = 50;

    // TODO: Declare a pointer p that stores the address of n
    // Use & operator to get the address
    int *p = &n;

    // TODO: Print the address stored in p using %p
    // p now contains the address, so we pass p directly
    printf("%p\n", p);
}
