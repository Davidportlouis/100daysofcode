#include<stdio.h>
#define MAX 100

int search(int *arr,int key,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i] == key)
            return i;
    }
    return -1;
}

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bsort(int *a,int *b,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(b[j] > b[j+1])
            {
                swap(&a[j],&a[j+1]);
                swap(&b[j],&b[j+1]);
            }
        }
    }
}

int main(void)
{
    int x,y,i,j,l,k,products[MAX],list[MAX],avail[MAX],idx[MAX];
    scanf("%d %d",&x,&y);
    for(i=0;i<x;i++)
    {
        scanf("%d",&products[i]);
    }
    for(i=0;i<y;i++)
    {
        scanf("%d",&list[i]);
    }
    j = l = 0;
    for(i=0;i<y;i++)
    {
        if((k=search(products,list[i],x)) != -1)
        {
            avail[j++] = products[k];
            idx[l++] = k;
        }
    }
    bsort(avail,idx,j);
    for(i=0;i<j;i++)
    {
        printf("%d ",avail[i]);
    }
    return 0;
}