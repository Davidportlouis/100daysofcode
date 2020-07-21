#include<stdio.h>
#define MAX 100

int main(void)
{
    int n,i,j,k=0;
    char s[MAX];
    scanf("%s%n",s,&n);
    for(i=0;i<(2*n)/2;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            printf("-");
        }
        for(j=0;j<i+1;j++)
        {
            printf("%c",s[j]);
        }
        printf("\n");
    }
    for(i=(2*n)/2;i<(2*n-1);i++,k++)
    {
        for(j=1+k;j<n;j++)
        {
            printf("%c",s[j]);
        }
        printf("\n");
    }
    return 0;
}