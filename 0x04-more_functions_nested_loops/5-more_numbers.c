#include "main.h"

/**
 * more_numbers - prints until 14
 *
 * Description: prints until 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	int tens, ones;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			tens = j / 10;
			ones = j % 10;
			if (j > 9)
			{
				_putchar (tens + '0');
			}
			_putchar (ones + '0');
		}
		_putchar ('\n');
	}
}
