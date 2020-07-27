// Replace rows and columns
#include<stdio.h>
#include<ctype.h>
#define MAX 50

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
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			switch(tolower(ch))
			{
				case 'u': printf("%d ",mat[0][j]);
					  break;
				case 'd': printf("%d ",mat[r-1][j]);
					  break;
				case 'l': printf("%d ",mat[i][0]);
					  break;
				case 'r': printf("%d ",mat[i][c-1]);
					  break;
				default: printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	return 0;
}
