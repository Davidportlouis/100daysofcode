#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* getRepeatedString(char str[])
{
    int len = strlen(str),i=0,j=0;
    int size = 2 * len;
    char *newstr = malloc(len * sizeof(char));
    while(i<size && j <len)
    {
        newstr[i] = str[j];
        newstr[i+=1] = str[j];
        i++;
        j++;
    }
    newstr[size]='\0';
    return newstr;
}

int main(void)
{
    char str[101];
    scanf("%s",str);
    char *repstr = getRepeatedString(str);
    printf("String:\n");
    printf("%s",repstr);
    return 0;
}