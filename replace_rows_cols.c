// Replace rows and columns
#include<stdio.h>
#include<ctype.h>
#define MAX 50


void modify(int mat[MAX][MAX], int r,int c,char ch)
{
	int i,j,k,tmp[MAX];
	if(tolower(ch) == 'd')
	{
		for(k=0;k<c;k++)
		{
			tmp[k] = mat[r-1][k];
		}
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				mat[i][j] = tmp[j];
			}
		}
	}
	else if(tolower(ch) == 'u')
	{
		for(k=0;k<c;k++)
		{
			tmp[k] = mat[0][k];
		}
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				mat[i][j] = tmp[j];
			}
		}
	}
	else if(tolower(ch) == 'r')
	{
		for(k=0;k<r;k++)
		{
			tmp[k] = mat[k][c-1];
		}
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				mat[i][j] = tmp[i];
			}
		}
	}
	else if(tolower(ch) == 'l')
	{
		for(k=0;k<r;k++)
		{
			tmp[k] = mat[k][0];
		}
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				mat[i][j] = tmp[i];
			}
		}
	}
}

int main(void)
{
	int mat[MAX][MAX],r,c,i,j;
	char ch;
	scanf("%d %d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	scanf(" %c",&ch);
	modify(mat,r,c,ch);
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
