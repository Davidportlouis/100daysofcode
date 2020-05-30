#include<stdio.h>
#include<inttypes.h>

static uint64_t bin_x[500],bin_y[500];

int min(int x,int y)
{
    if(x < y)
        return x;
    return y;
}

int dec_to_bin(int x,char ip)
{
    int i = 0;
    int rem;
    while(x != 0)
    {
        rem = x % 2;
        if(ip == 'x')
            bin_x[i] = rem;
        if(ip == 'y')
            bin_y[i] = rem;
        x /= 2;
        i++;
    }
    return i;
}

int check_bits(int x,int y)
{
    for(int i=0;i<min(x,y);i++)
    {
        if(bin_x[i] != bin_y[i])
            return i+1;
    }
    return -1;
}

int main(void)
{
    int x,y,l,m;
    scanf("%d %d",&x,&y);
    l = dec_to_bin(x,'x');
    m = dec_to_bin(y,'y');
    printf("%d",check_bits(l,m));
    return 0;
}