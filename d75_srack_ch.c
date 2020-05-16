#include<stdio.h>
#include<stdlib.h>

void multiplesToBeginning(int arr[],int N)
{
    int arr2[N],j=0;
    for(int i=0;i<N;i++)
    {
        if(arr[i] % 10 == 0)
        {
            arr2[j] = arr[i];
            j++;
        }
    }
    for(int i=0;i<N;i++)
    {
        if(arr[i] % 10 != 0)
        {
            arr2[j] = arr[i];
            j++;
        }
    }
    for(int i=0;i<N;i++)
    {
        arr[i] = arr2[i];
    }
}

int main(void)
{
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    multiplesToBeginning(arr,N);
    printf("Array: ");
    for(int i=0;i<N;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}