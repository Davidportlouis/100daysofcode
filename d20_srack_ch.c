#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int x,y;
    scanf("%d %d",&x,&y);
    while(x<y)
    {
        printf("%d",x%10);
        printf("%d",y%10);
        x/=10;
        y/=10;
    }
    return 0;
}