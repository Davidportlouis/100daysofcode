#include<stdio.h>

int main(void)
{
    int arr[100][100],n,sum=0,a=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
       sum += arr[i][i];
       a += arr[i][n-i-1];
    }
    printf("%d",sum*a);
    return 0;
}