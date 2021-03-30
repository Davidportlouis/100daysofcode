#include<stdio.h>
#include<math.h>
#define MAX 100

int reverse(int n) {
    int nos[MAX],k=0,i,sum=0,j;
    while(n != 0) {
        nos[k++] = n % 10;
        n /= 10;
    }
    for(i=0,j=k-1;i<k;j--,i++)
        sum += nos[j] * pow(10.0, (double)i);
    return sum;
}

int main(void) {
    int i,j,k,ct=0;
    scanf("%d %d %d",&i,&j,&k);
    for(int x=i;x<=j;x++) {
        if(abs(x - reverse(x)) % k == 0)
            ct++;
    }
    printf("%d\n",ct);
    return 0;
}