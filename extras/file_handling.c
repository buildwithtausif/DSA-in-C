/**
 * Program: All about file handling
 * Author: Tausif Alam
 * Date: 27-11-2025
**/
#include <stdio.h>

int main() {
    printf("Studying File handler\n\n");
    // first open file in writing mode
    FILE *fp;
    // fp = fopen("./file_handling_char.txt", "w");
    // // // prompt error if no file is open fp return null if file do not exist
    // if (!fp) {
    //     printf("Error opening file\n");
    //     return 1;
    // }
    // // when everything is 200ok
    // // at this point a blank file is created in the system
    // // write something of our into the file
    // char data[40] = "this machines say i can handle files";
    // // int j;
    // // for (j = 0; j < 36; j++) {
    // //     putc(data[j], fp);
    // // }
    // fputs(data, fp); // adds that string char[]
    // fclose(fp);
    //
    // printf("\n\nData successfully written in file");
    //
    // // now reading from this file
    // fp = fopen("./file_handling_char.txt", "r");
    // printf("\n\nRead from file: ");
    // // fgets read char-by-char
    // while (fgets(data, 100, fp) != NULL) {
    //     printf("%s", data);
    // }
    // fclose(fp);

    // so far so good, I wrote string of characters in a file
    // now entering integers in a file
    fp = fopen("./file_handling_int.bin", "wb");
    if (!fp) {
        printf("Error opening file\n");
        return 1;
    }
    int data2[5] = {12345678, 2, 3, 4, 5};
    int i;
    for (i = 0; i < 5; i++) {
        putw(data2[i], fp);
    }
    fclose(fp);
    printf("\n\nData successfully written in file");
    // now read this integer file
    fp = fopen("./file_handling_int.bin", "rb");
    printf("\n\nRead from file: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", getw(fp));
    }
    fclose(fp);
    /* a very genuine question is, the same program when writes a character string
     * and when I open that character wala file it shows me the same string but
     * while writing an int value and doing the same action it shows some garbage values
     * but when machine reads it is read correctly... how?
     */
    /**
     * putw, getw are obsolete functions
     */
    return 0;
}

FILE *fp;
