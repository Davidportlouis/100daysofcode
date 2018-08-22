/*Program To Find Factorial Of Integer
  using function factorial() */

///////////// Header Files /////////////////
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

int factorial(int x);

int main()
{
    int a;
    printf("Enter Any Integer : ");
    scanf("%d",&a);
    system("cls");
    printf("The Factorial of %d is %d",a,factorial(a));
    getch();
}

int factorial(int x) //user-created function
{
    if(x==1)
    {
        return 1;
    }else
    {
        return x*factorial(x-1); //recursion
    }
}
/*
**********************************************************************************
**********************************************************************************
**Title:Find Factorial of Integer                                               **
**URL: https://github.com/Davidportlouis/Source-Code-For-Simple-C-Program       **
**Date_start: 22/08/2018                                                        **
**Author: David Port Louis                                                      **
**My Special Thanks To Bucky Roberts I Learned C From his Tutorial Thanks Bucky!**
**********************************************************************************
**********************************************************************************
*/

