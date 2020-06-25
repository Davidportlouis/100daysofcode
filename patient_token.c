#include<stdio.h>
#include<stdlib.h>


typedef struct lnode
{
    char *name;
    int hrs;
    int mins;
    struct lnode *link;
} lnode;

typedef struct list
{
    lnode *head;
    int size;
} list;

int check_empty(list *l)
{
    return l->size == 0;
}

list* create_list()
{
    list *l = (list*)malloc(sizeof(list));
    l->head = NULL;
    l->size = 0;
    return l;
}

void insert(list *l,char *name,int hrs,int mins)
{
    lnode *ln = (lnode*)malloc(sizeof(lnode));
    ln->hrs = hrs;
    ln->mins = mins;
    ln->name = name;
    ln->link = l->head;
    l->head = ln;
    l->size++;
}

void printList(list *l)
{
    int i = 1;
    lnode *temp = l->head;
    while(temp != NULL)
    {
        printf("%s %d\n",temp->name,i);
        temp = temp->link;
        i++;
    }
}

void swap(lnode *a, lnode *b) 
{ 
    int temp = a-> mins; 
    a->mins = b->mins; 
    b->mins = temp;
    temp = a->hrs;
    a->hrs = b->hrs;
    b->hrs = temp;
    char *temp2 = (char*)malloc(sizeof(char)*50);
    temp2 = a->name;
    a->name = b->name;
    b->name = temp2; 
} 

void sort(list *l)
{
    int swapped;
    lnode *ptr1;
    lnode *lptr = NULL;
    if(l->head == NULL)
        return;
    do
    {
        swapped = 0;
        ptr1 = l->head;
        while(ptr1->link != lptr)
        {
            if(ptr1->hrs > ptr1->link->hrs || (ptr1->hrs == ptr1->link->hrs && ptr1->mins > ptr1->link->mins))
            {
            // if(ptr1->mins >= ptr1->link->mins)
            {
                swap(ptr1,ptr1->link);
                swapped = 1;
            }
            }
            ptr1 = ptr1->link;
        }
        lptr = ptr1;
    }while(swapped);
}

int main(void)
{
    int n,hrs[50],min[50];
    char name[50][50];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s %d:%d",name[i],&hrs[i],&min[i]);
    }
    list *l = create_list();
    for(int i=0;i<n;i++)
    {
        insert(l,name[i],hrs[i],min[i]);
    }
    sort(l);
    printList(l);
    return 0;
}