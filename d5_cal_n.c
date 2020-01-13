#include<stdio.h>
#include<stdlib.h>

int find_n_th_term(int n,int a,int b,int c)
{
    int s[20];
    s[1] = a,s[2]=b,s[3]=c;
    for(int i=4;i<=n;i++)
    {
        s[i] = s[i-3] + s[i-2] + s[i-1];
    }
    return s[n];
}


int main(void)
{
    int n,a,b,c;
    scanf("%d %d %d %d",&n,&a,&b,&c);
    int ans = find_n_th_term(n,a,b,c);
    printf("%d",ans);
    return 0;
}