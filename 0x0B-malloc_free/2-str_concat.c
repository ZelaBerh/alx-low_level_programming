#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatination of two arrays
 * @s1: string one
 * @s2: string two
 * Return: NULL if size = 0, pointer to array
 */

char *str_concat(char *s1, char *s2)
{
	int one;
	int two;
	char *lin;
	int i;
	int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	one = strlen(s1);
	two = strlen(s2);

	lin = (char *) malloc((one + two + 1) * sizeof(char));
	if (lin == NULL)
		return (NULL);

	for (i = 0; i < (one + two); i++)
	{
		if (i < one)
			*(lin + i) = s1[i];
		else
		{
			*(lin + i) = s2[j];
			j++;
		}
	}
	return (lin);
}
