#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int *arr = (int*)malloc(1000000 * sizeof(int));
    int i=0,x;
    char ch;
    do
    {
        scanf("%d%c",&arr[i],&ch);
        i++;
    } while (ch!='\n');
    scanf("%d",&x);
    if(x == arr[0] || x == arr[i-1])
        printf("YES");
    else
        printf("NO");
    return 0;
}