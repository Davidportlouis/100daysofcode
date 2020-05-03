#include<stdio.h>
#define ULL unsigned long long

ULL concatenateDigitsWithTrailingZeros(int *arr,int n)
{
    ULL result = 0,mul=1;
    int zcount = 0,i=n-1;
    while(i>=0)
    {
        if(arr[i] != 0)
        {
            result += arr[i] * mul;
            mul *= 10;
        }
        if(arr[i] == 0)
            zcount++;
        i--;
    }
    i = 0;
    while (i<zcount)
    {
        result *= 10;
        i++;
    }
    return result;
}

int main(void)
{
    int n;
    scanf("%d",&n);
    int arr[n]; 
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Integer: %llu",concatenateDigitsWithTrailingZeros(arr,n));
    return 0;
}