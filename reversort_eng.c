# Passed Small Input Set - 7pts
#include<stdio.h>
#include<limits.h>
#define MAX 100

static int flag = 1;
static int p[MAX];

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

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void printArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ",a[i]);
    printf("\n");
}

void heapPermutation(int a[], int size, int n, int c)
{
    if (size == 1) {
        int b[MAX];
        for(int i=0;i<n;i++)
            b[i] = a[i];
        int x = reverSort(b, n-1);
        if(x == c) {
            for(int i=0;i<n;i++)
                p[i] = a[i];
            flag = 0;
        }
        return ;
    }
 
    for (int i = 0; i < size; i++) {
        heapPermutation(a, size - 1, n, c);
        if (size % 2 == 1)
            swap(&a[0], &a[size - 1]);
        else
            swap(&a[i], &a[size - 1]);
    }
}

int main(void) {
    int t,arr[MAX],n,i,c,j=0;
    scanf("%d",&t);
    while(j<t) {
        flag = 1;
        scanf("%d %d",&n,&c);
        for(int i=1;i<=n;i++){
            arr[i-1] = i;
            p[i-1] = 0;
        }
        heapPermutation(arr, n, n, c);
        printf("Case #%d: ",j+1);
        if(flag)
            printf("IMPOSSIBLE\n");
        else
            printArr(p, n);
        j++;
    }
    return 0;
}
