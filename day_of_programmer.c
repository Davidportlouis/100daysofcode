#include<stdio.h>
#define JUL_MIN 1700
#define JUL_MAX 1917
#define TRANS_YEAR 1918
#define GRE_MIN 1919
#define GRE_MAX 2700
#define PROGDAYS 256

int main(void) {
    int year;
    int m_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days=0,day,flag=0,i,date;
    scanf("%d",&year);
    if(year >= JUL_MIN && year <= JUL_MAX) {
        for(i=1;i<=12;i++) {
            if(i==2 && (year % 4 == 0))
                day = 29;
            else if(i==2 && (year % 4 != 0))
                day = 28;
            else
                day = m_days[i-1];
            if(days + day > PROGDAYS) {
                flag=1;
                break;
            }
            else
                days += day;
        }
    }else if(year == TRANS_YEAR) {
        for(i=1;i<=12;i++) {
            if(i==2)
                day = 15;
            else
                day = m_days[i-1];
            if(days + day > PROGDAYS) {
                flag=1;
                break;
            }else
                days += day;
        }
    }else if(year >= GRE_MIN && year <= GRE_MAX) {
        for(i=1;i<=12;i++) {
            if(i==2 && ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 !=0))))
                day = 29;
            else if(i == 2)
                day = 28;
            else
                day = m_days[i-1];
            if(days + day > PROGDAYS) {
                flag = 1;
                break;
            }else
                days += day;
        }
    }
    if(flag)
        date = PROGDAYS - days;
    if(i >= 10)
        printf("%d.%d.%d\n",date,i,year);
    else
        printf("%d.0%d.%d\n",date,i,year);
    return 0;
}
