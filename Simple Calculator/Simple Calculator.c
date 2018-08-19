/* This Program Gets Three Input Number form  the user
    and calculates the answer using basic arithmetic
    operators using switch case*/
// This is My Github Repository File

///////////// Header Files /////////////////
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h> // includes the Math Header file

int main()
{
    float a,b,c,answer;//This Declares Flour Variables of Type Float
    int temp; // This Declares one Integer Variable
    printf("Welcome To Simple Calculator: \n");
    printf("******* ** ****** *********** \n"); //Decorative Line Optional.
    printf("Enter The First Number :\n");
    scanf("%f",&a);// This gets the user input and stores it in variable a.
    printf("Enter The Second Number: \n");
    scanf("%f",&b);//This gets the next user input and stores it in variable b.
    printf("Enter The Third Number: \n");
    scanf("%f",&c);
    system("cls"); // This Clears the Screen.
    printf("Select Arithmetic Operation: \n");
    printf("****** ********** ********** \n");
    printf("1.Addition \n");
    printf("2.Subtraction \n");
    printf("3.Multiplication \n");
    printf("4.Division \n");
    printf("Enter Your Choice : ");
    scanf("%d",&temp);
    system("cls");
    switch(temp) // This is the Switch statement.
    {
    case 1:
        answer=a+b+c;
        printf("The Sum : %f \n",answer);
        break;
    case 2:
        answer=a-b-c;
        printf("The Difference : %f \n",abs(answer));
        break;
    case 3:
        answer=a*b*c;
        printf("The Product : %f \n",answer);
        break;
    case 4:
        answer=a/b/c;
        printf("The Quotient : %f \n",answer);
        break;
    default:
        printf("Sorry Enter The Correct Option \n");
    }
    getch();
}

/*
**********************************************************************************
**********************************************************************************
**Title: Simple Calculator Using Switch()                                       **
**URL: https:/ /github.com/Davidportlouis/Source-Code-For-Simple-C-Program      **
**Date_start: 18/08/2018                                                        **
**Author: David Port Louis                                                      **
**My Special Thanks To Bucky Roberts I Learned C From his Tutorial Thanks Bucky!**
**********************************************************************************
**********************************************************************************
*/
