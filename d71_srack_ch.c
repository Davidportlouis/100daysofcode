#include<stdio.h>

int main(void)
{
    int arr[50][50],r,c,k,flag=0,c_flag=0;
    scanf("%d %d %d",&r,&c,&k);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i == 0 || i == r-1)
            {
                if(arr[i][j] == k)
                    flag++;
            }
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(j == 0 || j == c-1)
            {
                if(arr[i][j] == k)
                    c_flag++;
            }
        }
    }
    // printf("%d",c_flag);
    if(flag == 2*c && c_flag == 2*r)
        printf("YES");
    else
        printf("NO");
    return 0;
}