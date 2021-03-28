#include<stdio.h>
#include<limits.h>
#define TYPES 6

int getMax(int *arr, int n) {
    int max=INT_MIN,i;
    for(i=1;i<n;i++) {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

int search(int *arr, int n, int key) {
    int i;
    for(i=1;i<n;i++) {
        if(arr[i] == key)
            return i;
    }
    return -1;
}

int getFreq(int *arr, int n) {
    int max,i,bspotting[TYPES] = {0};
    for(i=0;i<n;i++)
        bspotting[arr[i]]++;
    return search(bspotting, TYPES, getMax(bspotting, TYPES));
}


int main(void) {
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) 
        scanf("%d",&arr[i]);
    printf("%d\n", getFreq(arr, n));
    return 0;
}

