// Maximum Sum Layer
#include<stdio.h>

void bsort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("%d",arr[n-1]);
}

int main(void)
{
    int arr[50][50];
    int n,k=0,sum[20]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    while(k<n-2)
    {
        for(int i=0+k;i<n-k;i++)
        {
            if(i==0+k || i==n-1-k)
            {
                for(int j=0+k;j<n-k;j++)
                {
                    sum[k] += arr[i][j];
                }
            }else{
                for(int j=0+k;j<n-k;j++)
                {
                    if(j==0+k || j==n-1-k)
                        sum[k] += arr[i][j];
                }
            }
        }          
        k++;
    }
    bsort(sum,k);
    return 0;
}