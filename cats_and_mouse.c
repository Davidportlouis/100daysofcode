#include<stdio.h>
#include<math.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--) {
        int x,y,z;
        scanf("%d %d %d",&x,&y,&z);
        if(abs(z-x) == abs(z-y))
            printf("Mouse C\n");
        else if(abs(z-x) < abs(z-y))
            printf("Cat A\n");
        else
            printf("Cat B\n");
    }
    return 0;
}