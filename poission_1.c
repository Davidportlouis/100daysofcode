#include<stdio.h>
#include<math.h>
#define e 2.718281828

int fact(int x)
{
    if(x == 0)
        return 1;
    return x*fact(x-1);
}

double poission(double k,double lambda)
{
    return (pow(lambda,k) * pow(e,-lambda))/fact(k);
}

int main(void)
{
    printf("%0.3lf",poission(5,2.5));
    return 0;
}