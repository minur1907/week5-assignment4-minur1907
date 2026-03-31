/*
WEEK 1 — TASK 1 (Dereferencing a Pointer)

Goal:
Learn how to use the dereference operator (*) to access the value at a specific memory address.

Task:
1. Print the value of n by dereferencing p using *p.
2. Use the %i format specifier since the final value is an integer.
*/

#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;

    // TODO: Print the value of n by dereferencing p (use *p)
    // The * operator follows the pointer to the actual value
    printf("%i\n", *p);
}
