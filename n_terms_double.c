/* N Terms Double Series */
#include<stdio.h>

int x_term(int n,int x)
{
    if(n % 2 == 0)
        return n*x-1;
    return n*x+1;
}

int y_term(int n,int y)
{
    if(n % 2 == 0)
        return n*y-1;
    return n*y+1;
}

int main(void)
{
    int i,n,x,y,k=0;
    scanf("%d %d %d",&n,&x,&y);
    for(i=1;i<=n;i++)
    {
        if(i % 2 != 0)
            k++;
        if(i % 2 == 0)
            printf("%d ",x_term(k,y));
        else
            printf("%d ",y_term(k,x));
    }
    return 0;
}