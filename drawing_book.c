#include<stdio.h>

int main(void) {
    int n,p,i,p_t,j,fg;
    scanf("%d %d",&n,&p);
    // from front
    for(i=0,p_t=1;i<n;) {
        if(p <= p_t) {
            break;
        }
        p_t+=2;
        i++;
    }
    // from rear
    for(j=0,p_t=n;j<n;){
        fg=1;
        if(n % 2 == 0 && j == 0) {
            if(p_t == p)
                break;
            p_t-=1;
            fg=0;
        }else if(p == p_t-1 || p == p_t) {
            break;
        }
        if(fg)
            p_t-=2;
        j++;
    }
    (i < j)? printf("%d\n",i): printf("%d\n",j);
    return 0;
}
