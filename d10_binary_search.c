#include<stdio.h>
#include<stdlib.h>

int binsearch(int n,int *arr,int key)
{
    
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
    printf("The element %d is present in %d location.",key,binsearch(n,arr,key));
    return 0;
}