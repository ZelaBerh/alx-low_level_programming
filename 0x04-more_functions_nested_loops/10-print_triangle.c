#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: length of sides minus hypotenuse
 *
 * Return: void
 */

void print_triangle(int size)
{
	int x = 0;
	int y;
	int h;

	if (size > 0)
	{
		while (x < size)
		{
			for (y = size - 1; y > x; y--)
			{
				_putchar(' ');
			}
			for (h = 0; h < x + 1; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
			x++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
