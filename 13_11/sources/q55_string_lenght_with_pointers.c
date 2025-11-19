/*
 * Program: [ Program to find length of string using pointers. ]
 * Author:  Tausif Alam, BCA-1EA
 * Date:    " . 2025.Year . "-" . 11.Month . "-" . 13.Day . "
 */

#include <stdio.h>

int main() {
    printf("Tausif Alam, BCA-1EA\n\n");

    char string[100];
    char *p = string;
    int length = 0;

    printf("Enter a string: ");
    gets(string);

    while (*p != '\0') {
        length++;
        p++;
    }

    printf("Length = %d\n", length);

    return 0;
}
