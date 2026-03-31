/*
WEEK 1 — TASK 2 (String Copying - The Wrong Way)

Goal:
Understand that strings in C are pointers to memory addresses.
*/

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get a string
    string s = get_string("s: ");

    // This does NOT copy the string!
    // It only copies the address — s and t now point to the same memory.
    string t = s;

    // Capitalize first letter of t
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    // Print both — are they different?
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    // TODO: Write a comment below explaining WHY this happens:
    // ANSWER: In C, a string is a pointer (char *) to the first character of the text. 
    // When we write 'string t = s;', we are only copying the memory address, not the 
    // actual characters. Therefore, both 's' and 't' point to the exact same location 
    // in memory. Changing one affects the other because they are looking at the same data.
}
