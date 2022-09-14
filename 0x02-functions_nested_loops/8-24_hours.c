#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include "main.h"

/**
 * jack_bauer - absolute value
 *
 * Return: Always 0.
 */


void jack_bauer(void)
{
	int i,j,k,l;
	bool stop = false;

	for (i = 0; i <3 && !stop ; i++)
	{
		for (j = 0; j <10 && !stop; j++)
		{
			for (k = 0; k <6 && !stop; k++)
			{
				for (l = 0; l <10 && !stop; l++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
					if (i==2 && j==3 && k==5 && l==9)
					{
						stop = true;
					}
				}
			}
		}
	}
	return 0;
}
