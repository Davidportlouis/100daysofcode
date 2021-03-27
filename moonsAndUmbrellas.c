#include<stdio.h>
#define MAX 1000

int stringLen(char *str) {
    int i=0;
    while(str[i] != '\0')
        i++;
    return i;
}

int moonsAndUmbrellasCost(char *str, int n, int x, int y) {
    int cost = 0;
    int i;
    char prev = 'I';
    for(i=0; i<n; i++) {
        if(str[i] == 'C'){
            if(prev == 'J')
                cost += y;
            prev = 'C';
        }else if(str[i] == 'J') {
            if(prev == 'C')
                cost += x;
            prev = 'J';
        }
    }
    return cost;
}

int main(void) {
    int t,k=0;
    scanf("%d",&t);
    while(k < t) {
        int x,y,n;
        char str[MAX];
        scanf("%d %d %s",&x,&y,str);
        n = stringLen(str);
        printf("Case #%d: %d\n", k+1,moonsAndUmbrellasCost(str, n, x, y));
        k++;
    }
    return 0;
}