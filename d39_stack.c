#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//creating  stack node
struct node 
{
    int data;
    struct node* link;
};

typedef struct node node;

//creating top of stack 
struct stack
{
    node *top;
    int size;
};

typedef struct stack stack;

stack* create_stack()
{
    stack* s = (stack *)malloc(sizeof(stack));
    s->top = NULL;
    s->size = 0;
    return s;
}

bool is_empty(stack *s)
{
    return s->size == 0;
}

stack* push(stack *s,int val)
{
    node* n = (node *)malloc(sizeof(node));
    n->data = val;
    n->link = s->top;
    s->top = n;
    s->size++;
    return s;
}

int pop(stack* s)
{
    int val = s->top->data;
    node *temp = s->top;
    s->top = s->top->link;
    s->size--;
    return val;
}

int main(void)
{
    stack *s = create_stack();
    push(s,15);
    push(s,10);
    push(s,5);
    push(s,30);
    push(s,45);
    push(s,75);
    while(!is_empty(s))
    {
        printf("%d\n",pop(s));
    }
    return 0;
}