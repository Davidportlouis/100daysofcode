#include<stdio.h>
#include<stdlib.h>

int check_sum(int *arr,int n,int k)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]+arr[j] == k)
                return 1;
        }
    }
}

int main(void)
{
    int *arr = (int *)malloc(100 * sizeof(int)),i=0,num,k;
    while(1)
    {
        scanf("%d",&num);
        if(num!=EOF)
        {
            arr[i] = num;
            i++;
        }
        else
            break;
    }
    scanf("%d",&k);
    if(check_sum(arr,i,k)!=1)
    {
        printf("false");
    }else{
        printf("true");
    }
    return 0;
}