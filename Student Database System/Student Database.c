/*Simple Student Database System*/

///////////// Header Files /////////////////
#include<stdio.h>>
#include<stdlib.h>
#include<string.h>
struct
{
    int roll_no;
    char firstname[20];
    char lastname[20];
    int mark;
}student;
int main()
{
    int flag,choice,move,rollnumber,found,cont,length;
    char name[40];
    FILE *fp;
    printf("\t STUDENT DATABASE SYSTEM\n");
    printf("\t -----------------------\n\n");
    action1:
        printf(" 1.Store a new record in database \n");
        printf(" 2.Search Student record by Name\n");
        printf(" 3.Search Student record by Roll No.\n");
        printf(" 4.Quit Database\n");
        printf(" Enter you Choice :");
        scanf("%d",&choice);
        system("cls");
        switch(choice)
        {
        case 1:
        action2:
        printf("Enter Student Details \n");
        printf("Roll no: ");
        scanf("%d",&student.roll_no);
        printf("FirstName: ");
        scanf("%s",&student.firstname);
        printf("LastName: ");
        scanf("%s",&student.lastname);
        printf("Mark :");
        scanf("%d",&student.mark);
        fp=fopen("Studentdata.txt","a+");
        fprintf(fp,"%d\t%s\t%s\t%d\t",student.roll_no,student.firstname,student.lastname,student.mark);
        fclose(fp);
        printf("Student Record Created Successfully.\n");
        printf("1. To Create another student record\n");
        printf("2. To Move to DB Main Menu\n");
        printf("3. Exit Program\n");
        printf("Enter Your Choice: ");
        scanf("%d",&move);
        if(move==1)
            goto action2;
        if(move==2)
            goto action1;
        if(move==3)
            printf("Exiting Database ........");
            break;
        if(move!=1&&2){
            printf("Exiting Database ........");
            break;
        }

        case 2:
        action3:
        printf("Enter Student First Name: ");
        scanf("%s",&name);
        printf("----Searching record with student Name: %s----\n",name);
        found=0;
        if((fp=fopen("Studentdata.txt","r+"))==NULL)
        {
            printf(" ! The File is Empty......\n\n");
        }else
        {
            while(!feof(fp)&&found==0)
            {
                fscanf(fp,"%d\t%s\t%s\t%d\t",student.roll_no,student.firstname,student.lastname,student.mark);
                length = strlen(student.firstname);
                if(student.firstname[length]==name[length])
                    found=1;
            }
        }
        if(found)
        {
            printf("The Record is Found \n");
            printf("Roll no: %d\nFirstName: %s\nLastName:%s\nMark: %d\n",student.roll_no,student.firstname,student.lastname,student.mark);
        }else
        {
            printf("Not Found.... \n");
            getch();
        }
        action4:
        printf("1.Search another record");
        printf("2.To Move to Main Menu");
        printf("3.Exit Program");
        scanf("%d",&move);
        if(move==1)
            goto action3;
        if(move==2)
            goto action1;
        if(move==3)
            printf("Exiting Database ........");
            break;
        if(move!=1&&2)
            printf("Enter a Valid Input: ");
            goto action4;
        case 3:
            action5:
                printf("Enter The Roll Number: ");
                scanf("%d",&rollnumber);
                printf("----Searching record with Roll Number: %d----\n",rollnumber);
                found=0;
                if((fp=fopen("Studentdata.txt","r"))==NULL)
                {
                    printf("! The File is Empty....\n\n");
                }else
                {
                    while(!feof(fp)&&found==0)
                    {
                        fscanf(fp,"%d\t%s\t%s\t%d\t",student.roll_no,student.firstname,student.lastname,student.mark);
                        if(student.roll_no==rollnumber)
                            found=1;
                    }
                }
                if(found)
                {
                    printf("Record is Found \n");
                    printf("Roll No: %d\nFirstName: %s\nLastName: %s\nMark: %d\n",student.roll_no,student.firstname,student.lastname,student.mark);
                }else
                {
                    printf("Not Found...\n");
                    getch();
                }
                action6:
                    printf("1.Search another record\n");
                    printf("2.To move  to main menu\n");
                    printf("2.Exit Program\n");
                    scanf("%d",&move);
                    if(move==1)
                        goto action5;
                    if(move==2)
                        goto action1;
                    if(move==3)
                    printf("Exiting Database ........");
                    break;
                    if(move!=1&&2)
                    {
                        printf("Enter Valid Input...\n");
                        goto action6;
                    }
                    case 4: break;
                    default:
                        printf("Incorrect Input >>>>>> Try Again....\n");
                        goto action1;
        }
        getch();
        return 0;
}
/*
**********************************************************************************
**********************************************************************************
**Title:Simple Student Database With Search Options                             **
**URL: https://github.com/Davidportlouis/Source-Code-For-Simple-C-Program       **
**Date_start: 22/08/2018                                                        **
**Author: David Port Louis                                                      **
**My Special Thanks To Bucky Roberts I Learned C From his Tutorial Thanks Bucky!**
**********************************************************************************
**********************************************************************************
*/

