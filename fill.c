#include<stdio.h>
#include<string.h>
#define MAXLEN 1500

static int dash[MAXLEN];

int getLine()
{
	char x,c;
	int i = 0;
	while((c = getchar()) != '\n')
	{
		if(c == '_' && x == '_')
			dash[i]++;
		if(c == '_' && x != '_')
		{
			i++;
			dash[i] = 0;
			dash[i]++;
		}
		x = c;
	}
	return i;
}

int main(void)
{
	int ans[MAXLEN],n,i,xt,ct=0;
	char str[MAXLEN][MAXLEN];
	xt = getLine();
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",str[i]);
	}
	for(int i=0;i<n;i++)
	{
		ans[i] = strlen(str[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<=xt;j++)
		{
			if(ans[i] != 0 && dash[j] != 0)
			{
			if(ans[i] == dash[j]){
				ct++;
				dash[j] = 0;
				ans[i] = 0;
			}
			}
		}
	}
	printf("%d\n",ct);
	return 0;
}
