// Print smallest positive integer value not formed by
// any combination of the given integers
#include<stdio.h>
#define MAX 100

void bsort(int *arr,int n)
{
    int i,j,tmp;
    for(i=0;i<n-i-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}

int main(void)
{
    int n,i,sum=1,arr[MAX];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    bsort(arr,n);
    for(i=0;i<n;i++)
    {
        if(arr[i] > sum)
            break;
        else
            sum += arr[i];
    }
    printf("%d",sum);
    return 0;
}