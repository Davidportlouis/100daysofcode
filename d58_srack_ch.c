#include<stdio.h>
#include<stdlib.h>

int *getArrayOfRightSmallerCount(int arr[],int N)
{
    static int count[1000];
    for(int i=0;i<N;i++)
    {
        if(i == N-1)
            arr[i] = 0;
        for(int j=i+1;j<N;j++)
        {
            if(arr[i] > arr[j])
            {
                count[i]++;
            }
        }
    }
    return count;
}

int main(void)
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *newArr = getArrayOfRightSmallerCount(arr,N);
    printf("Array: ");
    for(int i=0;i<N;i++)
    {
        printf("%d ",newArr[i]);
    }
    return 0;
}