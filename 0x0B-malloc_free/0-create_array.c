#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - creates arrays
 * @size: size
 * @c: char
 * Return: array
 */


char *create_array(unsigned int size, char c)
{

char *lin;
unsigned int i;

if (size >= 1)
{
	lin = malloc(size * sizeof(char));
}

if (size <= 0)
{
	return (NULL);
}
else
{
	for (i = 0; i < size; i++)
	{
		*(lin + i) = c;
	}
}
return (lin);
}
