/* Count of ice creams */
/* large inputs n >= 10^5 */
#include<stdio.h>
#include<stdlib.h>

int compare(const void *a,const void *b)
{
    return (*(int*)a - *(int*)b);
}

int main(void)
{
    int i,n,t,ct=0;
    scanf("%d %d",&n,&t);
    int prices[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&prices[i]);
    }
    qsort(prices,n,sizeof(int),compare);
    i=0;
    while(t >= prices[i])
    {
        t -= prices[i++];
        ct++;
    }
    printf("%d",ct);
    return 0;
}