#include<stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,ht=1,i;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            if(i%2==0)
                ht *= 2;
            else
                ht += 1;
        }
        printf("%d\n",ht);
    }
    return 0;
}
