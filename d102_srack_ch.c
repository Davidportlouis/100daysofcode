#include<stdio.h>
#define MAX 100

static int arr[MAX],n;

int right_routine(int x)
{
    int r_sum = 0;
    for(int i=0;i<x;i++)
    {
        r_sum += arr[i];
    }
    return r_sum;
}

int get_sum(int x,int x_idx)
{
    int l_sum=0,r_sum=0,l_digit,r_digit,i=0,j=0,k=0;
    //extracting l_digit & r_digit
    while(x != 0)
    {
        if(i == 0)
            r_digit = x % 10;
        else
            l_digit = x % 10;
        i++;
        x /= 10;
    }
    //Right Cycle
    j = x_idx+r_digit;
    for(i=x_idx+1;i<=j;i++)
    {
        if(i != n){
            r_sum += arr[i];
            k++;
        }
        else{
            r_sum += right_routine(r_digit-k);
        }
    }
    // printf("Right Sum: %d\n",r_sum);
    //Left Cycle
    k = 0;
    j = x_idx-1;
    while(l_digit > 0)
    {
        if(j >= 0)
        {
            l_sum += arr[j];
            // printf("%d ",arr[j]);
            j--;
            k++;
            l_digit--;
        }else{
            l_sum += arr[n-l_digit];
            // printf("%d ",arr[n-l_digit]);
            l_digit--;
        }
    }
    // printf("Left Sum: %d\n",l_sum);
    return l_sum+r_sum;
}

int main(void)
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",get_sum(arr[i],i));
    }
    return 0;
}