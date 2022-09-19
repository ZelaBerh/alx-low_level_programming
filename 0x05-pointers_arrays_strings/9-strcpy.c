#include "main.h"
#include <string.h>
/**
 * _strcpy - string copy from src to dest
 * @dest: string
 * @src: string
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int len = strlen(src);
	int i;

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
