#include<stdio.h>
#include<inttypes.h>
#define LIMIT 1000

int  num_ones(int x)
{
    int rem=0,i=0,count=0;
    while(x != 0)
    {
        rem = x % 2;
        if(rem == 1)
            count++;
        x /= 2;
        i++;
    }
    return count;
}

void bsort(int *o_arr,int *arr,int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(o_arr[j] < o_arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                temp = o_arr[j];
                o_arr[j] = o_arr[j+1];
                o_arr[j+1] =temp;
            }
            if(o_arr[j] == o_arr[j+1])
            {
                if(arr[j] > arr[j+1])
                {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                //temp = o_arr[j];
                //o_arr[j] = o_arr[j+1];
                //o_arr[j+1] =temp;
                }
            }
        }
    }
}

int main(void)
{
    int n,arr[LIMIT],one_arr[LIMIT];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        one_arr[i] = num_ones(arr[i]);
    }
    bsort(one_arr,arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}