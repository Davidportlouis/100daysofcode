#include<stdio.h>
#define MAX 100

int open_rooms(int *arr,int n)
{
    int i,j,max,ct,key,start;
    max=0;
    for(i=0;i<n;i++)
    {
        start=i;
        j=i;
        ct=0;
        while(1)
        {
            key=arr[j];
            j=key;
            ct++;
            if(key == start)
                break;
        }
        max = (ct > max)? ct : max;
    }
    return max;
}

int main(void)
{
    int i,n,arr[MAX];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",open_rooms(arr,n));
    return 0;
}