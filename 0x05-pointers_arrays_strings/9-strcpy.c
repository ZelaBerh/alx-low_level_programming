#include "main.h"

/**
* print_array - print n arrays
* @dest: array
* @src: number
* Return: void
*/


char *_strcpy(char *dest, char *src)
{

int i;
char *ptr;

ptr = src;

for ( i = 0; ptr != '\0'; i++)
{
	dest[i] = ptr[i];
}

for ( i = 0; ptr != '\0'; i++)
{
	_putchar(dest[i]);
}

return (0);

}
