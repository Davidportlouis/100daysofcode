// Alternate Even Odd
#include<stdio.h>
#define MAX 100

static int n;

int check_even_odd(int *arr)
{
    int flag = 0;
    for(int i=0;i<n;i++)
    {
        if(i != n-1 )
        {
            if((arr[i] % 2 ==0 && arr[i+1] % 2 != 0) || (arr[i]%2!=0 && arr[i+1]%2==0))
                flag++;
        }
    }
    // printf("%d ",flag);
    if(flag == n-1)
        return 1; 
    return 0;
}

int main(void)
{
    int arr[MAX];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    (check_even_odd(arr) == 1)? printf("yes") : printf("no");
    return 0;
}