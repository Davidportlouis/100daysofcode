#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n,x;
    char *s = malloc(1000 * sizeof(char));
    scanf("%s%n %d",s,&n,&x);
    for(int i=0;i<n;i++)
    {
        if(i == x-1)
        {
            for(int j=0;j<x;j++)
            {
                printf("%c",s[i]);
            }
        }else
        {
            printf("%c",s[i]);
        }
    }
    return 0;
}