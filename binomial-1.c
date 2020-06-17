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

double power(double b,double exp)
{
    double ans = 1.0;
    for(int i=0;i<exp;i++)
    {
        ans *= b;
    }
    return ans;
}

int main(void)
{
    double boy_ratio,girl_ratio,p,q,total_ratio,bi_dist = 0;
    int n=6,req=3;
    scanf("%lf %lf",&boy_ratio,&girl_ratio);
    total_ratio = boy_ratio + girl_ratio;
    p = boy_ratio/(total_ratio);
    q = 1 - p;
    for(int x=req;x<=n;x++)
    {
        bi_dist += combinations(n,x) * power(p,x) * power(q,n-x);
    }
    printf("%0.3lf\n",bi_dist);
    return 0;
}