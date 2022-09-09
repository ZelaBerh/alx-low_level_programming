#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints numbers
 *
 * Return: 0
 */

int main(void)
{

	int c;
	int hi[20];

	for (c = 0; c <= 9; c++)
	{
		hi[c] = c;
		/*printf("%d", hi[c]); */
		putchar(hi[c]);
	}
	return (0);
}
