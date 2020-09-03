/* Sorted Columns Count */
#include<stdio.h>
#define MAX 50

int main(void)
{
    int i,j,r,c,ct=0,flag=0,mat[MAX][MAX];
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    /* Checking for sorted cols */
    for(j=0;j<c;j++)
    {
        flag = 0;
        for(i=0;i<r-1;i++)
        {
            if(mat[i][j] >= mat[i+1][j])
                flag++;
        }
        if(flag == c)
            ct++;
    }
    printf("%d",ct);
    return 0;
}
