// Linked List

#include<stdio.h>
#include<stdlib.h>

void printList(struct node *n);

struct node
{
    int data;
    struct Node* next;
};

int main(void)
{
    struct node* head = NULL;
    struct node* second = NULL;
    struct node* third = NULL;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    // Assign Data to Node

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

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