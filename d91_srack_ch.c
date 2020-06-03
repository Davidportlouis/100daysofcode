#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int check_vowel(char *s)
{
    int flag = 0,i=0;
    while(s[i] != '\0')
    {
        s[i] = tolower(s[i]);
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] =='u')
            flag=1;
        i++;
    }
    return flag;
}

int main(void)
{
    char strings[100][100];
    int n,flag = 0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s[^\n]",strings[i]);
    }
    for(int i=0;i<n;i++)
    {
        flag += check_vowel(strings[i]);
    }
    (flag >= n)? printf("yes") : printf("no");
    return 0;
}