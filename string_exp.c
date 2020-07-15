#include<stdio.h>
#include<math.h>
#include<ctype.h>

static int g,i;

int get_int(char *arr,int l)
{
    int sum;
    char digits[10];
    i = 0;
    while(isdigit(arr[l]) && arr[l] != '\0')
    {
        digits[i++] = arr[l++]; 
    }
    sscanf(digits,"%d",&sum);
    if(sum % 2 == 0)
        g += (i-1);
    return sum;
}

int main(void)
{
    int n,k;
    char s[100];
    scanf("%s%n",s,&n);
    for(g=0;g<n;g++)
    {
        if(isdigit(s[g]))
        {
            k = get_int(s,g);
            if(k%2 == 0)
            {
                for(int j=0;j<k-1;j++)
                {
                    printf("%c",s[g-i]);
                }
            }else
                printf("%c",s[g]);
        }else
            printf("%c",s[g]);
    }
    return 0;
}