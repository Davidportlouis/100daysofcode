#include<stdio.h>
#define MAX 1000

char toLower(char c)
{
    if(c >= 65 && c <= 91)
        return c + 32;
    return c;
}

int check_vowel(char c)
{
    c = toLower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')? 1 : 0;
}

int main(void)
{
    int n,x,y,i,j,k;
    char s[MAX],vow[MAX],con[MAX];
    scanf("%s%n",s,&n);
    x = y = 0;
    for(i=0;i<n;i++)
    {
        if(check_vowel(s[i]))
            vow[x++] = s[i];
        else
            con[y++] = s[i];
    }
    j = 0;
    k = y;
    for(i=0;i<x+y;i++)
    {
        if(j<x)
            printf("%c",vow[j++]);
        if(k>=0 && k!=0)
            printf("%c",con[--k]);
    }
    return 0;
}