#include<stdio.h>

void lexi_sort(char *str,int n)
{
    char temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(str[j] > str[j+1])
            {
                temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
    str[n] = '\0';
    printf("%s",str);
}

int main(void)
{
    char str[100];
    int n;
    scanf("%s%n",str,&n);
    lexi_sort(str,n);
    return 0;
}