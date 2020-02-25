#include<stdio.h>

int main(void)
{
    int n,x,y;
    scanf("%d %d %d",&n,&x,&y);
    int ctr = 1;
    while(ctr < n)
    {
        if(x%ctr==0 || y%ctr==0)
            if(x%y==0 || y%x == 0)
                printf("%d ",ctr);
        ctr++;
    }
    printf("%d ",n);
    return 0;
}