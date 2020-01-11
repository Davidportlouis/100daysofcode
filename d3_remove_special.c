#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(void)
{
    char s[100];
    int n;
    scanf("%s%n",s,&n);
    for(int i=0;i<n;i++)
    {
        if(isalpha(s[i]) || isdigit(s[i]))
            printf("%c",s[i]);
    }
    return 0;
}