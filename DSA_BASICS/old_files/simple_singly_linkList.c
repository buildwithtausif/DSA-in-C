#include <stdio.h>
#include <stdlib.h>

/* structure definition */
struct node_def {
    int data;
    struct node_def *next;
};
// using typedef just for my convenience
typedef struct node_def node;
// two nodes of type node_def struct head (first), last
node *head, *last, *current;
// counter var
int count = 1;
int main() {
    int choice; // program control to user
    head = last = current = NULL; // initializing pointers
    head = last = current = (node *)malloc(sizeof(node));
    // ask user to input data into the node
    do {
        printf("\nEnter an integer data: ");
        scanf("%d", &current->data);
        // the current node becomes last when user stops adding new nodes.
        last = current;
        printf("\nDo you want to continue? (1=yes, 0=No): ");
        scanf("%d", &choice);
        // create the node only if user wants to continue
        if (choice == 1) {
            current->next = (node *)malloc(sizeof(node));
            current = current->next;
        }
        // if there is an invalid choice simply skip making a new node, print all nodes
        if (choice != 0 && choice > 1) {
            printf("\nInvalid choice!");
            goto loop_outer;
        }
    } while (choice != 0);

    loop_outer:
    // now in the last->next set it to NULL for singly non-circular linked_list
    current->next = NULL;
    // at line 28 we've successfully made a linked-list now print its data;
    current = head;
    while (current != NULL) {
        printf("\nData-%d = %d", count, current->data);
        current = current->next;
        count++;
    }

    // return
    return 0;
}