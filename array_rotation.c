#include<stdio.h>
#define LIMIT 1000

void rotateLeftByOne(int *arr,int n)
{
    int temp = arr[0];
    for(int i=0;i<n-1;i++)
    {
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}

void rotateLeft(int *arr,int d,int n)
{
    for(int i=0;i<d;i++)
    {
        rotateLeftByOne(arr,n);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

int main(void)
{
    int n,arr[LIMIT],steps;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&steps);
    rotateLeft(arr,steps,n);
    return 0;
}