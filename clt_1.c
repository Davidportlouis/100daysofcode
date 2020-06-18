#include<stdio.h>
#include<math.h>

double sqrt(double x)
{
    double ans,temp=0;
    ans = x/2.0;
    while(temp != ans){
        temp = ans;
        ans = (x/temp + temp)/2.0;
    }
    return ans;
}