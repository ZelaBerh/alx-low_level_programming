#include "main.h"

/**
* print_rev - print s in reverse
* @s: pointer to int
* Return: void
*/


void print_rev(char *s)
{

char *ptr;
ptr = s;

int count = 0, c;
char *begin, *end, temp;

while (*ptr != '\0')
{
count++;
ptr++;
}


begin = s;
end = s;

for ( c = 0 ; c < (count- 1 ) ; c++ )
end++;

for ( c = 0 ; c < count/2 ; c++ ) 
{
temp = *end;
*end = *begin;
*begin = temp;

begin++;
end--;
}

_putchar('\n');

}
