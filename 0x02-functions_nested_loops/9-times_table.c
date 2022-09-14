#include "main.h"

/**
 * times_table - times table
 *
 * Return: Always 0.
 */





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
				_putchar(' , ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}

}
