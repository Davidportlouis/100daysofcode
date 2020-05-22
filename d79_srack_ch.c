// Seconds to days:hrs:mins:secs
#include<stdio.h>

int main(void)
{
    int s,days,hrs,mins;
    scanf("%d",&s);
    days = s / (24 * 60 * 60);
    s %= (24 * 60 * 60);
    hrs = s / (60 * 60);
    s %= (60 * 60);
    mins = s / 60;
    s %= 60;
    printf("%dD ",days);
    (hrs > 10)? printf("%d:",hrs) : printf("0%d:",hrs);
    (mins > 10)? printf("%d:",mins) : printf("0%d:",mins);
    (s > 10)? printf("%d",s) : printf("0%d",s);
    return 0;
}