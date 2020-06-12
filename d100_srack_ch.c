#include<stdio.h>

static int bits[1000];

int dec2bin(int x)
{
    int ct = 0,flag=0,i,j;
    while(x != 0)
    {
        bits[ct] = x % 2;
        x /= 2;
        ct++;
    }
    j = ct-1;
    for(i=0;i<ct;i++)
    {
        if(bits[i] == bits[j])
            flag++;
        j--;
    }
    for(j=ct-1;j>=0;j--)
    {
        printf("%d",bits[j]);
    }
    printf("\n");
    if(flag == ct)
        return 1;
    return 0;
}

int main(void)
{
    int n;
    scanf("%d",&n);
    (dec2bin(n) == 1) ? printf("yes") : printf("no");
    return 0;
}