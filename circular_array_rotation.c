#include<stdio.h>

int main(void) {
    int n,k,q,q_idx,i;
    scanf("%d %d %d",&n,&k,&q);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<q;i++){
        scanf("%d",&q_idx);
        printf("%d\n", arr[(n - (k%n) + q_idx)%n])
    }
    return 0;
}