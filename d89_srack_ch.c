#include<stdio.h>

int min(int a,int b)
{
    if(a < b)
        return a;
    return b;
}

int main(void)
{
    char s1[100],s2[100];
    int n1,n2;
    scanf("%s%n ",s1,&n1);
    scanf("%s%n",s2,&n2);
    for(int i=0;i<min(n1,n2);i++){
        printf("%c",s1[i]);
    }
    printf(" ");
    for(int i=0;i<min(n1,n2);i++){
        printf("%c",s2[i]);
    }
    return 0;
}