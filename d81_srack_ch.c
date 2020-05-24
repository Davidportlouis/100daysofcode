#include<stdio.h>
#include<inttypes.h>

int fact(int x)
{
    if(x == 1)
        return 1;
    return x * fact(x-1);
}

long int sum_fact(int64_t n)
{
    long int total = 0;
    while(n != 0)
    {
        total += fact(n % 10);
        n /= 10;
    }
    return total;
}

int main(void)
{
    int64_t n;
    scanf("%" SCNd64 ,&n);
    printf("%ld\n",sum_fact(n));
    return 0;
}