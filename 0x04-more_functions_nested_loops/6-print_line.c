#include "main.h"

/**
 * print_line - prints lines
 *
 * Description: prints lines
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
