#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - creates arrays
 * @str: 
 * Return: array
 */



char *_strdup(char *str)
{

char *lin;
int i, length;

length = strlen (str);

lin = malloc(length * sizeof(char));

if (str == NULL || str == 0)
{
	return (NULL);
}

else
{

for (i = 0; i < length; i++)
{
	*(lin + i) = *(str + i);
}

}

return (lin);

}