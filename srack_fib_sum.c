#include<stdio.h>

void get_expiry(int month,int year,int expiry)
{
    for(int i=0;i<=expiry;i++)
    {
        if(month > 12)
        {
            month = 01;
            year++;
        }else{
            month++;
        }
    }
    if(month < 10)
        printf("0%d-%d\n",month,year);
    else
        printf("%d-%d\n",month,year);
}

int main(void)
{
    int month,year,expiry;
    scanf("%d-%d",&month,&year);
    scanf("%d",&expiry);
    get_expiry(month,year,expiry);
    return 0;
}