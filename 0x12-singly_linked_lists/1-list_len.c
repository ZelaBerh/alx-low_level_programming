#include "lists.h"

/**
 * list_len - count the number of the nodes
 * @h: pointer to the node
 * Return: integer
*/

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
