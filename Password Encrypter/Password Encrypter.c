/* C program to Encrypt And Decrypt Password*/

///////////// Header Files /////////////////
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

void encrypt(char passwd[],int a) // a function to encrypt the entered Password String
{
    unsigned int i;
    for(i=0;i<=strlen(passwd);++i)
    {
        passwd[i]=passwd[i]-a; // string value[i] = string value[i]-key value
    }
}

void decrypt(char passwd[],int a) // a function to decrypt the entered Password String
{
    unsigned int i;
    for(i=0;i<=strlen(passwd);i++)
    {
        passwd[i]=passwd[i]+a; // string value[i] = string value[i]+key value
    }
}

int main()
{
    char passwd[20];
    int choice;
    printf("Enter Password : \n");
    scanf("%s",passwd);
    system("cls");
    printf("Password Encrypter & Decrypter \n");
    printf("******** ********* * ********* \n");
    printf("1.Encrypt Password \n");
    printf("2.Decrypt Password \n");
    printf("Enter Your Choice: ");
    scanf("%d",&choice);
    system("cls");
    switch(choice)
    {
    case 1:
    encrypt(passwd,0xFACA);
    printf("Encrypted Password : %s \n",passwd);
    break;
    case 2:
    decrypt(passwd,0xFACA);
    printf("Decrypted Password : %s \n",passwd);
    break;
    }
    getchar();
}

/*
**********************************************************************************
**********************************************************************************
**Title:Password Encrypt and Decrypt Program                                    **
**URL: https://github.com/Davidportlouis/Source-Code-For-Simple-C-Program       **
**Date_start: 19/08/2018                                                        **
**Author: David Port Louis                                                      **
**My Special Thanks To Bucky Roberts I Learned C From his Tutorial Thanks Bucky!**
**********************************************************************************
**********************************************************************************
*/
