// Swap even
#include<stdio.h>
#define MAX 1000

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int get_even(int *arr,int n)
{
    int ct=0,i;
    for(i=0;i<n;i++)
    {
        if(arr[i] % 2 == 0)
            ct++;
    }
    return ct/2;
}

int main(void)
{
    int i,n,arr[MAX],e_ct,*one=0,*two=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    e_ct = get_even(arr,n);
    for(i=0;e_ct >= 0;i++)
    {
        if(one != 0 && two != 0)
        {
            swap( one,two);
            one = two = 0;
            e_ct--;
        }
        if(arr[i] % 2 == 0)
        {
            if(one == 0)
                one = &arr[i];
            else
                two = &arr[i];
        }
        if(e_ct == 0)
            break;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}