// 10 days of statistics
#include<stdio.h>
#define MAX 2500

// sigma(std_dev) = (sum(x[i] - mu)^2/n)^0.5
/* In other words std dev is the avg distance of data points to 
the mean */

double sqroot(double x)
{
    double temp,sqrt;
    sqrt = x/2.0;
    temp = 0;
    while(sqrt != temp)
    {
        temp = sqrt;
        sqrt = (x/temp + temp)/2.0;
    }
    return sqrt;
}

double std_dev(double mu,int *arr,int n)
{
    double stdev=0;
    for(int i=0;i<n;i++)
    {
        stdev += (arr[i] - mu) * (arr[i] - mu);
    }
    return sqroot(stdev/(double)n);
}

int main(void)
{
    int n,arr[MAX];
    double mu;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        mu += arr[i];
    }
    mu /= n;
    printf("%.1lf\n",std_dev(mu,arr,n));
    return 0;
}