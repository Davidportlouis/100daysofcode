// N terms - Series
#include<stdio.h>

int main(void)
{
    int n,k,sum,i=1,j=1;
    scanf("%d",&n);
    while(i<=n)
    {
        sum = 0;
        k = i;
        while(k > 0)
        {
            sum += j;
            j++;
            k--;
        }
        printf("%d ",sum);
        i++;
    }
    return 0;
}