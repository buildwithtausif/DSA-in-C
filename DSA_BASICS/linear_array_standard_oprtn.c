#include <stdio.h>
#include <stdlib.h>
// macros & global variables
#define SIZE_OF_ARRAY 6
// global variables
int my_array[SIZE_OF_ARRAY] = {};
int elem_count = 0; // this is the count of elements in array at a given instant that is current_number of elements in array
/*
 *(*array)[] => resolve () which says go to a pointer and dereference it,
 *              once you dereference it you'll find an array that basically means,
 *              it a 'pointer to an array'
 *
 *              note: it points to the whole memory location of array and not the first element
 */
void show(int length, int (*array)[length]);
void insert(int length, int (*array)[length]);
void del(int length, int (*array)[length]);
void traverse(int length, int (*array)[length]);
void reverse(int length, int (*array)[length]);
// main function
int main() {
    int ch; // the choice by the user from the wizard

    // pointer global array
    int (*to_array)[SIZE_OF_ARRAY] = &my_array;
    while (1) {
        printf("\n1. Display\n2. Insert\n3. Delete\n4. Search\n5. Reverse\n6. Exit\nEnter Your Choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1: show(SIZE_OF_ARRAY, to_array);
                    break;
            case 2: insert(SIZE_OF_ARRAY, to_array);
                    break;
            case 3: del(SIZE_OF_ARRAY, to_array);
                    break;
            case 4: traverse(SIZE_OF_ARRAY, to_array);
                    break;
            case 5: reverse(SIZE_OF_ARRAY, to_array);
                    break;
            case 6: exit(0);
            default: printf(("Invalid Choice!"));
        }
    }
}

// display array elements
void show(int length, int (*array)[length]) {
    for (int i = 0; i < length; i++) {
        printf(" %d ", (*array)[i]);
    }
}

// insert to array at position 'pos'
void insert(int length, int (*array)[length]) {
    int pos, idx;

    if (elem_count <= length) {
        printf("\nEnter the position: ");
        scanf("%d", &pos);

        // the last position
        if (pos == elem_count+1) {
            printf("\nEnter The Number: ");
            scanf("%d", &(*array)[elem_count]);
            // increase the count of elements in the array
            elem_count++;
        }
        // middle & first positions
        else if ((pos <= elem_count) && (pos >= 1)) {
            // shift pre-existing elements one-up, make space for new element
            for (idx = elem_count; idx >= pos; idx++) {
                (*array)[idx] = (*array)[idx-1];
            }
            // add the new element
            printf("\nEnter the number: ");
            scanf("%d", &(*array)[idx]); // add the element at the given position
            // increase the element count in the array
            elem_count++;
        } else {
            printf("\nInvalid Position, out-of-bound position");
        }
    } else {
        printf("\nArray is Full");
    }
}

// delete element in array at position 'pos'
void del(int length, int (*array)[length]) {
    int pos, idx;

    if (elem_count == 0) {
        printf("\nArray is empty, nothing to delete");
    } else {
        printf("\nEnter the position: ");
        scanf("%d", &pos);
        if ((pos>=1) && (pos<=elem_count)) {
            for (idx = pos - 1; idx < elem_count - 1; idx++) {
                (*array)[idx] = (*array)[idx + 1];
            }
            (*array)[idx] = 0;
            elem_count--;
        } else {
            // if position is out-of-bounds
            printf("\nInvalid position, out-of-bounds");
        }
    }
}

// search an element in array at position 'pos'
void traverse(int length, int (*array)[length]) {
    int pos;
    // if the array is empty, handle the case
    if (elem_count == 0) {
        printf("\nArray is Empty");
    } else {
        // get the input from user
        printf("\nEnter position: ");
        scanf("%d", &pos);
        if (pos >= elem_count+1 || pos <= 0) {
            printf("\nInvalid positon, out-of-bounds");
        } else if ((pos>=1) && (pos<=elem_count)){
            printf("\nThe element at %d is %d", pos, (*array)[pos-1]);
        }
    }
}

// reverse the array
void reverse(int length, int (*array)[length]) {
    // int idx;
    // // if the array is empty, handle the case
    // if (elem_count == 0) {
    //     printf("\nArray is Empty");
    // } else {
    //     for (idx = elem_count; idx >= idx - elem_count; idx--) {
    //         (*array)[idx] = (*array)[idx - elem_count];
    //         elem_count--;
    //     }
    // }
}