#include<stdio.h>
#define MAX 2500

void sort(int *arr,int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
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

float median(int *arr,int n)
{
    return (n%2==0)?(arr[(n/2)-1]+arr[n/2])/2.0:arr[n/2];
}

int main(void)
{
    int n,arr[MAX],temp[MAX],j=0,i=0;
    float q1,q2,q3,q4;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    q1 = median(arr,n/2);
    q2 = median(arr,n);
    if(n % 2 == 0)
        i = n/2;
    else
        i = (n/2)+1;
    for(;i<n;i++,j++)
    {
        temp[j] = arr[i];
    }
    q3 = median(temp,j);
    q4 = arr[n-1];
    printf("%.1f\n",q1);
    printf("%.1f\n",q2);
    printf("%.1f\n",q3);
    printf("%.1f\n",q4);
    return 0;
}