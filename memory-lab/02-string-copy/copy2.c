/*
WEEK 1 — TASK 2 (String Copying - The RIGHT Way)

Goal:
Learn how to use malloc and a loop to create a genuine copy of a string in memory.
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

    // Check if get_string failed
    if (s == NULL)
    {
        return 1;
    }

    // TODO: Allocate memory for t — same length as s, plus 1 for the '\0'
    // We use strlen(s) + 1 to account for the NUL terminator
    char *t = malloc(strlen(s) + 1);

    // Check if malloc failed to allocate memory
    if (t == NULL)
    {
        return 1;
    }

    // TODO: Copy each character from s into t, including the '\0'
    // Hint: loop from i = 0 to i <= strlen(s) to include the terminator
    for (int i = 0; i <= strlen(s); i++)
    {
        t[i] = s[i];
    }

    // TODO: Capitalize the first letter of t only
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    // Print both — now only t should be capitalized
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    // Rule: Always free memory allocated with malloc
    free(t);
    
    return 0;
}
