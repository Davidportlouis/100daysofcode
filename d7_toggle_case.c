#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(void)
{
    char s1[1000],s2[1000];
    int n;
    scanf("%s%n",s1,&n);
    scanf("%s",s2);
    for(int i=0;i<n;i++)
    {
        if(s2[i] == 'u' || s2[i] == 'U')
        {
            s1[i] = toupper(s1[i]);
        }else if(s2[i] == 'l' || s2[i] == 'L')
        {
            s1[i] = tolower(s1[i]);
        }
    }
    printf("%s",s1);
    return 0;
}