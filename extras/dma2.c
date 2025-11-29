/*
* Program: [Demonstrate use of malloc and free]
 * Author:  Tausif Alam, BCA-1EA
 * Date:    2025-11-22
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char *name; // This is NOT 1 byte. This is a pointer.
    // On 64-bit systems, a pointer takes 8 bytes.
    int age;    // 4 bytes
} person;       // Expected size: 12 bytes, but padding applies.

int main() {

    printf("%llu\n", sizeof(person));
    // Output: 16 bytes on 64-bit machines.
    // WHY? Because of STRUCT PADDING (explained below).

    person *myperson = (person *)malloc(sizeof(person));

    myperson->name = "Hello";   // You assign a pointer to a string literal
    // The pointer (8 bytes) stores the address.
    myperson->age = 48;         // 4 bytes

    printf("%llu\n", sizeof(myperson));
    // Output: 8 bytes because `myperson` is a pointer.
    // `sizeof(pointer)` is always 8 bytes on 64-bit.

    printf("%s\n", myperson->name);
    printf("%d\n", myperson->age);

    free(myperson);

    return 0;
}
