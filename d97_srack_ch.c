#include<stdio.h>
#include<stdlib.h>

static int digits[1000000];

int check_digit(int x)
{
   int n=0,flag=0;
   while(x != 0)
   {    
       digits[n] = x%10;
       x /= 10;
       n++;
   }
   for(int i=0;i<=n;i++)
   {
       if(i != n-1)
        if((abs(digits[i] - digits[i+1])) == 1)
            flag++;
   }
   return (flag == n-1);
}

int main(void)
{
    int n,i;
    scanf("%d",&n);
    for(i=10;i<=n;i++)
    {
        if(check_digit(i))
            printf("%d ",i);
    }
    if(n < 10)
        printf("-1");
    return 0;
}