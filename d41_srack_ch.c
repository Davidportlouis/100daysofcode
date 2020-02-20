#include<stdio.h>
#include<math.h>

int main(void)
{
    int n,x,p=1,val=0,mod;
    scanf("%d%n",&n,&x);
    int len = x/2;
    mod = pow(10,len);
    while(n!=0)
    {
        val = n%mod;
        printf("%d\n",val);
        n /= mod;
        p *= val;
        printf("%d\n",p);
    }
    printf("%d",p);
    return 0;
}