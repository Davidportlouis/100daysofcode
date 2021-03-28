/* bill division */
#include<stdio.h>

int bonAppetit(int *arr, int n, int k, int b) {
    int i,b_actual=0;
    for(i=0;i<n;i++) {
        if(i != k)
            b_actual += arr[i];
    }
    return b_actual/2;
}

int main(void) {
    int n,k,i,x,b;
    scanf("%d %d",&n,&k);
    int bill[n];
    for(i=0;i<n;i++)
        scanf("%d",&bill[i]);
    scanf("%d",&b);
    ((x = bonAppetit(bill,n,k,b)) == b)? printf("Bon Appetit\n") : printf("%d\n",b-x);
    return 0;
}

