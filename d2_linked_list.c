// Linked List

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

void printList(struct node *n);

int main(void)
{
    struct node* head = NULL;
    struct node* second = NULL;
    struct node* third = NULL;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    // Assign Data to Node

    head->data = 65735;
    head->next = second;

    second->data = head->data+1;
    second->next = third;

    third->data = second->data+1;
    third->next = NULL;

    printList(head);

    return 0;
}

void printList(struct node *n)
{
    while(n != NULL)
    {
        printf("%d ",n->data);
        n = n->next;
    }
}