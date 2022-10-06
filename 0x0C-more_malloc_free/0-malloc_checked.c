#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * malloc_checked - allocates memory
 * 
 * @b: number of bytes
 * Return: nothing
 */


void *malloc_checked(unsigned int b)
{

unsigned int *ptr;

ptr = malloc(sizeof(int) * b);

return (ptr);

}
