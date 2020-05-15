#include<stdio.h>
#define LIMIT 1000


int extract_first(int x)
{
    int rem;
    while(x!=0)
    {
        rem = x % 10;
        x /= 10;
    }
    return rem;
}

void bsort(int *arr,int n)
{

  int temp;
  for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if((extract_first(arr[j])) > (extract_first(arr[j+1])))
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            if((extract_first(arr[j])) == (extract_first(arr[j+1])))
            {
                if(arr[j] < arr[j+1])
                {
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }      
    }
  for(int i=n-1;i>=0;i--)
  {
      printf("%d",arr[i]);
  }
}

int main(void)
{
    int n,arr[LIMIT];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    bsort(arr,n);
}