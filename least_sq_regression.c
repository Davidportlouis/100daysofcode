// Least Square Regression Line
#include<stdio.h>
#define MAX 100

static int n;

double sqroot(double x)
{
    double temp=0.0,ans;
    ans = x/2.0;
    while(temp != ans)
    {
        temp = ans;
        ans = (x/temp + temp)/2.0;
    }
    return ans;
}

float mean(double *arr)
{
    float avg = 0.0;
    for(int i=0;i<n;i++)
    {
        avg += arr[i];
    }
    return avg/n;
}

double std_dev(double mu,double *arr)
{
    double stdev=0;
    for(int i=0;i<n;i++)
    {
        stdev += (arr[i] - mu) * (arr[i] - mu);
    }
    return sqroot(stdev/(double)n);
}

double pearson_corr(double *arr_x,double *arr_y,double mu_x,double mu_y,double sig_x,double sig_y)
{
    double corr;
    for(int i=0;i<n;i++)
    {
        corr += (arr_x[i] - mu_x) * (arr_y[i] - mu_y);
    }
    return corr/(n * sig_x * sig_y);
}

int main(void)
{
    double arr_x[MAX],arr_y[MAX];
    double mu_x,mu_y,sigma_x,sigma_y,p,b,a;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&arr_x[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&arr_y[i]);
    }
    mu_x = mean(arr_x);
    mu_y = mean(arr_y);
    sigma_x = std_dev(mu_x,arr_x);
    sigma_y = std_dev(mu_y,arr_y);
    p = pearson_corr(arr_x,arr_y,mu_x,mu_y,sigma_x,sigma_y);
    b = p * (sigma_x/sigma_y);
    a = mu_y - b * mu_x;
    printf("%0.3lf\n",a+b*80);
    return 0;
}