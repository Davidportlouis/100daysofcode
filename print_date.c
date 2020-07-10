#include<stdio.h>
#include<stdlib.h>

static char col1[5],col2[5],col3[5];

int get_int(char *s)
{
     int x;
     sscanf(s,"%d",&x);
     return x;
}

int get_len(char *s)
{
     int ct = 0;
     while(s[ct]!='\0')
     {
          ct++;
     }
     return ct;
}

void get_cols(char *s)
{
     int i = 0,j=0;
     while(s[i] != '-')
     {
          col1[j] = s[i];
          j++;
          i++;
     }
     j = 0;
     i++;
     while(s[i] != '-')
     {
          col2[j] = s[i];
          j++;
          i++;
     }
     j = 0;
     i++;
     while(s[i] != '\0')
     {
          col3[j] = s[i];
          j++;
          i++;
     }
}

void print_date()
{
     if((get_len(col1) == 2) && (get_len(col2)==3) && (get_len(col3) == 4))
          printf("DD-MMM-YYYY");
     else if((get_len(col1) == 2) && (get_len(col2) == 4) && (get_len(col3) == 3))
          printf("DD-YYYY-MMM");
     else if((get_len(col1) == 3) && (get_len(col2) == 2) && (get_len(col3) == 4))
          printf("MMM-DD-YYYY");
     else if((get_len(col3) == 3) && (get_len(col2) == 4) && (get_len(col3) == 2))
          printf("MMM-YYYY-DD");
     else if((get_len(col1) == 4) && (get_len(col2) == 2) && (get_len(col3) == 3))
          printf("YYYY-DD-MMM");
     else if((get_len(col1) == 4) && (get_len(col2) == 3) &&  (get_len(col3) == 2))
          printf("YYYY-MMM-DD");
     else if((get_len(col1) == 2) && (get_len(col2) == 2) && (get_len(col3) == 4))
     {
          if(get_int(col1) > 12 && get_int(col2) < 13)
               printf("DD-MM-YYYY");
          else if(get_int(col1) < 13 && get_int(col2) > 12)
               printf("MM-DD-YYYY");
          else
               printf("-1");
     }
     else if((get_len(col1) == 4) && (get_len(col2) ==2) && (get_len(col3) == 2))
     {
          if(get_int(col2) > 12 && get_int(col3) < 13)
               printf("YYYY-DD-MM");
          else if(get_int(col2) < 13 && get_int(col3) > 12)
               printf("YYYY-MM-DD");
          else
               printf("-1");
     }
     else if((get_len(col1) == 2) && (get_len(col2) == 4) && (get_len(col3) == 2))
     {
          if(get_int(col1) > 12 && get_int(col3) < 13)
               printf("DD-YYYY-MM");
          else if(get_int(col1) < 13 && get_int(col3) > 12)
               printf("MM-YYYY-DD");
          else
               printf("-1"); 
     }
     
}

int main(void)
{
     char s[15];
     scanf("%s",s);
     get_cols(s);
     print_date();
     return 0;
}