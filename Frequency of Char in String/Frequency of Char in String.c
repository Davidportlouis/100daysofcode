/* C program to find the frequency of characters in a string*/

///////////// Header Files /////////////////
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void frequency_finder(char s[], int count[]);

int main()
{
    char string[100];
    int i, count[26]={0};

    printf("Enter A String \n");
    gets(string);

    frequency_finder(string,count);
    printf("Character Count \n");

    for(i=0;i<26;i++)
    {
        printf("%c \t %d \n",i+'a',count[i]);
    }
    getch();
}
void frequency_finder(char s[], int count[]) {
   int c = 0;

   while (s[c] != '\0') {
      if (s[c] >= 'a' && s[c] <= 'z' )
         count[s[c]-'a']++;
      c++;
   }
}

/*
**********************************************************************************
**********************************************************************************
**Title:find the frequency of characters in a string                            **
**URL: https://github.com/Davidportlouis/Source-Code-For-Simple-C-Program       **
**Date_start: 19/08/2018                                                        **
**Author: David Port Louis                                                      **
**My Special Thanks To Bucky Roberts I Learned C From his Tutorial Thanks Bucky!**
**********************************************************************************
**********************************************************************************
*/
