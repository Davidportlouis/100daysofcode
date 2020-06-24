#include<stdio.h>
#include<inttypes.h>
#include<math.h>

int check_perfect_sqr(uint64_t x)
{
    uint64_t rt = sqrt(x);
    return (rt*rt == x);
}

int check_is_fib(uint64_t x)
{
    return check_perfect_sqr(5*x*x+4) || check_perfect_sqr(5*x*x-4);
}

int main(void)
{
    int n,ct=0;
    uint64_t arr[100],sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%" SCNu64,&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(check_is_fib(arr[i]))
        {
            sum += arr[i];
            ct++;
        }
    }
    (ct != 0)?printf("%"PRIu64,sum) : printf("-1");
    return 0;
}