#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints alphabet
 *
 * Return: 0
 */

 int main()
 {
	for(int x = 'A'; x <= 'Z'; x++)
	{
	x = tolower(x);
	putchar(x);
	}
	return (0);
 }
