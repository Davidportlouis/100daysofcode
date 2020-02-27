//getOddEvenString
#include<stdio.h>
#include<stdlib.h>

char* getOddEvenString(int N)
{
    int exit;
    int *arr = (int *)malloc(sizeof(int));
    char *charr = (char *)malloc(sizeof(char));
    int i=0,j=0,m=0;
    long ctr=N;
    while(ctr!=0)
    {
        ctr/=10;
        i++;
    }
    while (j<i)
    {
        arr[j] = N%10;
        printf("%d",arr[j]);
        N/=10;
        j++;
    }
    while(m<i)
    {
    for(int k=i-1;k>=0;k--)
    {
        if(arr[k]==0)
            charr[m] = 'e';
        else if (arr[k]%2==0)
            charr[m] = 'e';
        else if (arr[k]%2!=0 && arr[k]!=0)
            charr[m] = 'o';
        m++;
    }
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

