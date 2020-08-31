/* Mirror & Water images - Quadrants */
#include<stdio.h>
#define MAX 50

int main(void)
{
    int i,j,r,c,r1,c1,k,mat[MAX][MAX];
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    r1 = r/2;c1 = c/2;
    /* copying mirror image to 1st quadrant */
    for(i=0;i<r1;i++)
    {
        for(j=c1,k=c1-1;j<c && k>=0;j++,k--)
        {
            mat[i][j] = mat[i][k];
        }
    }
    /* copying water image to 3rd quadrant */
    for(i=r1,k=r1-1;i<r && k>=0;i++,k--)
    {
        for(j=0;j<c1;j++)
        {
            mat[i][j] = mat[k][j];
        }
    }
    /* copying mirror image to 4th quadrant */
    for(i=r1;i<r;i++)
    {
        for(j=c1,k=c1-1;j<c && k>=0;j++,k--)
        {
            mat[i][j] = mat[i][k];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
