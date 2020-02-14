#include<stdio.h>

int count(int x)
{
    int c = 0;
    while(x!=0)
    {
        c++;
        x/=10;
    }
    return c;
}

int check_div(int arr[],int n,int x,int y)
{
    int flag = 0;
    for(int i=0;i<n;i++)
    {
        if(count(arr[i]) == x && arr[i]%y==0)
        {
            printf("%d ",arr[i]);
        }
        else
            flag++;
    }
    if(flag==n)
        printf("%d",-1);
    return 0;
}

int main(void)
{
    int n,arr[50],x,y;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d %d",&x,&y);
    check_div(arr,n,x,y);
    return 0;
}