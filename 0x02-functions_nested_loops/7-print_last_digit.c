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
	int k;

	if (n < 0)
	{
		n = n * (-1);
	}

	k = n % 10;

	_putchar(k + '0');

	return (k);
}
