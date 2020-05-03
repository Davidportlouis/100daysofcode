#include<stdio.h>
#include<math.h>

int max_diff(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int abs_diff(int *arr,int n)
{
    int max = 0,diff = 0;
    for(int i=0;i<n-1;i++)
    {
        diff = abs(arr[i]-arr[i+1]);
        max = max_diff(diff,max);
    }
    return max;
}

int main(void)
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Max abs diff: %d",abs_diff(arr,n));
    return 0;
}