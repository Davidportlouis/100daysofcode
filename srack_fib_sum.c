#include<stdio.h>
#include <stdlib.h>
#define MAX 1000000000

int fib(int x)
{
    if(x < 2)
        return 1;
    return fib(x-1) + fib(x-2);
}

int check_fib(int x)
{
    for(int i=0;i<x+1;i++)
    {
        if(fib(i) == x)
            return 1;
    }
    return 0;
}

int main()
{
    int n,arr[100],sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(check_fib(arr[i]) == 1)
            sum += arr[i];
    }
    (sum != 0)?printf("%d",sum):printf("-1");
    return 0;
}