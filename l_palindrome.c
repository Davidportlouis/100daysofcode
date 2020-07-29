#include<stdio.h>
#define MAX 50

int check_palindrome(char *s,int n)
{
	int i,j,flag=0;
	for(i=0,j=n-1;i<n&&j>=0;i++,j--)
	{
		if(s[i] == s[j])
			flag++;
	}
	return flag==n;
}

int main(void)
{
	char s[MAX][MAX];
	char s1[MAX*MAX];
	int n,i,j,k,l;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			 if(i == n-1 && j == n-1)
                scanf("%c",&s[i][j]);
             else
                scanf(" %c ",&s[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		k = 0;
		for(j=0;j<n-i;j++)
		{
			s1[k] = s[j][i];
			k++;
		}
		j--;
		for(l=i+1;l<n;l++)
		{
			s1[k] = s[j][l];
			k++;
		}
		s1[k] = '\0';
		(check_palindrome(s1,k) == 1)? printf("%s\n",s1) : printf("");
	}

	return 0;
}
