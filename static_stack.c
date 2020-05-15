#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct stack
{
    int data[100];
    int head;
};

typedef struct stack stack;

stack * init_stack()
{
    stack *s = (stack *)malloc(sizeof(stack));
    s->head = -1;
    return s;
}

bool is_empty(stack *s)
{
    return s->head < 0;
}

void push(stack *s,int val)
{
    s->data[++s->head] = val;
}

int pop(stack *s)
{
    return s->data[s->head--];
}

int main(void)
{
    stack *s = init_stack();
    push(s,10);
    push(s,20);
    push(s,25);
    while(!is_empty(s))
    {
        printf("%d\n",pop(s));
    }
    return 0;
}