#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n,sum=0;
    scanf("%d",&n);
    int *arr = (int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            sum += arr[i]*2;
        if(arr[i]%2!=0)
            sum += arr[i]*4;
    }
    printf("%d",sum);
    return 0;
}