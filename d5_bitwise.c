#include<stdio.h>

int main(void)
{
    int n,k,max1=0,max2=0,max3=0,num1,num2,num3;
    scanf("%d %d",&n,&k);
    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            num1 = i & j;
            num2 = i | j;
            num3 = i ^ j;
            if(num1 > max1 && num1 < k)
                max1 = num1;
            if(num2 > max2 && num2 < k)
                max2 = num2;
            if(num3 > max3 && num3 < k)
                max3 = num3;
        }
    }
    printf("%d\n%d\n%d\n",max1,max2,max3);
    return 0;
}