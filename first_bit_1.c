//Counting 1 in first bit position
#include<stdio.h>

static int bits[32];

int int2bits(int x,int flag,int n_bit)
{
    int i = 0;
    while(x != 0)
    {
        bits[i++] = x % 2;
        x /= 2;
    }
    if(flag)
    {
        while(i < n_bit)
            bits[i++] = 0;
    }
    return i;
}

int main(void)
{
    int i,n,c=0,x,n_bits;
    scanf("%d",&n);
    n_bits = int2bits(n,0,0);
    for(i=1;i<=n;i++)
    {
        x = int2bits(i,1,n_bits);
        if(bits[x-1] == 1)
            c++;
    }
    printf("%d",c);
    return 0;
}