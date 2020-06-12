//10 days of statistics
#include<stdio.h>
#define MAX 50
// weighted mean
// mu = sum(x[i] * w[i])/sum(x[i])

double weighted_mean(int *arr,int *weights,int n)
{
    double temp=0,s_wt=0;
    for(int i=0;i<n;i++)
    {
        temp += arr[i] * weights[i];
        s_wt += weights[i];
    }
    return temp/s_wt; 
}

int main(void)
{
    int n,arr[MAX],wt[MAX];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&wt[i]);
    }
    printf("%.1lf\n",weighted_mean(arr,wt,n));
    return 0;
}