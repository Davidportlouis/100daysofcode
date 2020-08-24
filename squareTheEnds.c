/* Function - squareTheEnds */
#include<stdio.h>
#define MAX 10

static int digits[MAX];
static int z=0;

void concat(char *s1,char *s2)
{
	int i = 0;
	while(s2[i] != '\0')
	{
		s1[z++] = s2[i++];
	}
}

int extract_digits(int n)
{
	int i=0;
	while(n != 0)
	{
		digits[i++] = n % 10;
		n /= 10;
	}
	return i;
}

int squareTheEnds(int x)
{

	char str[MAX],nums[MAX]="";
	int i,num;
	int n = extract_digits(x);
	digits[0] = digits[0] * digits[0];
	digits[n-1] = digits[n-1]*digits[n-1];
	for(i=n-1;i>=0;i--)
	{
		sprintf(str,"%d",digits[i]);
		concat(nums,str);
	}
	sscanf(nums,"%d",&num);
	return num;
}

int main(void)
{
	int n;
	scanf("%d",&n);
	printf("%d",squareTheEnds(n));
	return 0;
}
