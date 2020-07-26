#include<stdio.h>
#include<math.h>

static int bits[32];
static int copy[32];

int bits2int(int *bits,int n)
{
	int num = 0;
	for(int i=0,j=n-1;i<n && j>=0;i++,j--)
	{
		num += bits[j] * pow(2.0,i);
	}
	return num;
}


int toggle_bits(int n)
{
	int i,j,l,ct=0,x,max=0;
	for(i=0;i<n;i++)
	{
		if(bits[i] == 1)
			ct++;
	}
	if(ct == n)
		return bits2int(bits,n);
	else
	{
		for(i=0;i<n;i++)
		{
			for(l=n-1,j=0;l>0;l--,j++)
			{
			copy[j] = bits[l];
			}
			copy[i] = (copy[i] == 1)? 0 : 1;
			x = bits2int(copy, n);
			if(x > max)
				max = x;
		}
	}
	return max;
}

int int2bits(int x)
{
	int i=0;
	while(x != 0)
	{
		bits[i] = x % 2;
		x /= 2;
		i++;
	}
	return i;
}


int main(void)
{
	unsigned long x;
	int n;
	scanf("%lu",&x);
	n = int2bits(x);
	printf("%d",toggle_bits(n));		
	return 0;
}

