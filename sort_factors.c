#include<stdio.h>
#define MAX 10000

static int facts[MAX];
static int counts[MAX];

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bsort(int *facts,int *counts,int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(counts[j] == counts[j+1])
			{
				if(facts[j] < facts[j+1])
				{
					swap(&counts[j],&counts[j+1]);
					swap(&facts[j],&facts[j+1]);
				}
			}
			if(counts[j] < counts[j+1])
			{
				swap(&counts[j],&counts[j+1]);
				swap(&facts[j],&facts[j+1]);
			}
		}
	}
}

int factors(int n,int store)
{
	int i,ct=0;
	for(i=1;i<=n;i++)
	{
		if(n%i == 0)
		{
			if(store)
				facts[ct] = i;
			ct++;
		}
	}
	return ct;
}

int main(void)
{
	int i,n,ct;
	scanf("%d",&n);
	ct = factors(n,1);
	for(i=0;i<ct;i++)
	{
		counts[i] = factors(facts[i],0);
	}
	bsort(facts,counts,ct);
	for(i=0;i<ct;i++)
	{
		printf("%d ",facts[i]);
	}
	return 0;
}

