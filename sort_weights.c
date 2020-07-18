// Sort based on weights
#include<stdio.h>
#include<math.h>
#define MAX 1000

int get_weight(int x)
{
    int weight = 0;
    int sqroot = sqrt(x);
    if((sqroot * sqroot) == x)
        weight += 5;
    if((x % 4 == 0) && (x % 6 == 0))
        weight += 4;
    if(x % 2 == 0)
        weight += 3;
    return weight;
}

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int *a,int *w,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(w[j] > w[j+1])
            {
                swap(&w[j],&w[j+1]);
                swap(&a[j],&a[j+1]);
            }
        }
    }
}

int main(void)
{
    int n,arr[MAX],wt[MAX];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        wt[i] = get_weight(arr[i]);
    }
    sort(arr,wt,n);
    for(int i=0;i<n;i++)
    {
        printf("%d %d\n",arr[i],wt[i]);
    }
    return 0;
}