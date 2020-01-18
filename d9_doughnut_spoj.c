#include<stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    int c,k,w;
    for(int i=0;i<t;i++)
    {
        scanf("%d %d %d",&c,&k,&w);
        if(c*w <= k)
            printf("yes");
        else
            printf("no");
    }
    return 0;
}