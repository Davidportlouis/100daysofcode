// Queue operations enqueue & dequeue
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct qnode
{
    int data;
    struct qnode *link; 
};

typedef struct qnode qnode;

struct queue
{
    struct qnode *front,*rear;
    int size;
};

typedef struct queue queue;

queue* create_queue()
{
    queue* q = (queue*)malloc(sizeof(queue));
    q->front = NULL;
    q->rear = NULL;
    q->size = 0;
}

bool is_empty(queue* s)
{
    return s->size == 0;
}

void enqueue(queue *q,int val)
{
    qnode *n = (qnode*)malloc(sizeof(qnode));
    n->data = val;
    n->link = NULL;
    if(!is_empty(q))
        q->rear->link = n, q->rear = n;
    else
        q->front = q->rear = n;
    q->size++;
}

int dequeue(queue *q)
{
    if(is_empty(q))
    {
        printf("Queue Underflow");
        exit(0);
    }
    int val = q->front->data;
    qnode *temp = q->front;
    q->front = q->front->link;
    free(temp);
    q->size--;
    return val;
}

int main(void)
{
    queue *q = create_queue();
    enqueue(q,10);
    enqueue(q,15);
    enqueue(q,20);
    enqueue(q,30);
    while(!is_empty(q))
    {
        printf("%d\n",dequeue(q));
    }
    return 0;
}