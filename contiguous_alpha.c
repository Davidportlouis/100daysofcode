#include<stdio.h>
#include<ctype.h>
#define MAX 100

void printSym(char *s,int low,int high)
{
    if((high - low + 1) > 1)
    {
        printf("{");
        for(int i=low;i<=high;i++)
        {
            printf("%c",s[i]);
        }
        printf("}");
    }else
        printf("%c",s[low]);
}

void check_contiguity(char *s,int n)
{
    int i,low,high;
    low = high = 0;
    for(i=1;i<=n;i++)
    {
        if(tolower(s[i]) == tolower(s[i-1]+1))
        {
            high = i;
        }else{
            printSym(s,low,high);
            low = high = i;
        }
    }
    printSym(s,low,high);
}

int main(void)
{
    int n;
    char s[MAX];
    scanf("%s%n",s,&n);
    check_contiguity(s,n);
    return 0;
}