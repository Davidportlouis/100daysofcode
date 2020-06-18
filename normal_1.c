#include<stdio.h>
#include<math.h>
#define e 2.718281828
#define pi 3.14159265358979

static double mu = 20.0,sigma = 2.0;

double sqroot(int x)
{
    double temp,ans;
    ans = x/2;
    temp = 0;
    while(ans != temp)
    {
        temp = ans;
        ans = (x/temp + temp)/2;
    }
    return ans;
}

double phi(double x)
{
    return 0.5*(1 + erf((x-mu)/(sigma*sqroot(2))));
}

int main(void)
{
    double dis_1,dis_2;
    dis_1 = phi(19.5);
    dis_2 = phi(22.0) - phi(20.0);
    printf("%0.2lf\n",dis_1);
    printf("%0.2lf\n",dis_2);
    return 0;
}