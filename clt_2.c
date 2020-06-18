#include<stdio.h>

static double mu=500.0,sigma=80.0,n=100,z=1.96;

double sqroot(double x)
{
    double ans,temp=0;
    ans = x/2.0;
    while(temp != ans){
        temp = ans;
        ans = (x/temp + temp)/2.0;
    }
    return ans;
}


int main(void)
{
    double error = z*sigma/sqroot(n);
    printf("%0.2lf\n",mu-error);
    printf("%0.2lf\n",mu+error);
    return 0;
}