#include <stdio.h>
//#include <conio.h>
#include "hw1.h"
 
int string_length(char []);
char reverse_string(char* str, int length);
 
main() 
{
   char string[50];
 
   printf("Enter a string\n");
   gets(string);
   int length = string_length(string);
   if (length<=0 || length>50)
   {
   	printf("Invalid Input; Try Again \n");
   }
   else
   {
   
   reverse_string(string, length);
 
   printf("Reverse of entered string is %s \n", string);
 
   return 0;
	}
}


char reverse_string(char *str, int length) 
{
   int c;
   char *begin, *end, temp;
 
   
   begin  = str;
   end    = str;
 
   for (c = 0; c < length - 1; c++)
      end++;
 
   for (c = 0; c < length/2; c++)
   {        
      temp   = *end;
      *end   = *begin;
      *begin = temp;
 
      begin++;
      end--;
   }
}
 

int string_length(char s[]) 
{
   int c = 0;
 
   while (s[c] != '\0')
      c++;
 
   return c;
}





