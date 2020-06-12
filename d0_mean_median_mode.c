// 10days of statistics
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

float mean(int *arr,int n)
{
    float avg = 0.0;
    for(int i=0;i<n;i++)
    {
        avg += arr[i];
    }
    return avg/n;
}

float median(int *arr,int n)
{
    sort(arr,n);
    return (n%2==0)?(arr[(n/2)-1]+arr[n/2])/2.0 : arr[n/2]; 
}

int max(int *arr,int n)
{
    int max = 0,idx=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            idx = i;
        }
    }
    return idx;
}

int mode(int *arr,int n)
{
    int count[n],i=0,sum=0,x=0;
    sort(arr,n);
    for(i=0;i<n;i++)
    {
        count[i] = 0;
        for(int j=0;j<n;j++)
        {
            if(arr[i] == arr[j])
            {
                count[i] += 1;
            }
        }
    }
    for(int j=0;j<i;j++)
    {
        sum += count[j];
    }
    x = max(count,i);
    return (sum == n)? arr[0]:arr[x]; 
}

int main(void)
{
    int n,arr[MAX];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%.1f\n",mean(arr,n));
    printf("%.1f\n",median(arr,n));
    printf("%d\n",mode(arr,n));
    return 0;
}