/* This Program Generates Random Password using rand()
    and switch() Functions*/

///////////// Header Files /////////////////
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main()
{
    int pref,temp,i,max;
    char pass[1000];
    printf("Welcome To Random PassGen: \n");
    printf("******* ** ****** ********\n\n");
    printf("1.Alpha Password\n");
    printf("2.Numeric Password\n");
    printf("3.AplhaNumeric Password \n\n");
    printf("Enter Your Choice : ");
    scanf("%d",&pref);
    system("cls");
    switch(pref)
    {
    case 1:
            printf("Enter Password Size: \n");
            scanf("%d",&max);
            for(i=0;i<max;i++)
            {
                pass[i]='A'+(rand()%26);
            }
            system("cls");
            printf("Random Password : %s",pass);
            break;
    case 2:
            printf("Enter Password Size: \n");
            scanf("%d",&max);
            for(i=0;i<max;i++)
            {
                pass[i]=(rand()%12);
            }
            system("cls");
            printf(" Random Pin  : %d ",pass);
            break;
    case 3:
            printf("Generating Twelve Character Pass: \n");
            for(i=0;i<4;i++)
            {
                pass[i]=rand()%9;
                char upper = 'A'+(rand()%26);
                pass[i+2]=upper;
                char lower = 'a'+(rand()%26);
                pass[i+3]=lower;
                system("cls");
                printf("%d%c%c",pass[i],pass[i+2],pass[i+3]);
            }
            break;
    }
    getch();
}



/*
**********************************************************************************
**********************************************************************************
**Title: Random Password Generator                                              **
**URL: https://github.com/Davidportlouis/Source-Code-For-Simple-C-Program       **
**Date_start: 18/08/2018                                                        **
**Author: David Port Louis                                                      **
**My Special Thanks To Bucky Roberts I Learned C From his Tutorial Thanks Bucky!**
**********************************************************************************
**********************************************************************************
*/
