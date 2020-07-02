// Shift unit digits left by one for all elements
#include<stdio.h>
#define MAX 100

void leftRotate(int *arr,int n)
{
    int tmp = arr[0],i;
    for(i=0;i<n-1;i++)
    {
        arr[i] = arr[i+1];
    }
    arr[i] = tmp;
}

void leftShiftUnitDigits(int *arr,int n)
{
    int units[MAX];
    for(int i=0;i<n;i++)
    {
        units[i] = arr[i]%10;
    }
    leftRotate(units,n);
    for(int i=0;i<n;i++)
    {
        arr[i] = arr[i] - (arr[i]%10) + units[i];
    }
}

int main(void)
{
    int n,arr[MAX];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    leftShiftUnitDigits(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}