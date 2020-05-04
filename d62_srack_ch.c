#include<stdio.h>

int prime(int x)
{
    int flag = 1;
    for(int i=2;i<x-1;i++)
    {
        if(x % i == 0)
            flag = 0;
    }
    return flag;
}

int main(void)
{
    int num,flag=0;
    scanf("%d",&num);
    for(int i=1;i<num;i++)
    {
        for(int j=1;j<num;j++)
        {
            if((i+j == num) && (prime(i) && prime(j))){
                if(i == j)
                    flag += 2;
                flag++;
             }
        }
    }
    printf("%d\n",flag/2);
    return 0;
}