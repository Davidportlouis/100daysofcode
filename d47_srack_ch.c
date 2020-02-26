//getOddEvenString
#include<stdio.h>
#include<stdlib.h>

char* getOddEvenString(int N)
{
    int exit;
    int *arr = (int *)malloc(sizeof(int));
    char *charr = (char *)malloc(sizeof(char));
    int i=0;
    while(N!=0)
    {
        arr[i] = N%10;
        N/=10;
        i++;
    }
    for(int k=i-1;k>=0;k--)
    {
        // printf("%d ",arr[k]);
        if(arr[k]%2==0)
            charr[k] = 'e';
        if(arr[k]%2!=0)
            charr[k] = 'o';
    }
    return charr;
}

int main(void)
{
    int N;
    scanf("%d",&N);
    printf("String %s",getOddEvenString(N));
    return 0;
}

