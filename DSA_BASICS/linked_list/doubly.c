#include <stdio.h>
#include <stdlib.h>

// node structure
struct node_def {
    int data;
    struct node_def *next_node, *prev_node;
};
// type-definition for node
typedef struct node_def node;
node *head, *current, *last;
int node_count = 0; // count of total nodes

// function prototypes
void append();
void insert();
void delete();
void display();
void search();

int main() {
    int choice;
    while (1) {
        printf("\n1.Append\n2.Insert\n3.Delete\n4.Display\n5.Search\n6.Exit\nEnter Your Choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: append(); break;
            case 2: insert(); break;
            case 3: delete(); break;
            case 4: display(); break;
            case 5: search(); break;
            case 6: exit(0);
            default: printf("\nInvalid Choice\n");
        }
    }
    return 0;
}
void append() {
    // check if list exists
    if (node_count <= 0 || head == NULL) {
        // create a node
        head = current = last = (node *)malloc(sizeof(node));
        if (current == NULL) {
            printf("\nMemory Allocation Failed!");
            return;
        }
        // remove garbage pointer from prev. segment of the first node (as this is not a circular doubly list)
        current->prev_node = NULL;
        // get the data for data partiion of node
        printf("\nEnter any int-data: ");
        scanf("%d", &current->data);
        // since it is the first node so remove garbage reference from next-partion also
        current->next_node = NULL;
        // now our last node becomes our current node
        last = current;
        // increment the node_count
        node_count++;
    } else {
        current = (node *)malloc(sizeof(node));
        printf("\nEnter an int-data: ");
        scanf("%d", &current->data);
        current->next_node = NULL;
        current->prev_node = last;
        last->next_node = current;
        last = current;
        // increment the node_count
        node_count++;
    }
}
void insert() {
    // pos is "position to which a new-node will be inserted"
    int pos, i;
    // check if list exists
    if (node_count <= 0 || head == NULL) {
        printf("\nEmpty list!, use append()\n");
        return;
    } else {
        current = NULL; // to create a new node
        current = (node *)malloc(sizeof(node));
        printf("\nEnter an int-data: ");
        scanf("%d", &current->data);
        current->next_node = NULL;
        current->prev_node = NULL;
        printf("Enter Position (nodes: %d", node_count);
        scanf("%d", &pos);
        if (pos == 1) {
            current->next_node = head;
            current->prev_node = NULL;
            head = current;
            node_count++;
        } else if (pos > 1 && pos <= node_count) {
            node *temp = head;
            for (i = 1; i <= pos-2; i++) {
                temp = temp->next_node;
            }
            current->next_node = temp->next_node;
            current->prev_node = temp->prev_node;
            temp->next_node = current;
            node_count++;
        } else {
            printf("\nPosition is out-of-bound");
        }
    }
}
// void delete() {
//     int pos, i;
//     if (node_count <= 0 || head == NULL) {
//         printf("\nEmpty list!, use append()\n");
//         return;
//     } else {
//         printf("\nEnter Position: ");
//         scanf("%d", &pos);
//         if (pos == 1) {
//             node *temp = head;
//             head = head->next_node;
//             free(temp);
//             node_count--;
//         } else {
//             if (pos > 1 && pos <= node_count) {
//                 node *temp = head;
//                 for (i = 1; i <= pos-2; i++) {
//                     temp = temp->next_node;
//                 }
//                 node *temp1 = temp->next_node;
//                 temp->next_node = temp->next_node->next_node;
//                 node_count--;
//                 free(temp1);
//             } else {
//                 printf("\nPosition is out-of-bound");
//             }
//         }
//     }
// }
