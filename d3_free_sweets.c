#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n,x,y,sum=0;
    int *arr = (int *)malloc(50 * sizeof(int));
    scanf("%d %d %d",&n,&x,&y);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i] > x)
        {
            sum += arr[i] + y;
        }else{
            sum += arr[i];
        }
    }
    printf("%d",sum);
    return 0;
}