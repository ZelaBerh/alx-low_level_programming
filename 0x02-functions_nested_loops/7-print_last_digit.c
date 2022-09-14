#include "main.h"

/**
 * print_last_digit - absolute value
 *
 * @n: takes n input
 *
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int i;

	for (i = 0; i <= 2; i++)
	{
		_putchar(n % 10);
	}
	return (0);
}
