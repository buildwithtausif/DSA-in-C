#include <stdio.h>
#include <stdlib.h>
// MACROS
#define SIZE 5
// function declaration section
void insert(int *array, int len);
void display(int *array, int len);
void search(int *array, int len);
void delete(int *array, int len);
// Global declaration section
int list[SIZE] = {5, 10, 15};
int main() {
    int choice;
    int *array = &list;
    while (1) {
        printf("\n1. Insert");
        printf("\n2. Display");
        printf("\n3. Search");
        printf("\n4. Delete");
        printf("\n5. Exit");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);
     // handle switch case
        switch (choice) {
            case 1: insert(array, SIZE);
                    break;
            case 2: display(array, SIZE);
                    break;
            case 3: search(array, SIZE);
                    break;
            case 4: delete(array, SIZE);
                    break;
            case 5: exit(0);
            default: printf("\n Invalid Choice");
                     break;
        }
    }
    return 0;
}
// user_def functions
void display(int *array, int const len) {
    for (int i = 0; i <= len; i++) {
        printf(" %d ", array[i]);
    }
}
void insert(int *array, int len) {
    // inserting on the zeroth index
    int counter = len, integer;
    printf("Insert an integer: ");
    scanf("%d", &integer);
    for (; counter >= 0; counter--) {
        // shift one place
        array[counter+1] = array[counter];
    }
    // insert at pos=0
    array[0] = integer;
    // // why to do this?
    // len++;
}
void delete(int *array, int len) {

}
void search(int *array, int len) {

}