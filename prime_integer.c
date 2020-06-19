#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define MAX 20000

bool isPrime(int x)
{
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x % i == 0)
            return false;
    }
    return true;
}

int smallest_val(int x)
{
    for(int i=x;i<=1000000;i++)
    {
        if(isPrime(i))
            return i-x;
    }
    return 0;
}

int main(void)
{
    int n,arr[MAX],diff[MAX];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        diff[i] = smallest_val(arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",diff[i]);
    }
    return 0;
}