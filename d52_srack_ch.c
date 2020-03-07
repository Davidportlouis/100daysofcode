#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int unique(int m,int n)
{
    int count = 0;
    for(int i=m;i<n;i++)
    {
        int num = i;
        bool visit[10] = {false};
        while(num)
        {
            if(visit[num%10])
                break;
            visit[num%10] = true;
            num /= 10;
        }
        if(num == 0)
            count++;
    }
    return count;
}

int main(void)
{
    int len;
    scanf("%d",&len);
    double m = pow(10.0,(double)len-1);
    double n = pow(10.0,(double)len)-1.0;
    printf("%d",unique(m,n));
    return 0;
}