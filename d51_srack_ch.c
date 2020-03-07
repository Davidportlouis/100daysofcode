#include<stdio.h>

int check(char *s1,char *s2,int l1,int l2,char ch)
{
    int s1_c = 0,s2_c = 0,i=0;
    while(i<l1)
    {
        if(s1[i] == ch)
            s1_c++;
        i++;
    }
    i = 0;
    while(i<l2)
    {
        if(s2[i] == ch)
            s2_c++;
        i++;
    }
    if(s1_c < s2_c)
        return 1;
    return 0;
}

int main(void)
{
    char s1[100],s2[100],ch;
    int l1=0,l2=0,c=0;
    scanf("%s%n",s1,&l1);
    scanf("%s%n",s2,&l2);
    scanf(" %c",&ch);
    c = check(s1,s2,l1,l2,ch);
    if(c==0)
        printf("%s",s1);
    else if(c==1)
        printf("%s",s2);
    return 0;
}