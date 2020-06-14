// Exactly K non zero digits
#include<stdio.h>

int check(int n,int k)
{
    int ct = 0,rem;
    while(n != 0)
    {
        rem = n % 10;
        if(rem != 0)
            ct++;
        n /= 10;
    }
    return (ct == k)? 1 : 0;
}

int main(void)
{
    int x,y,k,flag=0;
    scanf("%d %d %d",&x,&y,&k);
    for(int i=x;i<=y;i++)
    {
        if(check(i,k)){
            printf("%d ",i);
            flag++;
        }
        else
            flag += check(i,k);
    }
    (flag == 0)? printf("-1") : 0;
    return 0;
}