#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int swapEveryTwoInteger(int N)
{
    char *str = malloc(sizeof(str));
    sprintf(str,"%d",N);
    int len = strlen(str);
    for(int i=0;i<len-1;i+=2)
    {
        char temp = str[i];
        str[i] = str[i+1];
        str[i+1] = temp;
    }
    sscanf(str,"%d",&N);
    return N;
}

int main(void)
{
    int N;
    scanf("%d",&N);
    printf("Integer: %d",swapEveryTwoInteger(N));
}