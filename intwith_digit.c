#include<stdio.h>
#include<math.h>
#define MAX 100000000

unsigned long int getIntegerWithDigitsCount(int n)
{
    int digits[100],i=0,digits_2[100],curr=0,count,k=0;
    double l=0,x = 0;
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
        while(digits[j] == curr)
        {
            count++;
            j--;
        }
        digits_2[k] = count;
        digits_2[k+1] = curr;
        k+=2;
    }
    for(int i=k-1;i>=0;i--)
    {
        x += digits_2[i] * pow(10.0,l);
        l++; 
    }
    // printf("%d",(int)pow(10.0,3.0));
    return (unsigned long int)x;
}

int main(void)
{
    int n;
    scanf("%d",&n);
    printf("%lu",getIntegerWithDigitsCount(n));
}