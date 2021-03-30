#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int d1,d2,m1,m2,y1,y2;
    scanf("%d %d %d",&d1,&m1,&y1);
    scanf("%d %d %d",&d2,&m2,&y2);
    if(y1 <= y2) {
        printf("0\n");
    }else if(y1 == y2){
        if(m1 < m2){
            printf("0\n");
        }else if(m1 == m2) {
            if(d1 <= d2)
                printf("0\n");
            else
                printf("%d\n",abs(d1-d2)*15);
        }else
            printf("%d\n",abs(m1-m2)*500);
    }else if(y1 > y2)
        printf("10000\n");
    return 0;
}
