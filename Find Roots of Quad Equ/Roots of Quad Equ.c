/*Program To Find Roots Of quadratic equation*/

///////////// Header Files /////////////////
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

int main()
{
    double a,b,c,det,root1,root2,real,imaginary;

    printf("Enter Coefficients of a, b, c : \n");
    scanf("%lf %lf %lf,&a,&b,&c");
    det=b*b-4*a*c;
    if(det==0)
    {
        root1 = root2 = -b/(2*a);
        printf("root1 = %.2lf & root2 = %.2lf",root1,root2);
    }else if(det>0)
    {
        root1 = (-b+sqrt(det))/(2*a);
        root2 = (-b-sqrt(det))/(2*a);
        printf("root1 = %.2lf and root2 = %.2lf",root1 , root2);
    }else
    {
        real=-b/(2*a);
        imaginary=sqrt(-det)/(2*a);
        printf("root1 =%.2lf+i%.2lf & %.2lf+i%.2lf",real,imaginary,real,imaginary);
    }
    getch();
}
/*
**********************************************************************************
**********************************************************************************
**Title:Hello World                                                             **
**URL: https://github.com/Davidportlouis/Source-Code-For-Simple-C-Program       **
**Date_start: 20/08/2018                                                        **
**Author: David Port Louis                                                      **
**My Special Thanks To Bucky Roberts I Learned C From his Tutorial Thanks Bucky!**
**********************************************************************************
**********************************************************************************
*/
