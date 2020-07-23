#include<stdio.h>

int main(void)
{
    int i,n,d,sum;
    scanf("%d %d",&n,&d);
    sum = n;
    for(i=0;i<7;i++)
    {
        sum = (d == 7)? (2*sum): (d == 1)? (2*sum) : (sum + 5); 
        if(d == 7)
            d = 0;
        d++;
    }
    printf("%d",sum);
    return 0;
}