#include<stdio.h>
#define LIMIT 1000

void rotateLeftByOne(int *arr,int n)
{
    int temp = arr[0];
    for(int i=0;i<n-1;i++)
    {
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}

void rotateRightByOne(int *arr,int n)
{
    int temp = arr[0];
    for(int i=n-1;i>=0;i++)
    {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}

void rotate(int *arr,int steps,int n,char l)
{
    if(l == 'l')
        for(int i=0;i<steps;i++)
        {
            rotateLeftByOne(arr,n);
        }
    else if(l == 'r')
        {
            for(int i=0;i<steps;i++)
            {
                rotateRightByOne(arr,n);
            }
        }
}

void display(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

int main(void)
{
    char label;
    int n,arr[LIMIT],steps;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&steps);
    scanf(" %c",&label);
    rotate(arr,steps,n,label);
    display(arr,n);
    return 0;
}