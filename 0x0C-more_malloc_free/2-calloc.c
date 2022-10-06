#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - allocates memory
 *
 * @nmemb: array
 * @size: bytes
 * Return: pointer
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{

char *ptr;
int i;

if ( nmemb == 0 || size == 0)
{
	return(NULL);
}

ptr = malloc(sizeof(size) * nmemb);

if ( ptr == NULL)
{
	return(NULL);
}

for (i = 0; i < nmemb; i++)
{
*(ptr + i) = 0;
}

return (ptr);

}
