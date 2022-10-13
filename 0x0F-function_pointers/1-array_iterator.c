#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>
/**
 * array_iterator - calls function in each element of the array.
 * @array: array taken
 * @size: size of the array
 * @action: function to be called
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
