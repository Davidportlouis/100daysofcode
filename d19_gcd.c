#include<stdio.h>
#include<stdlib.h>

int gcd(int a,int b)
{
    if(a == 0)
        return b;
    return gcd(b%a,a); 
}

int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("GCD of %d and %d is %d",a,b,gcd(a,b));
}