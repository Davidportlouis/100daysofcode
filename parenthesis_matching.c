/* parenthesis balancing using stack */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#define MAX 50

typedef struct Stack {
    int max_size;
    int tos;
    char *data;
}Stack;

bool isEmpty(Stack *st) {
    return st->tos == -1;
}

bool isFull(Stack *st) {
    return st->tos == st->max_size-1;
}

void push(Stack *st, char elem) {
    if(isFull(st)) {
        printf("Err: Overflow\n");
        return ;
    }
    st->data[++st->tos] = elem;
}

int pop(Stack *st) {
    if(isEmpty(st)) {
        printf("Err: Underflow\n");
        return INT_MIN;
    }
    return st->data[st->tos--];
}

bool isBalanced(char *expr) {
    Stack st;
    st.max_size = strlen(expr);
    st.tos = -1;
    st.data = (char *)malloc(sizeof(char) * st.max_size);
    for(int i=0;expr[i]!='\0';i++) {
        if(expr[i] == '(' || expr[i] == '{' || expr[i] == '[')
            push(&st,expr[i]);
        else if(expr[i] == ')' || expr[i] == '}' || expr[i] == ']') {
            if(isEmpty(&st))
                return false;
            else{
                char s = pop(&st);
                if((expr[i] == ')' && s != '(') || (expr[i] == '}' && s != '{')
                            || (expr[i] == ']' && s != '['))
                    return false;
            }
        }
    }
    return isEmpty(&st);
}

int main(void) {
    char expr[MAX];
    scanf("%s",expr);
    (isBalanced(expr))? printf("Yes\n") : printf("No\n");
    return 0;
}
