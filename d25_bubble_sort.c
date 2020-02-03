#include<stdio.h>
#include<stdlib.h>

int* bubble_sort(int *arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return arr;
}


int main(void)
{
    int n;
    scanf("%d",&n);
    int *arr = malloc(n * sizeof(int));
    int *sorted_arr = malloc(n * sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sorted_arr = bubble_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",sorted_arr[i]);
    }
    return 0;
}