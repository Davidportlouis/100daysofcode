#include<stdio.h>

int main(void)
{
    char s[100];
    int n;
    scanf("%s%n",s,&n);
    for(int i=n;i>=0;i--)
    {
        printf("%c",s[i]);
    }
    return 0;
}