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

char *ptr;
unsigned int i;
/*
if (size >= 1)
{
	ptr = (char *) malloc(size * sizeof(char));
} */
ptr = (char *) malloc(size * sizeof(char));
if (size <= 0)
{
	return (NULL);
}
else
{
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
}
return (ptr);
}
