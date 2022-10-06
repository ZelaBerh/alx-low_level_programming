#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an ptr
 * @nmemb: number of elements.
 * @size: element's size.
 * Return: returns a pointer to an ptr of elements.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *ptr;

if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < nmemb; i++)
{
*(ptr + (i * size)) = 0;
}
return (ptr);
}
