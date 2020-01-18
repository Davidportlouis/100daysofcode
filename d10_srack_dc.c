#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n,x,r=0,sum=0,num=0;
    scanf("%d %d",&n,&x);
    int *arr = (int *)malloc(n * sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int m = x;
    while(m > 0)
    {
        r++;
        m/=10;
    }
    for(int i=0;i<n;i++)
    {
        if(r == 1)
            num = arr[i]%10;
        if(r == 2)
            num = arr[i]%100;
        if(r == 3)
            num = arr[i]%1000;
        if(r == 4)
            num = arr[i]%10000;
        if(r == 5)
            num = arr[i]%100000;
        if(r == 6)
            num = arr[i]%1000000;
        if(r == 7)
            num = arr[i]%10000000;
        if(num == x)
            sum+=arr[i];
    } 
    printf("%d",sum);
    return 0;  
}