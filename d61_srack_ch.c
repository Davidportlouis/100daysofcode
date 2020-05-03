#include<stdio.h>
#define LIMIT 1000

int deleteElement(int *arr,int n,int key)
{
    int idx[10],j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == key){
            idx[j] = i;
            j++;
        }
    }
    if(j == 0)
        return n;
    n = n - 1;
    for(int i=idx[j-1];i<n;i++)
    {
        arr[i] = arr[i+1];
    }
    return n;
}

int main(void)
{
    int n,arr[LIMIT],k;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    n = deleteElement(arr,n,k);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}