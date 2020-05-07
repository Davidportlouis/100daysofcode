#include<stdio.h>

int main(void)
{
    int i=0,flag=0,largest=-1;
    char s[1000];
    scanf("%s",s);
    while(s[i] != '\0')
    {
        while(s[i] == '1')
        {
            flag++;
            if(largest < flag) 
                largest = flag;
            i++;
        }
        if(s[i] == '0')
            flag=0;
        i++;
    }
    if(largest == 1)
        printf("%d",-1);
    else
        printf("%d",largest);
    return 0;
}