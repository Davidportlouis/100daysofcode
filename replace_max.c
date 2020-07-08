#include<stdio.h>
#include<stdlib.h>

static int digits[10];

int power(int b,int e)
{
    int ans = 1;
    for(int i=0;i<e;i++)
    {
        ans *= b;
    }
    return ans;
}

int get_max(int *arr,int n)
{
    int max = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

int get_digits(int x)
{
    int i = 0;
    while(x != 0)
    {
        digits[i] = x % 10;
        x /= 10;
        i++;
    }
    return i;
}

void replace_max(int x_max,int y_max,int n)
{
    for(int i=0;i<n;i++)
    {
        if(digits[i] == x_max)
            digits[i] = y_max;
    }
}

int main(void)
{
    int x,y,x_max,y_max,xn,yn,num=0,j=0;
    scanf("%d %d",&x,&y);
    yn = get_digits(y);
    y_max = get_max(digits,yn); 
    xn = get_digits(x);
    x_max = get_max(digits,xn);
    replace_max(x_max,y_max,xn);
    for(int i=0;i<xn;i++)
    {
        num += digits[i] * power(10,j);
        j++;
    }
    printf("%d",num+y);
    return 0;
}