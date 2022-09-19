#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar(10);
}
