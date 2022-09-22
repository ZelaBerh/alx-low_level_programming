#include <string.h>
#include "main.h"

/**
 * _strcat - string concatination
 * @dest: String
 * @src: String
 * Return: String
 */

char *_strcat(char *dest, char *src)
{
	int len = strlen(dest);
	int i;
	int j = 0;

	for (i = len; i < len + strlen(src) - 1; i++)
	{
		dest[i] = src[j];
		j++;
	}
	return (dest);
}