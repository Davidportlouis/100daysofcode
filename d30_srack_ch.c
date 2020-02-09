#include<stdio.h>

int main(void)
{
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(int i=0;i<n-k+1;i++)
    {
        int sum = 0;
        for(int j=i;j<i+k;j++)
        {
            sum+=arr[j];
        }
        printf("%d ",sum);
    }
    return 0;
}