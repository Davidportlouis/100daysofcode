#include<stdio.h>
#include<math.h>

int main(void) {
    int n,init=5,i,cum=0,lk;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        cum += floor(init/2);
        init = floor(init/2) * 3;
    }
    printf("%d\n",cum);
    return 0;
}