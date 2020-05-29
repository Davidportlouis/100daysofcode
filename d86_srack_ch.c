#include<stdio.h>
#include<math.h>

int main(void)
{
    double a,area;
    scanf("%lf",&a);
    area = (sqrt(3.0)/4.0)*pow(a,2);
    printf("%.2f",area);
    return 0;
}