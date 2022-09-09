#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Description: prints reverse alphabet
 *
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 'z'; x <= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
