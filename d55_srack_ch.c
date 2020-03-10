#include<stdio.h>
#include<stdlib.h>

int min(int num,int n)
{
    int result = 0,mul=1,i=0;
    while(i < n)
    {
        int unit = num % 10;
        if(unit == 6)
            result += 5 * mul;
        else
            result += unit * mul;

        mul *= 10;
        num /=10;
        i++;
    }
    return result;
}

int max(int num,int n)
{
    int result = 0,mul=1,i=0;
    while(i < n)
    {
        int unit = num % 10;
        if(unit == 5)
            result += 6 * mul;
        else
            result += unit * mul;

        mul *= 10;
        num /=10;
        i++;
    }
    return result;
}

int minSum(int n1,int n2,int l1,int l2)
{
    int sum = 0;
    int x1 = min(n1,l1);
    int x2 = min(n2,l2);
    sum += x1 + x2;
    return sum;
}


int maxSum(int n1,int n2,int l1,int l2)
{
    int sum = 0;
    int x1 = max(n1,l1);
    int x2 = max(n2,l2);
    sum += x1 + x2;
    return sum;
}

//int max(int n)
int main(void)
{
    int n1,n2,l1,l2;
    scanf("%d%n %d%n",&n1,&l1,&n2,&l2);
    printf("%d\n",minSum(n1,n2,l1,l2));
    printf("%d\n",maxSum(n1,n2,l1,l2));
    return 0;
}
