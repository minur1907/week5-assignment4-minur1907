/*
WEEK 1 — TASK 1 (Pointers & Addresses)

Goal:
Learn how to access and print a memory address.

Task:
1. Use the & operator to get the address of variable n.
2. Use the %p format specifier to print the pointer.
*/

#include <stdio.h>

int main(void)
{
    int n = 50;

    // TODO: Print the address of n using %p and the & operator
    // The & operator means "address of"
    printf("%p\n", &n);
}
