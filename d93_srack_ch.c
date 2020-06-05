#include<stdio.h>
#include<ctype.h>

int validHex(char c)
{
    if((c >= '0' && c <= '9') || (c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'f'))
        return 1;
    return 0;
}


int main(void)
{
    char s[20];
    int n,flag = 0;
    scanf("%s%n",s,&n);
    for(int i=0;i<n;i++)
    {
        if(validHex(s[i]))
            flag++;
    }
    (flag == n)? printf("yes") : printf("no");
    return 0;
}