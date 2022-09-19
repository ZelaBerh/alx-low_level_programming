#include <string.h>
#include "main.h"

/**
 * rev_string - reverse string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int len = strlen(s);
	int start = 0;
	int finish = len - 1;

	while (start < finish)
	{
		char temp = s[start];

		s[start] = s[finish];
		s[finish] = temp;
		start++;
		finish--;
	}
}
