/*
WEEK 1 — TASK 4 (File I/O - Byte Copy)

Goal:
Understand how to read and write files byte by byte using fread and fwrite.
*/

#include <stdio.h>

typedef unsigned char BYTE;

int main(int argc, char *argv[])
{
    // Check for correct command-line usage
    if (argc != 3)
    {
        printf("Usage: ./cp source destination\n");
        return 1;
    }

    // TODO: Open argv[1] for reading in binary mode "rb"
    // "rb" stands for "Read Binary"
    FILE *src = fopen(argv[1], "rb");
    if (src == NULL)
    {
        printf("Could not open source file.\n");
        return 1;
    }

    // TODO: Open argv[2] for writing in binary mode "wb"
    // "wb" stands for "Write Binary"
    FILE *dst = fopen(argv[2], "wb");
    if (dst == NULL)
    {
        printf("Could not open destination file.\n");
        fclose(src); // Always close the first file if the second one fails
        return 1;
    }

    BYTE b;

    // TODO: Loop — read one BYTE from src, write it to dst, until src is empty
    // Hint: fread returns the number of items read; stop when it returns 0
    // fread usage: (buffer, size, count, stream)
    while (fread(&b, sizeof(b), 1, src) != 0)
    {
        fwrite(&b, sizeof(b), 1, dst);
    }

    // TODO: Close both files
    // Rule: Always close files to prevent memory leaks or data corruption
    fclose(src);
    fclose(dst);

    printf("File copied successfully!\n");

    return 0;
}
