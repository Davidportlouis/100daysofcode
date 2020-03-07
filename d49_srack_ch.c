#include<stdio.h>

int main(void)
{
    int n,r_sum=0,c_sum=0,eq=0;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int j=0;
    while(j<n)
    {
        c_sum = 0,r_sum = 0;
        for(int i=0;i<n;i++)
        {
            c_sum += arr[i][j];
        }
        for(int k=0;k<n;k++)
        {
            r_sum += arr[j][k];
        }
        if(r_sum == c_sum)
            eq++;
        j++;
    }
    printf("%d",eq);
    return 0;
}