#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory 
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 *
 * Return: a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
char *lin;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(size * nmemb);

if (ptr == NULL)
return (NULL);

lin = ptr;

for (i = 0; i < (size * nmemb); i++)
lin[i] = '\0';

return (ptr);
}
