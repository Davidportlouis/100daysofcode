#include<stdio.h>

int fact(int x)
{
    if(x == 0)
        return 1;
    return x*fact(x-1);
}

int combinations(int n,int r)
{
    return fact(n)/(fact(r) * fact(n-r));
}

double power(double b,double e)
{
    double ans = 1.0;
    for(int i=0;i<e;i++)
    {
        ans *= b;
    }
    return ans;
}

double binomial(double x,double n,double p)
{
    return combinations(n,x) * power(p,x) * power((1-p),n-x);
}

int main(void)
{
    int n = 10;
    double p = 12.0/100.0,ans_1=0,ans_2=0;
    for(int i=0;i<=2;i++)
    {
        ans_1 += binomial(i,n,p);
    }
    for(int i=2;i<=n;i++)
    {
        ans_2 += binomial(i,n,p);
    }
    printf("%0.3lf\n",ans_1);
    printf("%0.3lf\n",ans_2);
    return 0;
}