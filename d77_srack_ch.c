#include<stdio.h>

int power(int b,int e)
{
    int ans = 1;
    for(int i=0;i<e;i++)
    {
        ans *= b;
    }
    return ans;
}

void rotateLeftByOne(int *arr,int n)
{
    int temp = arr[0];
    for(int i=0;i<n-1;i++)
    {
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}

void rotate(int *arr,int steps,int n)
{
    for(int i=0;i<steps;i++)
    {
        rotateLeftByOne(arr,n);
    }
}

int binToint(int *arr,int x)
{
    int ans = 0,j=x-1;
    for(int i=0;i<x;i++)
    {
        ans += arr[j] * power(2,i);
        j--;
    }
    return ans;
}

int check(int *arr,int n)
{
    int ans,max=0,i=0;
    while(i<n)
    {
        ans = binToint(arr,n);
        if(ans %2 !=0 && ans > max){
            max = ans;
        }
        rotate(arr,1,n);
        i++;
    }
    if(max >  0)
        return max;
    return -1;
}

int main(void)
{
    int m,n,arr[10],i=0;
    scanf("%d %d",&m,&n);
    for(i=0;i<n;i++)
    {
        arr[i] = 1;
    }
    for(;i<m+n;i++)
    {
        arr[i] = 0;
    }
    printf("%d",check(arr,m+n));
    return 0;
}