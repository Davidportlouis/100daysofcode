#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define LIMIT 100
static int alpha[25];

void check_alpha(char c)
{
    switch(toupper(c))
    {
        case 'A': alpha[0]++;
                  break;
        case 'B': alpha[1]++;
                  break;
        case 'C': alpha[2]++;
                  break;
        case 'D': alpha[3]++;
                  break;
        case 'E': alpha[4]++;
                  break;
        case 'F': alpha[5]++;
                  break;
        case 'G': alpha[6]++;
                  break;
        case 'H': alpha[7]++;
                  break;
        case 'I': alpha[8]++;
                  break;
        case 'J': alpha[9]++;
                  break;
        case 'K': alpha[10]++;
                  break;
        case 'L': alpha[11]++;
                  break;
        case 'M': alpha[12]++;
                  break;
        case 'N': alpha[13]++;
                  break;
        case 'O': alpha[14]++;
                  break;
        case 'P': alpha[15]++;
                  break;
        case 'Q': alpha[16]++;
                  break;
        case 'R': alpha[17]++;
                  break;
        case 'S': alpha[18]++;
                  break;
        case 'T': alpha[19]++;
                  break;
        case 'U': alpha[20]++;
                  break;
        case 'V': alpha[21]++;
                  break;
        case 'W': alpha[22]++;
                  break;
        case 'X': alpha[23]++;
                  break;
        case 'Y': alpha[24]++;
                  break;
        case 'Z': alpha[25]++;
                  break;
    }
}

int main(void)
{
    char s1[LIMIT],s2[LIMIT];
    int n1,n2,flag=0,i=0;
    scanf("%s%n",s1,&n1);
    scanf("%s%n",s2,&n2);
    while(i<n1)
    {
        check_alpha(s1[i]);
        i++;
    }
    i=0;
    while(i<n2)
    {
        check_alpha(s2[i]);
        i++;
    }
    for(int i=0;i<26;i++)
    {
        if(alpha[i] != 0)
            flag++;
    }
    if(flag == 26)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}