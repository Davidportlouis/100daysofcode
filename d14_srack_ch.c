#include<stdio.h>
#include<stdlib.h>

long bin(int arr)
{
    long bnum = 0;
    int rem, temp = 1;
    while(arr>0)
     {
        rem = arr%2;
        arr/= 2;
        bnum = bnum + rem * temp;
        temp *= 10;
    }
    return bnum;
}

long checkCount(long num)
{
    int bit = 0,sum=0;
    while(num > 0)
    {
        bit = num%10;
        num/=10;
        if(bit == 1)
            sum++;
    }
    return sum;
}

int* sort(int *arr,int *sum,int n)
{
    int temp = 0;
     for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            
            if(sum[j] > sum[j+1])
            {
                temp = sum[j];
                sum[j] = sum[j+1];
                sum[j+1] = temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return arr;
}

int main(void)
{
    int n;
    scanf("%d",&n);
    int *arr = malloc(n * sizeof(int));
    long *barr = malloc(n * sizeof(long));
    int *sum = malloc(n * sizeof(int));
    int *sarr = malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        barr[i] = bin(arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum[i] = checkCount(barr[i]);
        printf("%d",sum[i]);
    }
    sarr = sort(arr,sum,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",sarr[i]);
    }
    return 0;
}