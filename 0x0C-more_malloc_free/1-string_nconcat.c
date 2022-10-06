#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - allocates memory
 *
 * @b: number of bytes
 * Return: nothing
 */



char *string_nconcat(char *s1, char *s2, unsigned int n)
{

char *ptr;
int i, j, length, one;

if (n >= strlen(s2))
{
n = strlen(s2);
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
