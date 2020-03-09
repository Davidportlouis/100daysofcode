#include<stdio.h>
int getSumRemainder(int arr[],int N)
{
    int esum=0,osum=0;
    for(int i=0;i<N;i++)
    {
        if(arr[i]%2==0)
            esum += arr[i];
        else if(arr[i]%2!=0)
            osum += arr[i];
    }
    // printf("%d",esum);
    // printf("%d",osum);
    return osum%esum;
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
    printf("Remainder: %d",getSumRemainder(arr,N));
    return 0;
}