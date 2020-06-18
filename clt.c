// Central Limit Theorem
#include<stdio.h>
#include<math.h>

// mu' = n_samples * mu
// sigma' = sqrt(n) * sigma

static double mu = 205.0,sigma = 15.0,n = 49;

double sqrt(double x)
{
    double temp=0,ans;
    ans = x/2.0;
    while(temp != ans){
        temp = ans;
        ans = (x/temp + temp)/2.0;
    }
    return ans;
}

double phi(double x)
{
    return 0.5 * (1 + erf((x-mu)/(sigma * sqrt(2))));
}

int main(void)
{
    double cdf;
    mu = n * mu;
    sigma = sqrt(n) * sigma;
    cdf = phi(9800);
    printf("%0.4lf\n",cdf);
    return 0;
}