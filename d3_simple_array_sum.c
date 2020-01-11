// Hackerrank Problem Solving
// Simple Problem Solving

#include<stdio.h>

int main(void)
{
    int n,arr[1000],sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }
    printf("%d",sum);
    return 0;
}