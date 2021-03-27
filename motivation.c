#include<stdio.h>
#include<limits.h>
#define MAX 50000

int getBestMovie(int X,int N,int *S,int *R) {
    int max = INT_MIN;
    for(int i=0;i<N;i++) {
        if(S[i] <= X) {
            if(R[i] > max)
                max = R[i];
        }
    }
    return max;
}

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--) {
        int n,x;
        int s[MAX],r[MAX];
        scanf("%d %d",&n,&x);
        for(int i=0; i<n;i++) 
            scanf("%d %d",&s[i],&r[i]);
        printf("%d\n",getBestMovie(x,n,s,r));
    }
    return 0;
}
