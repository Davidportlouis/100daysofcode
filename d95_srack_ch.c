#include<stdio.h>

int main(void)
{
    char s[1000];
    int n;
    scanf("%s%n",s,&n);
    if(n %2 != 0)
    {
        for(int i=0;i<n;i++)
        {
            if(i == n/2){
                printf("*");
                continue;
            }
            printf("%c",s[i]);
        }
    }else
    {
        for(int i=0;i<n;i++)
        {
            if((i == n/2) || (i == (n/2)-1)){
                printf("*");
                continue;
            }
            printf("%c",s[i]);
        }
    }
    return 0;
}