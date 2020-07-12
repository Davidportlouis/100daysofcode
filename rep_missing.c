#include<stdio.h>
#define MAX 100

int get_int(int *arr)
{
    int n=0,ip;
    do
    {
        scanf("%d",&ip);
        arr[n] = ip;
        n++;
    }while(getchar() != 10);
    return n;
}

int search(int *arr,int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i] == key)
            return 1;
    }
    return 0;
}

int main(void)
{
    int n,arr[MAX],rep[MAX],k=0;
    n = get_int(arr);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j])
            {
                rep[k] = arr[j];
                k++;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(!search(arr,n,i))
        {
            rep[k] = i;
            k++;
        }
    }
    for(int i=0;i<k;i++)
    {
        printf("%d ",rep[i]);
    }
}
