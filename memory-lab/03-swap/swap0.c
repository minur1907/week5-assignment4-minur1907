/*
WEEK 1 — TASK 3 (Swapping - The WRONG Way)

Goal:
Understand that C passes arguments by value by default.
*/

#include <stdio.h>

void swap(int a, int b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    
    // This calls the function with copies of x and y
    swap(x, y);
    
    printf("x is %i, y is %i\n", x, y);
}

void swap(int a, int b)
{
    // These are local copies. Swapping them does not affect x and y in main.
    int tmp = a;
    a = b;
    b = tmp;

    // TODO: Explain below why the swap doesn't work:
    // ANSWER: This fails because C uses "Call by Value." When we call swap(x, y), 
    // the function receives copies of the values (1 and 2) and stores them in 
    // new local variables 'a' and 'b'. While 'a' and 'b' are successfully swapped 
    // inside the function, the original variables 'x' and 'y' in main remain 
    // unchanged because the function never had access to their memory addresses.
}
