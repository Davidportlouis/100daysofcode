#include<stdio.h>
#include<stdlib.h>

int getAllDigitsAsUnitDigit(int N)
{
    int exit;
    int x = 0;
    int unit = N % 10;
    while(N > 0)
    {
        x = x * 10 + unit;
        N/=10;
    }
    return x;
}

int main(void)
{
    int N;
    scanf("%d",&N);
    printf("%d",getAllDigitsAsUnitDigit(N));
    return 0;
}