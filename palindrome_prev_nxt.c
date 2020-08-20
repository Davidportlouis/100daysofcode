/* Palindrome Previous or next */
#include<stdio.h>
#define MAX 100

void replace_next(char *s)
{
    *s += 1;
}

void replace_prev(char *s)
{
    *s -= 1;
}

int palindrome(char *s,int n)
{
    int i,j,c=0;
    for(i=0,j=n-1;i<n && j>=0;i++,j--)
    {
        if(s[i] == s[j])
            c++;
    }
    return c == n;
}

int main(void)
{
    char s[MAX];
    int i,j,n;
    scanf("%s%n",s,&n);
    for(i=0;i<n/2;i++)
    {
        if(s[i]+1 == s[n-i-1]+1)
            replace_next(&s[i]);
        else if(s[i]-1 == s[n-i-1]-1)
            replace_prev(&s[i]);
        else if(s[i]+1 == s[n-i-1]-1)
            replace_next(&s[i]);
        else if(s[i]-1 == s[n-i-1]+1)
            replace_prev(&s[i]);
    }
    for(j=n-1,i=0;j>=n/2;j--,i++)
    {
        if(s[j]+1 == s[i])
            replace_next(&s[j]);
        else if(s[j]-1 == s[i])
            replace_prev(&s[j]);
    }
    (palindrome(s,n) !=0)? printf("YES") : printf("NO");
    return 0;
}