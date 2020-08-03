#include<stdio.h>
#define MAX 10

int get_prefix(char *s)
{
	int p;
	sscanf(s,"%d",&p);
	return p;
}

int main(void)
{
	int i,n,k,x,l,s[MAX],r[MAX],flag=0,max=0;
	scanf("%s%n %d",s,&n,&k);
	for(i=0;i<n;i++)
	{
		r[i] = s[i];
		x = get_integer(r);
		if(x%k == 0 && i >= max)
		{
			max = i;
			l = x;
			flag++;
		}
	}
	if(flag == 0)
		printf("-1");
	else
		printf("%d",l);
	return 0;
}

