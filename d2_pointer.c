// Pointer in C
//hackerank C introduction #100daysofcode day-2

#include<stdio.h>
#include<stdlib.h>

void update(int *a,int *b)
{
    int o,io;
    o = *a + *b;
    io = abs(*a - *b);
    *a = o;
    *b = io;
}

int main(void)
{
    int a,b,*c,*d;
    scanf("%d %d",&a,&b);
    c = &a;
    d = &b;
    update(c,d);
    printf("%d\n%d\n",a,b);
    return 0;
}