/* Day 0: 25-03-2021
   hackerrank algorithms (Implementation)
*/
#include<stdio.h>

int main(void) {
    int n,m,flag,i,j,c=0;
    scanf("%d %d",&n,&m);
    int a[n],b[m];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<m;i++)
        scanf("%d",&b[i]);
    for(i=a[n-1]; i<=b[0]; i++) {
        flag = 1;
        for(j=0;j<n;j++) {
            if(i % a[j] == 0)
                continue; 
            else
                flag = 0;
        }
        for(j=0;j<m;j++) {
            if((b[j] % i == 0) && flag == 1)
                continue;
            else
                flag = 0;
        }
        if(flag) {
            c++;
            printf("%d ",i);
        }
    }
    printf("%d\n",c);
    return 0;
}
