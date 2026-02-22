#include <stdio.h>
#include <stdlib.h>

#define SIZE_OF_ARRAY 10
int my_array[SIZE_OF_ARRAY] = {0};
int elem_count = 0; 

// Function Prototypes
void show(int length, int (*array)[length]);
void insert(int length, int (*array)[length]);
void del(int length, int (*array)[length]);
void search(int length, int (*array)[length]);
void reverse(int length, int (*array)[length]);
void merge(int length, int (*array)[length]);

int main() {
    int ch;
    int (*to_array)[SIZE_OF_ARRAY] = &my_array;

    while (1) {
        printf("\n1. Display\n2. Insert\n3. Delete\n4. Search\n5. Reverse\n6. Merge\n7. Exit\nEnter Choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1: show(SIZE_OF_ARRAY, to_array); break;
            case 2: insert(SIZE_OF_ARRAY, to_array); break;
            case 3: del(SIZE_OF_ARRAY, to_array); break;
            case 4: search(SIZE_OF_ARRAY, to_array); break;
            case 5: reverse(SIZE_OF_ARRAY, to_array); break;
            case 6: merge(SIZE_OF_ARRAY, to_array); break;
            case 7: exit(0);
            default: printf("Invalid Choice!");
        }
    }
}

void show(int length, int (*array)[length]) {
    if (elem_count == 0) {
        printf("\nArray is empty.");
        return;
    }
    printf("\nElements:");
    for (int i = 0; i < elem_count; i++) {
        printf(" %d ", (*array)[i]);
    }
    printf("\n");
}

void insert(int length, int (*array)[length]) {
    int pos, idx;
    if (elem_count >= length) {
        printf("\nArray is Full");
        return;
    }
    printf("\nEnter position (1 to %d): ", elem_count + 1);
    scanf("%d", &pos);

    if (pos >= 1 && pos <= elem_count + 1) {
        // Shift elements right
        for (idx = elem_count; idx >= pos; idx--) {
            (*array)[idx] = (*array)[idx - 1];
        }
        printf("Enter the number: ");
        scanf("%d", &(*array)[pos - 1]);
        elem_count++;
    } else {
        printf("\nInvalid Position");
    }
}



void del(int length, int (*array)[length]) {
    int pos, idx;
    if (elem_count == 0) {
        printf("\nArray is empty");
    } else {
        printf("\nEnter position to delete: ");
        scanf("%d", &pos);
        if (pos >= 1 && pos <= elem_count) {
            for (idx = pos - 1; idx < elem_count - 1; idx++) {
                (*array)[idx] = (*array)[idx + 1];
            }
            elem_count--;
        } else {
            printf("\nInvalid position");
        }
    }
}

void search(int length, int (*array)[length]) {
    int target, found = 0;
    printf("\nEnter number to search: ");
    scanf("%d", &target);
    for (int i = 0; i < elem_count; i++) {
        if ((*array)[i] == target) {
            printf("\n%d found at position %d", target, i + 1);
            found = 1;
            break;
        }
    }
    if (!found) printf("\nNot found.");
}

void reverse(int length, int (*array)[length]) {
    if (elem_count == 0) return;
    for (int i = 0; i < elem_count / 2; i++) {
        int temp = (*array)[i];
        (*array)[i] = (*array)[elem_count - 1 - i];
        (*array)[elem_count - 1 - i] = temp;
    }
    printf("\nArray Reversed.");
}



void merge(int length, int (*array)[length]) {
    int n2;
    printf("\nHow many elements in the second array? ");
    scanf("%d", &n2);

    if (elem_count + n2 > length) {
        printf("\nError: Not enough space in primary array to merge.");
        return;
    }

    printf("Enter %d elements:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &(*array)[elem_count]);
        elem_count++;
    }
    printf("\nMerged successfully.");
}