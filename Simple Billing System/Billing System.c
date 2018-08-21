/*Program To Find Roots Of quadratic equation*/

///////////// Header Files /////////////////
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
char item_name[100];
int item_price;
int item_qty;
int total;

void getdata();
int main()
{
    system("cls");
    printf("Welcome To Billing System \n");
    printf("*************************");
    for(int i=0;i<3;i++)
    {
        getdata();
        calculate();
        system("cls");
        display();
    }
    getch();
}

void getdata()
{
    printf("\nEnter The Product Name: ");
    scanf("%s",item_name);
    printf("\nEnter The Product Price: ");
    scanf("%d",&item_price);
    printf("\nEnter The Purchase Quantity: ");
    scanf("%d",&item_qty);
}
void calculate()
{
    total = item_price*item_qty;
}
void display()
{
    system("cls");
    printf("Product Name        Price   Quantity    Amount \n");
    printf("********************************************** \n");
    printf("\n%s                 %d         %d         %d  \n",item_name,item_price,item_qty,total);
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
