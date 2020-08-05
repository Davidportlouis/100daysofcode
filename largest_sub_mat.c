#include<stdio.h>
#define MAX 50

int main(void)
{
    int r,c,i,j,x,min_r,min_c,max_r,max_c,arr[MAX][MAX];
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    scanf("%d",&x);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(arr[i][j] == x)
            {
                min_r = max_r = i;
                min_c = max_c = j;
            }
        }
    }
    while(min_r>0 && max_r<r-1 && min_c>0 && max_c<c-1)
    {
        min_r--;
        max_r++;
        min_c--;
        max_c++;
    }
    for(i=min_r;i<=max_r;i++)
    {
        for(j=min_c;j<=max_c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}