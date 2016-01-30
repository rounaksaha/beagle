#include <hw1.h>

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
 




