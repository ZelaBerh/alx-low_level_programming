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

 int main()
 {
	int x;
	for(x = 'A'; x <= 'Z'; x++)
	{
	x = tolower(x);
	putchar(x);
	}
	return (0);
 }
