#include<stdio.h>
#include<stdlib.h>


int check_palindrome(char *s,int n)
{
    int c = 0;
    for(int i=0;i<n-2;i++)
    {
        if(s[i] == s[i+2])
        {
            for(int j=i;j<=i+2;j++)
            {
                printf("%c",s[j]);
                c = 0;
            }
            printf("\n");
        }
    }
    if(c == 1)
        printf("-1");
    return 0;
}


int main(void)
{
    int n;
    char *str = malloc(100*sizeof(char));
    scanf("%s%n",str,&n);
    check_palindrome(str,n);
    return 0;
}