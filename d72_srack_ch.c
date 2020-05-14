#include<stdio.h>
#define LIMIT 100

void bubble_sort(int *arr,int n)
{
    int temp,arr2[LIMIT];
    for(int i=0;i<n;i++)
    {
        arr2[i] = arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i] == arr2[j])
                printf("%d ",j+1);
        }
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
    bubble_sort(arr,n);
}