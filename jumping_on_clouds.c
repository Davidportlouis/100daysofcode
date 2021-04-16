/* jumping cloud: original */
#include<stdio.h>
#define MAX 100

int main(void) {
    int n, c[MAX], i;
    int step = 0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&c[i]);
    for(i=0;i<n;) {
        if(c[i + 2] != 1 && i+2 < n) {
            i += 2;
            step++;
            // printf("%d %d\n", i, step);
        }
        else if(c[i + 1] != 1 && i+1 < n) {
            i++;
            step++;
            // printf("%d %d\n", i, step);
        }else
            break;
    }
    printf("%d\n",step);
    return 0;
}

