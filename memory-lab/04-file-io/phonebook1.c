/*
WEEK 1 — TASK 4 (File I/O - CSV Phonebook)

Goal:
Learn how to append data to a CSV file and handle file pointers safely.
*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // TODO: Open "phonebook.csv" in append mode "a"
    // "a" mode opens the file for writing at the end of the file (appending)
    FILE *file = fopen("phonebook.csv", "a");

    // TODO: Check if fopen returned NULL and return 1 if so
    // Always check if the file was successfully opened to avoid crashes
    if (file == NULL)
    {
        return 1;
    }

    // Get name and number from the user
    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    // TODO: Write name and number to the file as "name,number\n"
    // We use a comma to separate values for CSV format compatibility
    fprintf(file, "%s,%s\n", name, number);

    // TODO: Close the file
    // Closing the file ensures all data is physically written to the disk
    fclose(file);

    return 0;
}
