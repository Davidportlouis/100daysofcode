#include<stdio.h>
#define MAX 1000
#define T_SIZE 5
#define MAX_NEG 3

int main(void)
{
	int i,n,pos,neg,teams,arr[MAX];
	pos = neg = teams = 0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		(arr[i] > 0)? pos++ : neg++;
	}
	while(pos > 0 || neg > 0)
	{
		teams += 1;
		for(i=0;i<T_SIZE;i++)
		{
			(i < MAX_NEG && neg > 0)? neg-- : pos--;
		}
	}
	printf("%d",teams);
	return 0;
}
