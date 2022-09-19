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

for ( i = 0; src != '\0'; i++)
{
	dest[i] = src[i];
}

for ( i = 0; src != '\0'; i++)
{
	_putchar(dest[i]);
}

}
