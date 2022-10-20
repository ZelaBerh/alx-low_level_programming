#include "lists.h"
#include <stdio.h>

/**
 * print_list - return the number of the nodes and the nodes data
 * @h: pointer to the node
 * Return: integer
*/

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] , %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
