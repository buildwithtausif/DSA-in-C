/*
 * Program: [Demonstrate use of malloc and free]
 * Author:  Tausif Alam, BCA-1EA
 * Date:    2025-11-22
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char * name; // 8 bytes
    int age; // 4 bytes
} person; // 12 bytes but with correct padding = 16 bytes

int main() {

    printf("%llubytes of struct-person\n", sizeof(person));

    // that's 8 bytes
    person * myperson = (person *)malloc(sizeof(person));

    myperson->name = "Hello";
    myperson->age = 48;

    printf("%llubytes of myperson-pointer\n", sizeof(myperson)); // 8 bytes

    printf("\n\nAccessed Values:\n");
    printf("%s\n", myperson->name);
    printf(("%d\n"), myperson->age);

    free(myperson);
    // just flags-off the pointer values and access is restrained,
    // no deletion happens it is still 8 bytes but not pointing anywhere.

    return 0;
}