#include<stdio.h>

int main(void)
{
    int n,i,j,k=0,tmp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            printf("*");
        }
        for(j=n-i-1;j<n;j++)
        {
            k++;
        }
        tmp = k;
        for(j=n-i-1;j<n;j++)
        {
            printf("%d ",tmp--);
        }
        printf("\n");
    }
    for(i=n-1;i>=0;i--)
    {
        for(j=0;j<n-i-1;j++)
        {
            printf("*");
        }
        for(j=n-i-1;j<n;j++)
        {
            printf("%d ",k--);
        }
        printf("\n");
    }
    return 0;
}