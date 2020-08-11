// Pairs - Unit digit sum
#include<stdio.h>
#include<inttypes.h>
#define MAX 16

static int digits[MAX];

void eliminate_duplicate(int x,int y,int n)
{
    for(int i=0;i<n;i++)
    {
        if(digits[i] == x || digits[i] == y)
        {
            digits[i] = -1;
        }
    }
}

int extract_digits(int64_t x)
{
    int i = 0;
    while(x != 0)
    {
        digits[i++] = x % 10;
        x /= 10; 
    }
    return i;
}

int main(void)
{
    int64_t x;
    int u,n,ct=0;
    scanf("%" SCNd64,&x);
    u = x % 10;
    n = extract_digits(x);
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(digits[i] != -1 && digits[j] != -1 && 
                (digits[i] + digits[j] == u) && i != j)
            {
                eliminate_duplicate(digits[i],digits[j],n);
                ct++;
            }
        }
    }
    if(ct == 0)
        printf("-1");
    else
        printf("%d",ct);
    return 0;
}