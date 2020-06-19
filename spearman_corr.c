// Spearman's Rank Correlation Coeffecient
#include<stdio.h>
#define MAX 100

static int n;

void sort(double *arr)
{
    double temp;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp; 
            }
        }
    }
}

int get_rank(double *arr,double key)
{
    for(int i=1;i<=n;i++)
    {
        if(arr[i] == key)
            return i;
    }
    return 0;
}



int main(void)
{
    double arr_x[MAX],arr_y[MAX];
    double cpy_x[MAX],cpy_y[MAX];
    int r_x[MAX],r_y[MAX],d_i[MAX],sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%lf",&arr_x[i]);
    }
    for(int i=1;i<=n;i++)
    {
        scanf("%lf",&arr_y[i]);
    }
    for(int i=1;i<=n;i++)
    {
        cpy_x[i] = arr_x[i];
        cpy_y[i] = arr_y[i];
    }
    sort(arr_x);
    sort(arr_y);
    for(int i=1;i<=n;i++)
    {
        r_x[i] = get_rank(arr_x,cpy_x[i]);
        r_y[i] = get_rank(arr_y,cpy_y[i]);
    }
    for(int i=1;i<=n;i++)
    {
        d_i[i] = r_x[i] - r_y[i];
        d_i[i] *= d_i[i];
    }
    for(int i=1;i<=n;i++)
    {
        sum += d_i[i];
    }
    printf("%0.3lf",1.0-((double)(6*sum)/(double)(n*(n*n-1))));
    return 0;
}