/*
WEEK 1 — TASK 2 (String Copying - The SAFE Way)

Goal:
Practice robust memory management by checking for NULL and using standard libraries.
*/

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // Get a string
    char *s = get_string("s: ");

    // TODO: Check if s is NULL and return 1 if so
    // This prevents the program from crashing if get_string fails
    if (s == NULL)
    {
        return 1;
    }

    // TODO: Allocate memory for t
    char *t = malloc(strlen(s) + 1);

    // TODO: Check if t is NULL and return 1 if so
    // Always check if malloc successfully allocated memory
    if (t == NULL)
    {
        return 1;
    }

    // TODO: Copy s into t using strcpy
    // strcpy is faster and safer than a manual loop
    strcpy(t, s);

    // TODO: Capitalize t[0] only if the string is not empty
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    // Print both strings
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    // TODO: Free the memory you allocated
    // Rule: Every malloc must have a corresponding free
    free(t);

    return 0;
}
