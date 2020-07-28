#include<stdio.h>
#define MAX 100

int main(void)
{
    int x,y,i,j,r,c;
    int arr[MAX][MAX],m1[MAX],m2[MAX];
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    scanf("%d %d",&x,&y);
    for(i=0;i<r+c-1;i++)
        m1[i] = m2[i] = 0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(arr[i][j] == x || arr[i][j] == y)
            {
            if(m1[i+j] == 1 || m2[j-i+r-1] == 1){   
                printf("YES");
                return 0; 
            }
            else{
                m1[i+j] = 1;
                m2[j-i+r-1] = 1;
            }
            }
        }
    }
    printf("NO");
    return 0;
}