// Dynamic stack using linked list
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct stack_node
{
    int data;
    struct stack_node *link;
} stack_node;

typedef struct stack
{
    stack_node *tos;
    int size;
} stack;

bool check_empty(stack *s)
{
    return s->size == 0;
}

// initialize stack data structure
stack* create_stack()
{
    stack *s = (stack*)malloc(sizeof(stack));
    s->tos = NULL;
    s->size = 0;
    return s;
}

// primitive to push elements
void push(stack *s,int val)
{
    stack_node *sn = (stack_node*)malloc(sizeof(stack_node));
    sn->data = val;
    sn->link = s->tos;
    s->tos = sn;
    s->size++;
}

// primitive to pop elements
int pop(stack *s)
{
    int val = s->tos->data;
    stack_node *temp = s->tos;
    s->tos = s->tos->link;
    free(temp);
    s->size--;
    return val;
}

// primitive to search
int search(stack *s,int key)
{
    int node=0,n=s->size;
    while(n != 0)
    {
        if(s->tos->data == key)
            return s->size-node;
        s->tos = s->tos->link;
        node++;
        n--;
    }
    return -1;
}

// primitive to reverse dyn stack
void reverse(stack *s)
{
    int *temp = (int*)malloc(s->size*sizeof(int)),i=0;
    while(!check_empty(s))
    {
        temp[i] = pop(s);
        i++;
    }
    for(int j=0;j<i;j++)
    {
        push(s,temp[j]);
    }
}

// driver code
int main(void)
{
    stack *s = create_stack(); // initializing stack
    // pushing elements into created stack
    push(s,10);
    push(s,20);
    push(s,30);
    // searching stack for element
    // printf("%d is located at %d\n",10,search(s,10));
    // reversing stack
    reverse(s); // turns stack into queue
    while(!check_empty(s))
    {
        printf("%d ",pop(s));
    }
    printf("\n");
    return 0;
}