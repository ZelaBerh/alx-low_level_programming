#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char text[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
		_putchar(text[i]);
		i++;
	}
	_putchar('\n');
}
