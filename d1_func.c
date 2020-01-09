//Functions in C
//hackerrank C introduction #100daysofcode day-1

#include<stdio.h>

int max_of_four(int a,int b,int c,int d)
{
    if(a > b && a > c && a > d)
    {
        return a;
    }else if(b > c && b > d)
    {
        return b;
    }else if(c > d)
    {
        return c;
    }else
    {
        return d;
    }
    
}

int main(void)
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("%d",max_of_four(a,b,c,d));
    return 0;
}