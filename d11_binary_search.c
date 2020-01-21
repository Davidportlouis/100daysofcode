#include<stdio.h>
#include<stdlib.h>

int binsearch(int *arr,int l,int n,int key);

int main(void)
{
    int n,key,loc;
    scanf("%d",&n);
    int *arr = (int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&key);
    loc = binsearch(arr,0,n,key);
    if(loc == -1)
        printf("Element %d is not present in the array.",key);
    else
        printf("Element %d is present in %d location.",key,loc);
    return 0;
}

int binsearch(int *arr,int l,int n,int key)
{
    int low = l,high = n,mid;
    if(high >= low)
    {
        mid = (low+high)/2;
        if(arr[mid] == key)
            return mid;
        else if(key > arr[mid])
        {   
            low = mid + 1;
            high = n;
            return binsearch(arr,low,high,key);
        }
        else 
        {
            low = 0;
            high = mid - 1;
            return binsearch(arr,low,high,key);
        }   
    }
    return -1;
}