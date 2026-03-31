/*
WEEK 1 — TASK 3 (Swapping - The RIGHT Way)

Goal:
Learn how to use pointers to modify variables outside of a function's local scope.
*/

#include <stdio.h>

// TODO: Update the signature — parameters should be int* (pointers to int)
// We use * to indicate these are addresses, not plain integers.
void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);

    // TODO: Pass the addresses of x and y using &
    // The & operator provides the "map" to where x and y live.
    swap(&x, &y);

    printf("x is %i, y is %i\n", x, y);
}

// TODO: Update the signature and body to use pointers
void swap(int *a, int *b)
{
    // TODO: Use *a and *b to swap the actual values in memory
    // *a means "go to the address stored in a and get the value"
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
