#include<stdio.h>


int main(void)
{
    int r,c=1,i,j;
    scanf("%d",&r);
    for(i=0;i<r;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j == 0 || i == 0)
                c = 1;
            else 
                c = c * (i-j+1)/j;
            if(i == r-1)
                printf("%d ",c);
        }
    }
    return 0;
}