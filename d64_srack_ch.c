#include<stdio.h>

int main(void)
{
    float cel,fah;
    scanf("%f",&cel);
    fah = ((cel * (9.0/5.0))+32.0);
    printf("%.2f\n",fah);
    return 0;
}