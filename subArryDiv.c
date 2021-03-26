#include<stdio.h>

int main(void) {
    int n,d,m,i,j,s,ds;
    s = ds = 0;
    scanf("%d",&n);
    int choco[n];
    for(i=0;i<n;i++)
        scanf("%d",&choco[i]);
    scanf("%d %d",&d,&m);
    for(i=0; i<=n-m; i++) {
        for(j=i; j<i+m; j++) {
            ds += choco[j];
        }
        if(ds == d)
            s++;
        ds = 0;
    }
    printf("%d\n",s);
    return 0;
}
            
