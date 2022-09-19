#include "main.h"

/**
* print_rev - print s in reverse
* @s: pointer to int
* Return: void
*/

int string_length(char *pointer)
{
int c = 0;

while( *(pointer+c) != '\0' )
c++;

return c;
}

void print_rev(char *s)
{

int length, c;
   char *begin, *end, temp;
 
   length = string_length(s);
 
   begin = s;
   end = s;
 
   for ( c = 0 ; c < ( length - 1 ) ; c++ )
      end++;
 
   for ( c = 0 ; c < length/2 ; c++ ) 
   {        
      temp = *end;
      *end = *begin;
      *begin = temp;
 
      begin++;
      end--;
   }
_putchar('\n');

}

