#include "main.h"

/**
 * print_diagonal - draws diagonal x
 * @n: number of times
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int x = 0;
	int y;

	if (n > 0)
	{
		while (x < n)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			x++;
		}
	}
	else
	{
		_putchar('\n');
	}
}