#include "main.h"

/**
* print_array - print n arrays
* @dest: array
* @src: number
* Return: void
*/


char *_strcpy(char *dest, char *src)
{

int i = 0;

/*
for (i = 0; src[i] != '\0'; i++)
{
	dest[i] = src[i];
	if (src[i] == '\0')
	{
		dest[i+1] = src[i+1];
	}
}
*/

while(src[i] != '\0')
{
	dest[i] = src[i];
	i++;
}
if (src[i] == '\0')
{
	dest[i+1] = src[i+1];
}


while(src[i] != '\0')
{
	_putchar(dest[i]);
	i++;
}
if (src[i] == '\0')
	{
		dest[i+1] = src[i+1];
		_putchar(dest[i+1]);
	}

/*
for (i = 0; src[i] != '\0'; i++)
{
	_putchar(dest[i]);
	if (src[i] == '\0')
	{
		dest[i+1] = src[i+1];
		_putchar(dest[i+1]);
	}
}
*/
return (0);

}
