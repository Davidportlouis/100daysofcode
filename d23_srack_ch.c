#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int ch[50],n=0;
    char c;
    do
    {
        scanf("%d%c",&ch[n],&c);
        n++;
    }while(c!='\n');
    for(int i=0;i<n-1;i++)
    {
        if(ch[i]%2==0)
        {
            printf("%d ",ch[i]);
        }
    }
    return 0;
}
