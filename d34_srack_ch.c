#include<stdio.h>
#include<stdlib.h>

int getAllDigitsAsUnitDigit(int N)
{
    int exit;
    int x = 0;
    while(N > 0)
    {
        x++;
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