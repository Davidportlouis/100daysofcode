#include<stdio.h>
#define MAX 100

int gcd(int a,int b)
{
    if(a == 0)
        return b;
    return gcd(b%a,a);
}

int findgcd(int *arr,int low,int high)
{
    int result = arr[low];
    for(int i=low-1;i<=high-1;i++)
    {
        result = gcd(arr[i],result);
        if(result == 1)
            return 1;
    }
    return result;
}

int main(void)
{
    int arr[MAX],low[MAX],high[MAX],n,range;
    scanf("%d %d",&n,&range);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<range;i++)
    {
        scanf("%d %d",&low[i],&high[i]);
    }
    for(int i=0;i<range;i++)
    {
        printf("%d\n",findgcd(arr,low[i],high[i]));
    }
    return 0;
}