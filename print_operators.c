/* Print Operators */
#include<stdio.h>
#define MAX 100

void print_operators(int p,int q,int x)
{
    if(x == (p/q))
        printf("/ ");
    else if(x == (p*q))
        printf("* ");
    else if(x == (p+q))
        printf("+ ");
    else if(x == (p-q))
        printf("- ");
    else
        printf("# ");
}

int main(void)
{
    int i,n,p,q,arr[MAX];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d %d",&p,&q);
    for(i=0;i<n;i++)
    {
        print_operators(p,q,arr[i]);
    }
    return 0;
}
