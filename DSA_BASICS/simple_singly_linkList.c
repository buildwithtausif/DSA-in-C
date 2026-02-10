#include <stdio.h>
#include <stdlib.h>
/*
 * Potential memory leak in it
 *
 */
struct node {
    int data;
    struct node *next;
} *head, *last;

int main() {
    int ch;
    head = last = NULL;
    head = last = (struct node *)malloc(sizeof(struct node));

    do {
        printf("Enter any data: ");
        scanf("%d", &last->data);
        last->next = (struct node *)malloc(sizeof(struct node));
        last = last->next;
        printf("\nDo you want to continue");
        scanf("%d", &ch);
    } while (ch != 0);
    last->next = NULL;
    do {
        printf("\nData = %d", head->data);
        head = head->next;
    } while (head != NULL);
    return 0;
}