#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define MAX 199

static int mat[MAX][MAX];
static int mat_rotate[MAX][MAX];

void rotate_matrix(int n)
{
	int k;
	for(int i=0;i<=(2*n-1)/2;i++)
	{
		k = abs(n-i-1);
		for(int j=0;j<k;j++)
		{
			mat_rotate[i][j] = '*';
		}
		int l = i, m = 0;
		for(int j=k;j<n;j++)
		{
			mat_rotate[i][j] = mat[l][m];
			l--;
			m++;
		}
	}
	for(int i=((2*n-1)/2)+1;i<2*n-1;i++)
	{
		k = abs(n-i-1);
		for(int j=0;j<k;j++)
		{
			mat_rotate[i][j] = '*';
		}
		int l = n-1;
		for(int j=k;j<n;j++)
		{
			mat_rotate[i][j] = mat[l][j];
			l--;
		}
	}
}

int main(void)
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            // if(i == n-1 && j == n-1)
            //     scanf("%c",&mat[i][j]);
            // else
            //     scanf(" %c ",&mat[i][j]);
			scanf("%d",&mat[i][j]); 
        }
    }
	rotate_matrix(n);
	for(int i=0;i<2*n-1;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(mat_rotate[i][j] == '*')
				printf("%c",mat_rotate[i][j]);
			// else if(i == n-1 && j == 0)
			// 	printf("%d ",mat_rotate[i][j]);
			else
				printf("%d ",mat_rotate[i][j]);
		}
		printf("\n");
	}
	return 0;
}
