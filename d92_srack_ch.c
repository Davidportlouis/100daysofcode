#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int getnum(int c)
{
    switch(c)
    {
        case 48: return 0;
        case 49: return 1;
        case 50: return 2;
        case 51: return 3;
        case 52: return 4;
        case 53: return 5;
        case 54: return 6;
        case 55: return 7;
        case 56: return 8;
        case 57: return 9;
    }
    return 0;
}

int main(void)
{
    char str[1000];
    int n,sum = 0;
    scanf("%s%n",str,&n);
    for(int i=0;i<n;i++)
    {
        if(isalpha(str[i]))
            printf("%c",str[i]);
        else if(isdigit(str[i]))
            sum += getnum((int)str[i]);
    }
    printf("%d",sum);
    return 0;
}