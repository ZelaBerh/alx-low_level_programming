#include "main.h"

/**
 * print_line - prints a x of _ n long
 * @n: length of x
 *
 * Return: void
 */

void print_line(int n)
{
	int x = 0;

	while (x < n)
	{
		_putchar('_');
		x++;
	}
	_putchar('\n');
}
