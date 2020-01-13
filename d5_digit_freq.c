#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(void)
{
    char *str = (char *)malloc(1000 * sizeof(char));
    int n,zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
    scanf("%s%n",str,&n);
    // printf("%s %d",str,n);
    for(int i=0;i<n;i++)
    {
        if(isdigit(str[i]))
        {
            if(str[i] == '0')
                zero++;
            if(str[i] == '1')
                one++;
            if(str[i] == '2')
                two++;
            if(str[i] == '3')
                three++;
            if(str[i] == '4')
                four++;
            if(str[i] == '5')
                five++;
            if(str[i] == '6')
                six++;
            if(str[i] == '7')
                seven++;
            if(str[i] == '8')
                eight++;
            if(str[i] == '9')
                nine++;
        }
    }
    printf("%d %d %d %d %d %d %d %d %d %d",zero,one,two,three,four,five,six,seven,eight,nine);
    return 0;
}