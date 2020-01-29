#include<stdio.h>
#include<stdlib.h>

int gcd(int a,int b)
{
    if(a == 0)
        return b;
    return gcd(b%a,a);
}

int lcm(int a,int b)
{
    return a*b/gcd(a,b);
}

int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("LCM of %d, %d is %d",a,b,lcm(a,b));
    return 0;
}