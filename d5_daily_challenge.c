#include<stdio.h>

int main(void)
{
    int x,y;
    scanf("%d %d",&x,&y);
    int ctr1 = 1;
    int ctr2 = y;
    repeat:
        while(ctr1 <= x || ctr2 >= 1)
        {
            if(ctr1 <= x)
            {
                 printf("%d ",ctr1);
                ctr1++;
            }
            if(ctr2 >= 1)
            {
                printf("%d ",ctr2);
                ctr2--;
            }
        }
        return 0;
}