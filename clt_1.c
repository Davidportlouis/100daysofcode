#include<stdio.h>
#include<math.h>


static double mu=2.4,sigma=2.0,n=100;

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

double phi(double x)
{
    return 0.5 * (1 + erf((x-mu)/(sigma * sqroot(2))));
}

int main(void)
{
    mu = n * mu;
    sigma = sqroot(n) * sigma;
    printf("%0.4lf\n",phi(250));
    return 0;
}