#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char text[26] = "abcdefghijklmnoprstuvwxyz";
	int i = 0;

	while (i < 27)
	{
		_putchar(text[i]);
		i++;
	}
	_putchar('\n');
}
