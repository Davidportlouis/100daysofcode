#include<stdio.h>

int main(void) {
    int steps, i, sea_lvl=0,v_ct=0;
    scanf("%d",&steps);
    char path[steps];
    for(i=0;i<steps;i++)
        scanf("%c",&path[i]);
    for(i=0;i<steps;i++) {
        if(path[i] == 'U')
            sea_lvl++;
        else if(path[i] == 'D') {
            if(sea_lvl == 0)
                v_ct++;
            sea_lvl--;
        }
    }
    printf("%d\n",v_ct);
    return 0;
}
