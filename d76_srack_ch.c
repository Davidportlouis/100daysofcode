#include<stdio.h>
#include<stdlib.h>
#define LIMIT 1000

int min(int a,int b)
{
    if(a < b)
        return a;
    return b;
}

void smallInteger(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        if(i == 0)
            continue;
        arr[i] = min(arr[i-1],arr[i]);
    }
}

int main(void)
{
    int n,arr[LIMIT];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    smallInteger(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}