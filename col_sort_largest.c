#include<stdio.h>
#define MAX 100

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bsort(int *arr,int *idx,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                swap(&idx[j],&idx[j+1]);
            }
        }
    }
}

int main(void)
{
    int r,c,i,j,k,max,arr[MAX][MAX],col[MAX],idx[MAX];
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(j=0;j<c;j++)
    {
        max = 0;
        for(i=0;i<r;i++)
        {
            if(arr[i][j] > max)
            {
                max = arr[i][j];
                col[j] = max;
                idx[j] = j;
            }
        }
    }
    bsort(col,idx,c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            k=idx[j];
            printf("%d ",arr[i][k]);
        }
        printf("\n");
    }
    return 0;
}