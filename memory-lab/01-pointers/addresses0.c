/*
WEEK 1 — TASK 1 (Pointers & Addresses)

Goal:
Understand that every variable has a memory address.

Task:
1. Print the value of the integer n.
2. Print the memory address of n using the & operator.
3. Use the %p format specifier for addresses.
*/

#include <stdio.h>

int main(void)
{
    // A plain variable with a value
    int n = 50;

    // 1. Task: Print the value of n
    printf("Value: %i\n", n);

    // 2. Task: Print the memory address of n
    // The & operator means "address of"
    // 3. Task: Use %p for pointers/addresses
    printf("Address: %p\n", &n);
}
