// Primorial number
#include<stdio.h>
#include<math.h>
#define MAX 47

int primality(int x)
{
	int i;
	for(i=2;i<=sqrt(x);i++)
	{
		if(x%i == 0)
			return 0;
	}
	return 1;
}

int main(void)
{
	int i,n;
	unsigned long long x=1;
	scanf("%d",&n);
	for(i=2;i<=MAX && n > 0;i++)
	{
		if(primality(i))
		{
			x *= i;
			n--;
		}
	}
	printf("%llu",x);
	return 0;
}
