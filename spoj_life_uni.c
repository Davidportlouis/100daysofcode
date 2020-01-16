#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int arr[100],i=0,num;
    while(1)
    {
        scanf("%d",&num);
        if(num!=42)
        {
            arr[i] = num;
            i++;
        }else
            break;
    }
    for(int j=0;j<i;j++)
    {
        printf("%d\n",arr[j]);
    }
    return 0;
}