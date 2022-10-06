#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block 
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size in bytes of the allocated space for ptr.
 * @new_size: The size in bytes for the new memory block.
 *
 * Return: a pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr;
	char *ptr_copy, *lin;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);

		if (ptr == NULL)
			return (NULL);

		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	ptr = malloc(sizeof(*ptr_copy) * new_size);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	lin = ptr;

	for (i = 0; i < old_size && i < new_size; i++)
		lin[i] = *ptr_copy++;

	free(ptr);
	return (ptr);
}
