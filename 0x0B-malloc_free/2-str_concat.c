#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - copies strings
 * @str: string
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{

	char *lin;
	int i, one, two, j, length;

	one = strlen(s1);
	two = strlen(s2);

	length = one + two;

	lin = malloc(length * sizeof(char));

	for (i = 0; i < one; i++)
	{
		*(lin + i) = *(s1 + i);
	}

	for (j = one; j < two; j++)
	{
		*(lin + j) = *(s2 + j);
	}

	return (lin);

}