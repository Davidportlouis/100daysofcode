#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n,*arr;
    scanf("%d",&n);
    arr = (int *)malloc(n * sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}