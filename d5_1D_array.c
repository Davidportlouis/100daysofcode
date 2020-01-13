#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n,*ptr,sum=0;
    scanf("%d",&n);
    ptr = (int *)malloc(n * sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum += ptr[i];
    }
    printf("%d",sum);
    return 0;
}