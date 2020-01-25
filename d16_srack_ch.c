#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n,count=0,j=0;
    scanf("%d",&n);
    int *arr = malloc(n*sizeof(int));
    int *sum = malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    count = n/3;
    for(int i=0;i<n,count>0;i++)
    {
        sum[i] = arr[i+count]+arr[i+1+count]+arr[i+2+count];
        count--;
    }
}