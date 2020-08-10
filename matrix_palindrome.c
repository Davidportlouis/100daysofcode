#include<stdio.h>
#define MAX 50

int check_palindrome(int arr[MAX][MAX],int r,int c)
{
    int i,j,k,flag=0;
    for(i=0,j=r-1;i<r && j>=0;i++,j--)
    {
        for(k=0;k<c;k++)
        {
            // printf("%d %d\n",arr[i][k],arr[j][k]);
            if(arr[i][k] == arr[j][k])
                flag++;
        }
    }
    for(i=0,j=c-1;i<c && j>=0;i++,j--)
    {
        for(k=0;k<r;k++)
        {
            if(arr[k][i] == arr[k][j])
                flag++;
        }
    }
    return flag == (2*r*c);
}

int main(void)
{
    int i,j,r,c,arr[MAX][MAX];
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    (check_palindrome(arr,r,c) != 0)? printf("YES") : printf("NO");
    return 0;
}