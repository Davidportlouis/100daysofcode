#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct list_node
{
    int data;
    struct list_node *link;
};

typedef struct list_node node;

struct linked_list
{
    node *head;
    int size;
};

typedef struct linked_list list;

list* create_linked_list()
{
    list* l = (list *)malloc(sizeof(list));
    l->head = NULL;
    l->size = 0;
    return l;
}

bool check_empty(list* l)
{
    return l->size == 0;
}

// insert at front
void insert_at_front(list* l,int val)
{
    node *n = (node *)malloc(sizeof(node));
    n->data = val;
    n->link = l->head;
    l->head = n;
    l->size++;
}

//delete front
int delete_at_front(list* l)
{
    if(check_empty(l))
    {
        printf("List Empty!");
        return 0;
    }
    int val = l->head->data;
    node *temp = l->head;
    l->head = l->head->link;
    free(temp);
    l->size--;
    return val;
}

// insert at end
void insert_at_end(list *l,int val)
{
    node *n = (node *)malloc(sizeof(node));
    n->data = val;
    n->link = NULL;
    node *temp = l->head;
    while(temp != NULL && temp->link!=NULL)
    {
        temp = temp->link;
    }
    if(temp == NULL)
        l->head = n;
    else
        temp->link = n;
    l->size++;
}

int delete_at_end(list *l)
{
    node *temp = l->head;
    while(temp!=NULL && temp->link!=NULL)
    {
        temp=temp->link;
    }
    int val = temp->data;
    free(temp);
    temp->link = NULL;
    return val;
}

int main(void)
{
    list *l = create_linked_list();
    insert_at_end(l,10);
    insert_at_end(l,20);
    while(check_empty(l))
    {
        printf("%d\n",delete_at_end(l));
    }
    return 0;
}
