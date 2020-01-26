#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int magicSquare(int n)
{
    int msquare[n][n];
    memset(msquare,0,sizeof(msquare));
    int i = n/2;
    int j = n-1;
    for(int k=1;k<=n*n;)
    {
        if(i==-1 && j==n)
        {
            j=n-2;
            i=0;
        }else
        {
            if(j==n)
                j=0;
            if(i<0)
                i = n -1;
        }
        if(msquare[i][j])
        {
            j-=2;
            i++;
            continue;
        }else
        {
            msquare[i][j] = k++;
        }
        j++;
        i--;
    }
    printf("Magic Square for n = %d\n",n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",msquare[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int main(void)
{
    int n;
    scanf("%d",&n);
    magicSquare(n);
    return 0;
}