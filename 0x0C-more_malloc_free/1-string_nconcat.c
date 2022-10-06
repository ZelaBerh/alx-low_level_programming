#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - allocates memory
 *
 * @s1: string
 * @s2: string
 * @n: number of bytes
 * Return: pointer
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{

char *ptr;
int i, j, length, one;

if (n >= strlen(s2))
{
n = strlen(s2);
}

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}


one = strlen(s1);
length = one + n;

ptr = malloc(length + 1);


if (ptr == NULL)
{
return(NULL);
}

for (i = 0; i < one; i++)
{
	*(ptr + i) = *(s1 + i);
}

for (j = one; j < length; j++)
{
	*(ptr + j) = *(s2 + (j - one));
}
return (ptr);
}
