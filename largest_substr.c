/* Length of Largest Substring */
#include<stdio.h>
#define MAX 100

int lenSubStr(char *s)
{
    int i=0,max=0,ct=0;
    while(s[i] != '\0')
    {
        if(s[i] == 's' && s[i+1] == 'r')
        {
            ct+=2;
            i+=2;
        }else
        {
            if(ct > max)
                max = ct;
            ct = 0;
            i++;
        }
    }
    if(ct > max)
        max = ct;
    return max;
}

int main(void)
{
    char s[MAX];
    scanf("%s",s);
    printf("%d",lenSubStr(s));
    return 0;
}
