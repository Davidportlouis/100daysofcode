#include<stdio.h>

int main(void)
{
    int n,k;
    char s[1000];
    scanf("%s%n",s,&k);
    scanf("%d",&n);
    if(s[k-1] == s[n-1])
        printf("yes");
    else
        printf("no");
    return 0;
}