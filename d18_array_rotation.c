#include<stdio.h>
#include<stdlib.h>

int rotateLeftOne(int *arr,int n);

int rotateLeft(int *arr,int d,int n)
{
    for(int i=0;i<d;i++)
    {
        rotateLeftOne(arr,n);
    }
    return 0;
}

int rotateLeftOne(int *arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
    return 0;
}

int main(void)
{
    int n,d;
    scanf("%d",&n);
    int *arr = malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&d);
    rotateLeft(arr,d,n);
    printf("After Left Rotation by %d steps: \n",d);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}