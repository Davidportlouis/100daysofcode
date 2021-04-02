#include<stdio.h>
#define MAX 50

int search(int *arr,int n, int key){
    int i;
    for(i=0;i<n;i++){
        if(arr[i] == key)
            return i+1;
    }
    return -1;
}

int main(void) {
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=1;i<=n;i++)
        printf("%d\n",search(arr,n,search(arr, n, i)));
    return 0;
}