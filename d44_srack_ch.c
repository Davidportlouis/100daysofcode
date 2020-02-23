// Binary represntation of binary
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

unsigned long long bin(unsigned long long n)
{
    int i = 0, j =0;
    unsigned long long s = 0;
    unsigned long long *arr = malloc(n * sizeof(unsigned long long));
    while(n>0)
    {
        arr[i] = n % 2;
        n/=2;
        i++;
    }
    while(j<i)
    {
        long double mod = pow(10.0,(double)j);
        s += arr[j] * mod;
        j++;
    }
    return s;
}

int main(void)
{
    unsigned long long n,temp=0;
    scanf("%llu",&n);
    temp = bin(n);
    printf("%llu",bin(temp));
    return 0;
}