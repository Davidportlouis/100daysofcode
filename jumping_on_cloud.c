#include<stdio.h>


int main(void) {
    int c[25],n,k,i,e=100;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&c[i]);
    i=0;
    do{
        --e;
        i = (i+k)%n;
        if(c[i] == 1)
            e -= 2;
    }while(i!=0);
    printf("%d\n",e);
    return 0;
}