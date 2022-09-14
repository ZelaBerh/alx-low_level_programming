#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10x
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char text[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0,j;
	for(j = 1; j < 11; j++)
	{
		while (i < 26)
			{
				_putchar(text[i]);
				i++;
			}
		_putchar('\n');
	}
	
}
