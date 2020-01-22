#include<stdio.h>
#include<stdlib.h>

int* getArrayOfOddOrEven(int n)
{
    int *arr = malloc(n*sizeof(int)),count=0;
    if(n % 2 == 0)
    {
        int i = 2;
        while(count < n)
        {
            arr[count] = i;
            i+=2;
            count++;
        }
    }else{
        int i = 1;
        while(count < n)
        {
            arr[count] = i;
            i+=2;
            count++;
        }
    }
    return arr;
}

int main(void)
{
    int n;
    scanf("%d",&n);
    int *arr = getArrayOfOddOrEven(n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    free (arr);
    return 0;
}

