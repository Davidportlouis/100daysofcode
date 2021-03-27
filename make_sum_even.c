#include<stdio.h>
#define MAX 100000

int sum(int *arr, int n) {
    int sum = 0;
    for(int i=0;i<n;i++) {
        sum += arr[i];
    }
    return sum;
}

int check_2(int *arr, int n) {
    for(int i=0; i<n; i++) {
        if(arr[i] == 2)
            return 1;
    }
    return 0;
}

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--) {
        int arr[MAX],n;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        if(sum(arr,n) % 2 == 0)
            printf("0\n");
        else if(check_2(arr,n))
            printf("1\n");
        else
            printf("-1\n");
    }
    return 0;
}