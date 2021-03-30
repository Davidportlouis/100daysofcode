#include<stdio.h>
#define MAX 1000
#define INST_MAX 1000000

int eshop(int *prices, int n, int b){
    int max=-1,i;
    for(i=0;i<n;i++){
        if(prices[i] <= b && prices[i] > max)
            max = prices[i];
    }
    return max;
}

int main(void) {
    int n,x,m,b,i,j,k=0,kbd[MAX],usb[MAX],prices[INST_MAX];
    scanf("%d %d %d",&b,&n,&m);
    for(i=0;i<n;i++)
        scanf("%d",&kbd[i]);
    for(i=0;i<m;i++)
        scanf("%d",&usb[i]);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            prices[k++] = kbd[i] + usb[j];
        }
    }
    x = eshop(prices, k, b);
    (x != -1)? printf("%d\n",x) : printf("-1\n");
    return 0;
}

