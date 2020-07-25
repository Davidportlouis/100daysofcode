#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAX 100

int gcd(int a,int b)
{
	if(b == 0)
		return a;
	return gcd(b,a%b);
}

int get_digit(char c)
{
	return c - '0';
}

int check_gcd(char *s)
{
	int n,a,b;
	n = strlen(s);
	a = (int) get_digit(s[0])*pow(10.0,1.0) + get_digit(s[1])*pow(10.0,0.0);  
	b = (int) get_digit(s[n-2])*pow(10.0,1.0) + get_digit(s[n-1])*pow(10.0,0.0);
	//printf("%d ",gcd(a,b));
	return (gcd(a,b) > 1)?  1 : 0;
}

	

int main(void)
{
	int n,i,ct=0;
	char s[MAX][MAX];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
	}
	for(i=0;i<n;i++)
	{
		if (check_gcd(s[i])){
		       printf("%s ",s[i]);
	       	       ct++;
		}	       
	}
	if(ct == 0)
		printf("-1");
	return 0;
}
