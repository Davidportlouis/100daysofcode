#include<stdio.h>
#define MAX 101

int main(void) {
    int i,n,socks[MAX]={0},x,n_pairs=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        socks[x]++;
    }
    for(i=1;i<MAX;i++){
        if((socks[i]-1) % 2 == 0)
            n_pairs += (socks[i]-1) / 2;
        else if(socks[i] % 2 == 0)
            n_pairs += socks[i] / 2;
    }
    printf("%d\n",n_pairs);
    return 0;
}