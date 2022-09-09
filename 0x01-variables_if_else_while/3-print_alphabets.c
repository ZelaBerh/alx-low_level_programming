#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Description: prints alphabet lower and upper
 * case
 *
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
    for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
