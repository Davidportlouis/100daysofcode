// Jump Search
#include<stdio.h>
#include<math.h>
#define LIMIT 1000

int jumpSearch(int *arr,int n,int key)
{
    int m,low,high;
    m = sqrt(n);
    low = 0,high = m;
    while(arr[high] < key && high < n)
    {
        low = high;
        high += m;
        if(high > n-1)
            high = n;
    }
    for(int i=low;i<=high;i++)
    {
        if(arr[i] == key)
            return i;
    }
    return -1;
}

int main(void)
{
    int n,arr[LIMIT],key,pos;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&key);
    pos = jumpSearch(arr,n,key);
    (pos != -1)? printf("%d is located at %d.\n",key,pos) : printf("%d is not found.\n",key);
    return 0;
}