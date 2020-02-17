#include<stdio.h>
// #include<math.h>

int main(void)
{
    float m,n,num;
    int x;
    scanf("%f %f %d",&m,&n,&x);
    num = m/n;
    printf("%.*f",x,num);
    return 0;
}