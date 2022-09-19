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

for (i = 0; ptr[i] != '\0'; i++)
{
	dest[i] = ptr[i];
	if (ptr[i] == '\0')
	{
		dest[i+1] = ptr[i+1];
	}
}

for (i = 0; ptr[i] != '\0'; i++)
{
	_putchar(dest[i]);
	if (ptr[i] == '\0')
	{
		dest[i+1] = ptr[i+1];
		_putchar(dest[i+1]);
	}
}

return (0);

}
