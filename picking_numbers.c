#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void bsort(int *arr, int n) {
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1])
                swap(&arr[j],&arr[j+1]);
        }
    }
}

int checkNums(int *arr, int n, int x) {
    int flag=0;
    for(int i=0;i<n;i++) {
        if(abs(arr[i] - x) == 1 || abs(arr[i] - x) == 0)
            flag++;
    }
    return flag == n;
}

void disp(int *arr, int n) {
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
}

int main(void) {
    int n,i,k,j,max=0;
    scanf("%d",&n);
    int arr[n],aux[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    bsort(arr,n);
    for(i=0;i<n-1;i++) {
        k = 0;
        aux[k++] = arr[i];
        for(j=i+1;j<n;j++) {
            if(checkNums(aux,k, arr[j])){
                aux[k++] = arr[j];
            }
            else
                break;
        }
        disp(aux,k);
        max = (max < k)? k : max;
    }
    printf("%d\n",max);
    return 0;
}

