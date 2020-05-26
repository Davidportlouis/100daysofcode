#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int arr[100],n,total=0,i=1,j=0;
    char ops[99];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%s",ops);
    total = arr[0];
    while(i<n && j<n-1)
    {
       switch(ops[j])
       {
           case '+': total += arr[i];break;
           case '-': total -= arr[i];break;
           case '*': total *= arr[i];break;
           case '/': total /= arr[i];break;
       }
       i++;
       j++;
    }
    printf("%d",total);
    return 0;
}