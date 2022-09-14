#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10x
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char text[26] = "abcdefghijklmnopqrstuvwxyz";
	int j;

	for( j = 1; j < 11; j++)
	{
		int i = 0;
		
		while (i < 26)
			{
				_putchar(text[i]);
				i++;
			}
		_putchar('\n');
	}
	
}
