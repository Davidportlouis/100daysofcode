#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int *arr = malloc(10000 * sizeof(int)),i=0,x,flag=0;
    char ch;
    do
    {
        scanf("%d%c",&arr[i],&ch);
        i++;
    }while(ch != '\n');
    scanf("%d",&x);
    for(int j=0;j<i;j++)
    {
        if(arr[i] == x)
        {
            flag = 1;
            break;
        }else if (arr[0] == arr[j-1])
        {
            flag = 1;
            break;
        }
        
    }
    if(flag == 1)
        printf("YES");
    else
        printf("NO");
    return 0;
}