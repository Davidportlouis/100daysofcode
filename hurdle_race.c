#include<stdio.h>
#include<limits.h>
#define MAX 100

int max(int *arr, int n) {
    int max = INT_MIN,i;
    for(i=0;i<n;i++) {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main(void) {
    int i,n,k,arr[MAX],x;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    ((x = max(arr,n) - k) <= 0)? printf("0\n") : printf("%d\n",x);
    return 0;
}