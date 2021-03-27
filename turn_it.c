#include<stdio.h>
#include<math.h>
#define VELO(u,a,s) sqrt((double)(u*u) - 2*a*s)

int main(void) {
   int t;
   scanf("%d",&t);
   while(t--) {
      int u,v,a,s;
      scanf("%d %d %d %d",&u,&v,&a,&s);
      (VELO(u,a,s) > v)? printf("No\n") : printf("Yes\n");
   }
  return 0;
} 
