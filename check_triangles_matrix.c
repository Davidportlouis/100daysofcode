// Check triangle pattern in top rows of matrix
#include<stdio.h>
#define MAX 50

int main(void)
{
	int n,i,j,k,flag=0,arr[50][50];
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<n/2+1;i++)
	{
		if(i == (n/2))
		{
			for(j=0;j<n;j++)
			{
				if(arr[i][j] == k)
					flag++;
			}
		}
		else if(arr[i][n/2-i] ==k && arr[i][n/2+i] == k)
			flag++;
	}
	if(flag == n + (n/2))
		printf("YES");
	else
		printf("NO");
	return 0;
}
	
