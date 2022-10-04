#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - copies strings
 * @str: string
 * Return: pointer
 */



char *_strdup(char *str)
{

char *lin;
int i, length;

if (str == NULL)
{
	return (NULL);
}

length = strlen(str);

lin = malloc((length + 1) * sizeof(char));

if (lin == NULL)
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
