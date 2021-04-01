#include<stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k,i,c=0;
        scanf("%d %d",&n,&k);
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++){
            if(a[i] <= 0)
                c++;
        }
        (c < k)? printf("YES\n") : printf("NO\n");
    }    
    return 0;
}