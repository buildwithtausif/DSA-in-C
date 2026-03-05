#include <stdio.h>
#include <stdlib.h>

struct node_def {
    int data;
    struct node_def *prev, *next;
};
typedef struct node_def node;
node *head, *last, *current;
// global counter var
int count = 1;
int main(){
    int choice;
    head = last = current = NULL;
    head = last = current = (node *)malloc(sizeof(node));
    do {
        printf("\nEnter an integer data: ");
        scanf("%d", &current->data);
        // the current node becomes last when user stops adding new nodes.
        last = current;
        printf("\nDo you wish to continue? (1=yes, 0=No): ");
        scanf("%d", &choice);
        // create the node only if user wants to continue
        if (choice == 1) {
            current->next = (node *)malloc(sizeof(node));
            current = current->next;
            current->prev = last;
        }
        // if there is an invalid choice simply skip making a new node, print all nodes
        if (choice != 0 && choice > 1) {
            printf("\nInvalid choice!");
            goto loop_outer;
        }
    } while (choice != 0);
    loop_outer:
    head->prev = NULL;
    last->next = NULL;
    // at line 38 we've successfully created doubly-linkedlist, now print
    // first to last
    current = head;
    printf("\nFirst To Last:-");
    while (current != NULL) {
        printf("\nData-%d = %d", count, current->data);
        current = current->next;
        count++;
    }
    // last to first
    current = last;
    count = 1;
    printf("\nLast To First:-");
    while (current != NULL) {
        printf("\nData-%d = %d", count, current->data);
        current = current->prev;
        count++;
    }
    return 0;
}