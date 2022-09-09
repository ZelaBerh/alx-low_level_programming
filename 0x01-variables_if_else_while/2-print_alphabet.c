#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Description: prints alphabet
 *
 * Return: 0
 */

 int main(void)
 {
	int x;
	for(x = 'a'; x <= 'z'; x++)
	{
	putchar(x);
	}
	putchar('\n');
	return (0);
 }
