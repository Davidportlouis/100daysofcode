//Least Square Regression Linear
#include<stdio.h>
#define MAX 100

static int n;

double sum(double *arr)
{
    double ans = 0.0;
    for(int i=0;i<n;i++)
    {
        ans += arr[i];
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

int main(void)
{
    double arr_x[MAX],arr_y[MAX],sum_x,sum_y,sum_xy,sum_s2;
    double b,a,mu_x,mu_y;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&arr_x[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&arr_y[i]);
    }
    sum_x = sum(arr_x);
    sum_y = sum(arr_y);
    mu_x = mean(arr_x);
    mu_y = mean(arr_y);
    for(int i=0;i<n;i++)
    {
        sum_xy += arr_x[i] * arr_y[i];
    }
    for(int i=0;i<n;i++)
    {
        sum_s2 += arr_x[i] * arr_x[i];
    }
    b = (n*sum_xy - sum_x*sum_y)/(n*sum_s2 - (sum_x*sum_x));
    a = mu_y - b * mu_x;
    printf("%0.2lf\n",a+b*80);
    return 0;   
}