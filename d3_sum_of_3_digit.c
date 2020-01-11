#include<stdio.h>

int main(void)
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        sum += n % 10;
        n /= 10;
    }
    printf("%d",sum);
    return 0;
}