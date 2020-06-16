//Rotate Digits - Repeat Pattern
#include<stdio.h>
#define MAX 8

static int digits[MAX];
static int cpy_digits[MAX];

void rotate_clockwise(int n)
{
     int temp = cpy_digits[0];
     for(int i=0;i<n;i++)
     {
         cpy_digits[i] = cpy_digits[i+1];
     }
     cpy_digits[n-1] = temp;
}

void extract_digit(int x,int n)
{
    int i = n-1;
    while(x != 0)
    {
        digits[i] = x % 10;
        x/=10;
        i--;
    }
    for(i=0;i<n;i++)
    {
        cpy_digits[i] = digits[i];
    }
}

int main(void)
{
    int n,x;
    scanf("%d%n",&x,&n);
    extract_digit(x,n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<cpy_digits[j];k++)
            {
                printf("%d",digits[j]);
            }
            if(j != n-1)
                printf("-");
        }
        rotate_clockwise(n);
        printf("\n");
    }
    return 0;
}