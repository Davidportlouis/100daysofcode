#include<stdio.h>
#include<stdlib.h>

void replaceUnitDigitByNumOfDigits(int arr[],int N)
{
    int exit;
    for(int i=0;i<N;i++)
    {
        int c = 0;
        int num = arr[i];
        if(num==0)
            c++;
        while(num!=0)
        {
            num/=10;
            c++;
        }
        arr[i] /= 10;
        // printf("%d ",arr[i]);
        arr[i] = (arr[i] * 10) + c;
        // printf("%d ",arr[i]);
    }
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
    replaceUnitDigitByNumOfDigits(arr,N);
    for(int i=0;i<N;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
