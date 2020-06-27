#include<stdio.h>
#include<stdlib.h>

unsigned long long int getIntegerWithDigitsCount(int n)
{
    int digits[100],i=0,digits_2[100],curr=0,count,k=0,l=0;
    char buf[50],*temp;
    unsigned long long int x = 0;
    while(n != 0)
    {
        digits[i] = n % 10;
        n = n/10;
        i++;
    }
    for(int j=i-1;j>=0;)
    {
        count = 0;
        curr = digits[j];
        while(digits[j] == curr && j>=0)
        {
            count++;
            j--;
        }
        digits_2[k] = count;
        digits_2[k+1] = curr;
        k+=2;
    }
    for(int i=0;i<k;i++)
    {
        l += sprintf(&buf[l],"%d",digits_2[i]);
    }
    x = strtoull(buf,&temp,10);
    return x;
}

int main(void)
{
    int n;
    scanf("%d",&n);
    printf("%llu",getIntegerWithDigitsCount(n));
}
