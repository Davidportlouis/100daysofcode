#include<stdio.h>

int  main(void)
{
    int n,arr[100000],x,y,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d %d",&x,&y);
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=x && arr[i]<=y)
        {
            sum+=arr[i];
        }
    }
    printf("%d",sum);
    return 0;
}