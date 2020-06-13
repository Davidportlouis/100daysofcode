//10 days of statistics
#include<stdio.h>
#define MAX 2500

// Inter Quartile Range : Q3 - Q1

void sort(int *arr,int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

float median(int *arr,int n)
{
    return (n%2==0)?(arr[(n/2)-1]+arr[n/2])/2.0:arr[n/2];
}

int main(void)
{
    int n,arr[MAX],freq[MAX],set[MAX],temp[MAX],j=0,i=0,k=0,l=0;
    float q1,q2,q3,q4;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&freq[i]);
    }
    for(i=0;i<n;i++)
    {
        k = freq[i];
        while(k > 0)
        {
            set[l] = arr[i];
            l++;
            k--;
        }
    }
    sort(set,l);
    q1 = median(set,l/2);
    q2 = median(set,l);
    if(l % 2 == 0)
        i = l/2;
    else
        i = (l/2)+1;
    for(;i<l;i++,j++)
    {
        temp[j] = set[i];
    }
    q3 = median(temp,j);
    q4 = set[n-1];
    printf("%.1f\n",q3-q1);
    return 0;
}