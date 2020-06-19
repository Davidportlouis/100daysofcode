// perason correlation coefficients
#include<stdio.h>
#define MAX 100

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

float mean(double *arr,int n)
{
    float avg = 0.0;
    for(int i=0;i<n;i++)
    {
        avg += arr[i];
    }
    return avg/n;
}

double std_dev(double mu,double *arr,int n)
{
    double stdev=0;
    for(int i=0;i<n;i++)
    {
        stdev += (arr[i] - mu) * (arr[i] - mu);
    }
    return sqroot(stdev/(double)n);
}

double pearson_corr(double *arr_x,double *arr_y,int n)
{
    double mu_x,mu_y,sig_x,sig_y,corr;
    mu_x = mean(arr_x,n);
    mu_y = mean(arr_y,n);
    sig_x = std_dev(mu_x,arr_x,n);
    sig_y = std_dev(mu_y,arr_y,n);
    for(int i=0;i<n;i++)
    {
        corr += (arr_x[i] - mu_x) * (arr_y[i] - mu_y);
    }
    return corr/(n * sig_x * sig_y);
}

int main(void)
{
    int n;
    double arr_x[MAX],arr_y[MAX];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&arr_x[i]);
    }
    for(int j=0;j<n;j++)
    {
        scanf("%lf",&arr_y[j]);
    }
    printf("%0.3lf\n",pearson_corr(arr_x,arr_y,n));
    return 0;
}