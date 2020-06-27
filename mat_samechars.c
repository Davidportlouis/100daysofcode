#include<stdio.h>
#include<stdlib.h>

int checkSameChar(char **arr,int n)
{
    int count = 0,all=0;
    char dia_elt = arr[0][0];
    char oth_elt = arr[0][1];
    for(int i=0;i<n;i++)
    {
       if(arr[i][i] == dia_elt)
            count++;
    }
    for(int i=0,j=n-1;i<n && j>=0;i++)
    {
        if(arr[i][j] == dia_elt){
            count++;
        }
        j--;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {

            if(arr[i][i] == oth_elt)
                all = 1;
            if (arr[i][j] == oth_elt)
                count++;
        }
    }
    if(all == 1)
        return 1;
    if(n % 2 == 0)
        return count >= n*n;
    return count >= n*n+1;
}

int main(void)
{
    char **arr;
    int n;
    scanf("%d",&n);
    arr = (char **)malloc(n * sizeof(char*));
    for(int i=0;i<n;i++)
    {
        arr[i] = (char *)malloc(n * sizeof(char));
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i == n-1 && j == n-1)
                scanf("%c",&arr[i][j]);
            else
                scanf(" %c ",&arr[i][j]); 
        }
    }
    (checkSameChar(arr,n) == 1)?printf("YES"):printf("NO");
    return 0;
}