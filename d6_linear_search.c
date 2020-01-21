#include<stdio.h>
#include<stdlib.h>

int linsearch(int n,int *arr,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
            return i;
    }
    return 0;
}

int main(void)
{
    int n,key;
    scanf("%d",&n);
    int *arr = (int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&key);
    printf("Key %d is found in %d location",key,linsearch(n,arr,key));
    return 0;
}