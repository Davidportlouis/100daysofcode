#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#define MAX 50

typedef struct list_node
{
    char author;
    int hr;
    int min;
    int sec;
    char *msg;
    struct list_node *link;
} list_node;

typedef struct list
{
    list_node *head;
    int size;
} list;

bool isEmpty(list *l)
{
    return l->size == 0;
}

list* init_list()
{
    list* l = (list*)malloc(sizeof(list));
    l->head = NULL;
    l->size = 0;
    return l;
}

void insert(list *l,char auth,int hr,int min,int sec,char *msg)
{
    list_node *ln = (list_node*)malloc(sizeof(list_node));
    ln->author = auth;
    ln->hr = hr;
    ln->min = min;
    ln->sec = sec;
    ln->msg = (char*)malloc(100*sizeof(char));
    ln->msg = msg;
    ln->link = l->head;
    l->head = ln;
    l->size++;
}

void printList(list *l)
{
    list_node *temp = l->head;
    while(temp != NULL)
    {
        printf("%c:%s\n",temp->author,temp->msg);
        temp = temp->link;
    }
}

void swap(list_node *a,list_node *b)
{
    char auth_temp = a->author;
    a->author = b->author;
    b->author = auth_temp;
    int temp = a->hr;
    a->hr = b->hr;
    b->hr = temp;
    temp = a->min;
    a->min = b->min;
    b->min = temp;
    temp = a->sec;
    a->sec = b->sec;
    b->sec = temp;
    char *msg_temp = (char*)malloc(100*sizeof(char));
    msg_temp = a->msg;
    a->msg = b->msg;
    b->msg = msg_temp;
}

void sort(list *l)
{
    int swapped;
    list_node *ptr1;
    list_node *lptr = NULL;
    if(l->head == NULL)
        return;
    do
    {
        swapped = 0;
        ptr1 = l->head;
        while(ptr1->link != lptr)
        {
            if(ptr1->hr > ptr1->link->hr || (ptr1->hr == ptr1->link->hr && ptr1->min > ptr1->link->min) || (ptr1->min == ptr1->link->min && ptr1->sec > ptr1->link->sec))
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
    char *author, **msg;
    int *hr,*min,*sec,n;
    scanf("%d",&n);

    //initializing dynamic arrays
    hr = (int*)malloc(MAX*sizeof(int));
    min = (int*)malloc(MAX*sizeof(int));
    sec = (int*)malloc(MAX*sizeof(int));
    author = (char*)malloc(MAX*sizeof(char));
    msg = (char**)malloc(n*sizeof(char*));
    for(int i=0;i<n;i++)
    {
        msg[i] = (char*)malloc(100*sizeof(char));
    }
    for(int i=0;i<n;i++)
    {
        scanf("\n");
        scanf("%c %d:%d:%d %[^\n]%*c",&author[i],&hr[i],&min[i],&sec[i],msg[i]);
    }
    list *l = init_list();
    for(int i=0;i<n;i++)
    {
        insert(l,author[i],hr[i],min[i],sec[i],msg[i]);
    }
    sort(l);
    printList(l);
    return 0;
}