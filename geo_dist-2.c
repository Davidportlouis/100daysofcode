#include<stdio.h>
#include<math.h>

double power(double b,double e)
{
    double ans = 1.0;
    for(int i=0;i<e;i++)
    {
        ans *= b;
    }
    return ans;
}

double geo_dist(int x,int n,double p)
{
    return power(1.0-p,n-x) * p;
}

int main(void)
{
    int n = 5;
    double p = 1.0/3.0,distb=0;
    for(int i=1;i<=n;i++)
    {
        distb += geo_dist(i,n, p);
    }
    printf("%0.3lf\n",distb);
    return 0;
}
