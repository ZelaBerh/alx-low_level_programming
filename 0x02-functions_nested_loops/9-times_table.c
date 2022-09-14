/*
void times_table(void)
{

	int i,j,x=0;
	int num[120];
	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
		{
			num[x] = j*i;
			x++;
		}
	}

	x=0;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
		{
			if((num[x]/10) == 0)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((num[x]/10) + '0');
			}
			_putchar((num[x]%10) + '0');
			x++;
			if (i<9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}

}

*/

#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Description: prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int row, column, product, tens, ones;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			product = row * column;
			tens = product / 10;
			ones = product % 10;

			if (column == 0)
			{
				_putchar('0');
			}
			else if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
		}
		_putchar('\n');
	}
}
