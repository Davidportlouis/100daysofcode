#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int x,y;
    scanf("%d %d",&x,&y);
    int ctr = x;
    while(ctr <= y)
    {
        if(ctr%x==0)
            ctr++;
        else
            {
                if(ctr%10 == y %10)
                {
                    ctr++;
                }else
                {
                    printf("%d ",ctr);
                    ctr++;
                }
            }
    }
    return 0;
}