#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int check_string(char *s)
{
    char c;
    int flag = 0,i=0;
    while(s[i] != '\0')
    {
        c = tolower(s[i]);
        if(c == 'x' || c == 'y')
            flag = 1;
        else
            return 0;
        i++;
    }
    return flag;
}

int main(void)
{
    char s[100];
    int key;
    scanf("%s",s);
    key = check_string(s);
    (key == 1)? printf("yes") : printf("no");
    return 0;
}