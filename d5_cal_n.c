#include<stdio.h>
#include<math.h>

int find_nth_term(int a,int b,int c,int n)
{
    
}

int main(void)
{
    int n,a,b,c;
    scanf("%d %d %d %d",&n,&a,&b,&c);
    int ans = find_nth_term(a,b,c,n);
    printf("%d",ans);
    return 0;
}