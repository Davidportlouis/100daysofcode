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

// front operations
void insert_front(list *l,int val)
{
    node *n = (node *)malloc(sizeof(node));
    n->data = val;
    n->link = l->head;
    l->head = n;
    l->size++;
}

int delete_front(list *l)
{
    if(is_empty(l))
    {
        printf("List Empty\n");
        return 0;
    }
    int val = l->head->data;
    node *temp = l->head;
    l->head = l->head->link;
    free(temp);
    l->size--;
    return val;
}

int main(void)
{
    list *l = create_list();
    insert_front(l,10);
    insert_front(l,20);
    while(!is_empty(l))
    {
        printf("%d\n",delete_front(l));
    }
    return 0;
}
