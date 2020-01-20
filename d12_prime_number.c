#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n,flag=0;
    scanf("%d",&n);
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
            flag = 1;
            break;
    }
    if(n==1)
        printf("%d is neither prime nor composite",n);
    else
    {
        if(flag == 1)
            printf("%d is non-prime number",n);
        else
            printf("%d is prime number",n);
    }
    return 0;
}