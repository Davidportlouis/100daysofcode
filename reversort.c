/* compute the cost of performing reversort 
   on the given array
*/
#include<stdio.h>
#include<limits.h>
#define MAX 100

void reverse(int *arr, int s, int e) {
    int tmp;
    for(int i=s,j=e;i<j; i++,j--) {
        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
}

int minIdx(int *arr, int s, int e) {
    int i,mVal,mIdx;
    mVal = INT_MAX, mIdx = 0;
    for(i=s;i<=e;i++) {
        if(arr[i] < mVal){
            mVal = arr[i];
            mIdx = i;
        }
    }
    return mIdx;
}

int isSorted(int *arr, int n) {
    int i;
    for(i=0;i<n-1;i++) {
        if(arr[i] > arr[i+1])
            return 0;
    }
    return 1;
}

int reverSort(int *arr, int n) {
    int cost,i,j;
    cost = 0;
    for(i=0;i<n;i++) {
        j = minIdx(arr,i,n);
        reverse(arr, i, j);
        cost += (j-i+1);
        // printf("%d ",cost);
    }
    return cost;
}

int main(void) {
    int t,arr[MAX],n,i;
    scanf("%d",&t);
    while(t--) {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        printf("%d\n", reverSort(arr, n-1));
    }
    return 0;
}