#include<stdio.h>
#include<string.h>

void reverse(char *str)
{
    int n = strlen(str);
    for(int i=n-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    printf(" ");
}

int main(void)
{
    int k,i=0;
    char s[1000];
    char *split;
    char *st[1000];
    scanf("%[^\n]*%c",s);
    scanf("%d",&k);
    split = strtok(s," ");
    while(split != NULL)
    {
        st[i++] = split;
        split = strtok(NULL, " ");
    }
    int n = k;
    for(int j=0;j<i;j++)
    {  
        if(j==n-1)
        {
            reverse(st[j]);
            n+=k;
        }
        else
            printf("%s ",st[j]);
    }
    return 0;
}