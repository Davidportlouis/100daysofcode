/* infix to postfix using stack */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX_SIZE 500

typedef struct Stack {
    int max_size;
    int tos;
    char *data;
}Stack;

bool isEmpty(Stack *s) {
    return s->tos == -1;
}

bool isFull(Stack *s) {
    return s->tos == s->max_size - 1;
}

void push(Stack *s, char elem) {
    if(isFull(s)) {
        printf("Err: Overflow\n");
        return ;
    }
    s->data[++s->tos] = elem;
}

char pop(Stack *s) {
    if(isEmpty(s)) {
        printf("Err: Underflow\n");
        return 'X';
    }
    return s->data[s->tos--];
}

char peek(Stack s) {
    return s.data[s.tos];
}

bool isOperand(char x) {
    return (x == '+' || x == '-' || x == '*' || x == '/' || x == '^')? false : true;
}

int getPrecedence(char op) {
    if(op == '+' || op == '-')
        return 1;
    else if(op == '*' || op == '/')
        return 2;
    else if(op == '^')
        return 3;
    else
        return 0;
}

char* toPostFix(char *expr) {
    int i,j,n;
    n = strlen(expr);
    char *postfix;
    Stack st;
    /* initialize stack */
    st.max_size = n;
    st.tos = -1;
    st.data = (char *)malloc(sizeof(char) * n);
    postfix = (char *)malloc(sizeof(char) * n);
    i=j=0;
    while(expr[i] != '\0') {
        if(isOperand(expr[i]))
            postfix[j++] = expr[i++];
        else {
            if(getPrecedence(expr[i]) > getPrecedence(peek(st)))
                push(&st, expr[i++]); 
            else
                postfix[j++] = pop(&st);
        }
    }
    while(!isEmpty(&st))
        postfix[j++] = pop(&st);
    postfix[j] = '\0';
    return postfix;
}

int main(void) {
    char expr[MAX_SIZE],*post;
    scanf("%s",expr);
    post = toPostFix(expr);
    printf("Postfix: %s\n",post);
    return 0;
}
