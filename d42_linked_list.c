// Implementation of linked list
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node 
{
    int data;
    struct node *link;
};

typedef struct node node;

struct list
{
    node *head;
    int size;
};

typedef struct list list; 

bool is_empty(list *l)
{
    return l->size == 0;
}

list * create_list()
{
    list *l = (list *)malloc(sizeof(list));
    l->head = NULL;
    l->size = 0;
    return l;
}

