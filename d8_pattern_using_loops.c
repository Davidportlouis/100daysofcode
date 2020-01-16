#include<stdio.h>

int main(void)
{
    int x,n,min=0;
    scanf("%d",&x);
    n = 2 * x - 1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            min = i < j ? i : j;
            min = min < n-i ? min : n - i - 1;
            min = min < n-j-1 ? min : n - j - 1;
            printf("%d ",x-min);
        }
        printf("\n");
    }
    return 0;
}