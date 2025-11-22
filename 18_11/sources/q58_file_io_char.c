/*
 * Program: [Program to open a file, read character and write into file, close and re-open]
 * Author:  Tausif Alam, BCA-1EA
 * Date:    2025-11-22
 */

#include <stdio.h>

int main()
{
    printf("Tausif Alam, BCA-1EA\n\n");

    FILE *fp;

    // Write to file
    fp = fopen("q58.txt", "w");
    if (fp == NULL)
    {
        printf("FILE NOT OPENED");
        return 1;
    }

    printf("Enter TEXT to save: ");
    char c[100];
    fgets(c, 100, stdin);

    fprintf(fp, "%s", c);
    fclose(fp);

    // Reopen to read
    fp = fopen("q58.txt", "r");
    if (fp == NULL)
    {
        printf("FILE NOT OPENED");
        return 1;
    }

    char reader[100];
    fgets(reader, 100, fp);

    printf("Text read from file: %s\n", reader);

    fclose(fp);
    return 0;
}
