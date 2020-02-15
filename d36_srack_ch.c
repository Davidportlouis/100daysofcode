#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int* lambda(int arr[],int n)
{
    int *temp = (int *)malloc(n * sizeof(int));
    int j=0;
    for(int i=0;i<n;i++)
    {
        int x = arr[i];
        if(x%2==0)
        {
            temp[j] = x*2; 
            j++;
        }
        else
        {
            temp[j] = pow(x,2);
            j++;
        }
    }
    return temp;
}

int main(void)
{
    int n,arr[100];
    int *newarr = (int *)malloc(n * sizeof(int));
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    newarr = lambda(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",newarr[i]);
    }
    return 0;
}