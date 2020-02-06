#include<stdio.h>

int main(void)
{
    int x,y,z,isPrinted=0,max=0;
    isPrinted = 0;
    scanf("%d %d %d",&x,&y,&z);
    if(x>y)
        max = x;
    else
        max = y;
    int val = 2;
    while(val<=max)
    {
        if(x%val==0)
        {
            if(y%val==0)
            {
                if(z%val!=0)
                {
                    printf("%d ",val);
                    isPrinted = 1;
                }
            }
        }
        val++;
    }
    if(isPrinted == 0)
        printf("%d",-1);
    return 0;
}