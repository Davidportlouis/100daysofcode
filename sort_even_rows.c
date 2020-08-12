// Sort Rows by even digits count
#include<stdio.h>
#define MAX 50

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bsort(int *even,int *rows, int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(even[j] > even[j+1])
			{
				swap(&even[j],&even[j+1]);
				swap(&rows[j],&rows[j+1]);
			}
		}
	}
}

int main(void)
{
	int i,j,k,r,c,arr[MAX][MAX],even[MAX],rows[MAX];
	scanf("%d %d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
			if(arr[i][j] % 2 == 0)
				even[i]++;
		}
		rows[i] = i;
	}
	bsort(even,rows,r);
	for(i=0;i<r;i++)
	{
		k = rows[i];
		for(j=0;j<c;j++)
		{
			printf("%d ",arr[k][j]);
		}
		printf("\n");
	}
	return 0;
}



