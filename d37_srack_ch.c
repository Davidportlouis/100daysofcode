#include<stdio.h>

int main(void)
{
    int N,currNum,total=0,ctr=1;
    scanf("%d",&N);
    while (ctr<=N)
    {
        scanf("%d",&currNum);
        if(currNum % 2 == 0)
            total += currNum;
        else
            total -= currNum;
        ctr++;
    }
    printf("%d",total);
    return 0;
}