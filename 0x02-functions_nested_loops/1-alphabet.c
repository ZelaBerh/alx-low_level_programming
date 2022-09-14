#include "main.h"

/**
 * main - display _putchar
 *
 * Description: display a string
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char text[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 8)
	{
		_putchar(text[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
