#include<stdio.h>
#include <string.h>

int main() {
   char string[50];
   scanf("%[^\n]%*c",string);
   char * token = strtok(string, " ");
   while( token != NULL ) {
      printf( "%s\n", token ); //printing each token
      token = strtok(NULL, " ");
   }
   return 0;
}   