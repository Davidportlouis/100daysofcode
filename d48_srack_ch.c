#include<stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%d ",j);
        }
        printf("+ ");
        for(int j=n;j>=1;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    for(int i=0;i<2*n+1;i++)
    {
        printf("+ ");
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%d ",j);
        }
        printf("+ ");
        for(int j=n;j>=1;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}