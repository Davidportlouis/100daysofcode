//Sum and Difference of two numbers
//hackerrank C introduction #100daysofcode day-1

#include<stdio.h>

int main(void)
{
    int a,b;
    float c,d;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    printf("%d %d\n",(a+b),(a-b));
    printf("%.1f %.1f\n",(c+d),(c-d));
    return 0;
}