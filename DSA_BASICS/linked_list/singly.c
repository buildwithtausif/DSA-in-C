#include <stdio.h>
#include <stdlib.h>
// node structure
struct node_def {
    int data;
    struct node_def *next_node;
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
// main
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
}
void append() {
    // no node exists
    if (node_count <= 0 || head == NULL) {
          head = last = current = (node *)malloc(sizeof(node));
          if (current == NULL) {
              printf("Memory allocation failed. \n");
              return;
          }
          printf("\nEnter an int-data: ");
          scanf("%d", &current->data);
          current->next_node = NULL;
          last = current;
          node_count++;
    } else {
        current = (node *)malloc(sizeof(node));
        printf("\nEnter an int-data: ");
        scanf("%d", &current->data);
        current->next_node = NULL;
        last->next_node = current;
        last = current;
        node_count++;
    }
}
void insert() {
    int pos, i; // position to which a new-node will be inserted
    // if no node exists
    if (node_count <= 0 || head == NULL) {
        printf("\nEmpty list!, use append()\n");
    } else {
        current = NULL; // to create new node
        current = (node *)malloc(sizeof(node));
        printf("\nEnter an int-data: ");
        scanf("%d", &current->data);
        current->next_node = NULL;
        printf("\nEnter Position (nodes: %d): ", node_count);
        scanf("%d", &pos);
        if (pos == 1) {
            current->next_node = head;
            head = current;
            node_count++;
        }else if (pos > 1 && pos <= node_count) {
            node *temp = head;
            for (i = 1; i <= pos-2; i++) {
                temp = temp->next_node;
            }
            current->next_node = temp->next_node;
            temp->next_node = current;
            node_count++;
        } else {
            printf("\nPosition is out-of-bound");
        }
    }
}
void delete() {
    int pos, i;
    if (node_count <= 0 || head == NULL) {
        printf("\nEmpty list!, use append()\n");
    } else {
        printf("\nEnter Position: ");
        scanf("%d", &pos);
        if (pos == 1) {
            node *temp = head;
            head = head->next_node;
            free(temp);
            node_count--;
        } else if (pos > 1 && pos <= node_count) {
            node *temp = head;
            for (i = 1; i <= pos-2; i++) {
                temp = temp->next_node;
            }
            node *temp1 = temp->next_node;
            temp->next_node = temp->next_node->next_node;
            node_count--;
            free(temp1);
        } else {
            printf("\nPosition is out-of-bound");
        }
    }
}
void display() {
    if (node_count <= 0 || head == NULL) {
        printf("\nEmpty list!, use append()\n");
    } else {
        current = head;
        for (int i = 1; i <= node_count; i++) {
            printf("\nNode_Data_%d =  %d\n", i, current->data);
            current = current->next_node;
        }
    }
}
void search() {
    int data_to_search, found = 0;
    printf("\nEnter item to search: ");
    scanf("%d", &data_to_search);
    if (head == NULL || node_count <= 0) {
        printf("\nEmpty list!, use append()\n");
    } else {
        current = head;
        while (current != NULL) {
            if (current->data == data_to_search) {
                found = 1;
                break;
            } else {
                current = current->next_node;
            }
        }
        // prompt user
        if (found == 0) {
            printf("\nData is found");
        } else {
            printf("\nData not found");
        }
    }
}
