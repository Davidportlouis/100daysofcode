#include<stdio.h>
#define MAX 500

static int res[MAX]={1};
static int res_size = 1;

void multiply(int x) {
    int i,val,carry=0;
    for(i=0;i<res_size;i++) {
            val = res[i] * x + carry;
            carry = val / 10;
            res[i] = val % 10;
    }
    while(carry) {
        res[res_size++] = carry % 10;
        carry = carry / 10;
    }
}

int main(void) {
    int x,i;
    scanf("%d",&x);
    for(i=2;i<=x;i++)
        multiply(i);
    for(int i=res_size-1;i>=0;i--)
        printf("%d",res[i]);
    return 0;
}
