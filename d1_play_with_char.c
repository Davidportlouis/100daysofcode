// Playing with characters
// Hackerrank C introduction #100daysofcode day-1

#include<stdio.h>

int main(void)
{
    char ch, s[100], sen[100];
    scanf("%c",&ch);
    scanf("%s",s);
    scanf("\n");
    scanf("%[^\n]%*c",sen);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",sen);
    return 0;
}