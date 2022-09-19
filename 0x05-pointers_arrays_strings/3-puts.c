#include "main.h"

/**
* _puts - print string
* @str: pointer to int
* Return: void
*/

void _puts(char *str)
{

char *ptr;
int i;

ptr = str; 

for(i = 0; ptr[i] != '\0'; i++)
{
_putchar(i);
_putchar('\n');
/*printf("&str[%d] = %p\n",i,ptr+i);*/
}

}
