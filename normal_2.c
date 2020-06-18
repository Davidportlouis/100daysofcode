#include<stdio.h>
#include<math.h>

static double mu = 70.0, sigma = 10.0;

double sqroot(double x)
{
    double ans,temp=0;
    ans = x/2;
    while(temp != ans)
    {
        temp = ans;
        ans = (x/temp + temp)/2.0;
    }
    return ans;
}

double phi(double x)
{
    return 0.5 * (1 + erf((x-mu)/(sigma * sqroot(2))));
}

int main(void)
{
    printf("%0.3lf\n",(1-phi(80))*100);
    printf("%0.3lf\n",(1-phi(60))*100);
    printf("%0.3lf\n",phi(60)*100);
    return 0;
}