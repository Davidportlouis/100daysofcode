// integer with atleast one zero
#include<stdio.h>

int check_zeros(int x)
{
    while(x != 0)
    {
        if(x%10 == 0)
            return 1;
        x /= 10;
    }
    return 0;
}

int main(void)
{
    int x,y,i,flag=0;
    scanf("%d %d",&x,&y);
    for(i=x;i<=y;i++)
    {
        if(check_zeros(i)){
            printf("%d ",i);
            flag++;
        }
    }
    if(flag == 0)
        printf("-1");
    return 0;
}