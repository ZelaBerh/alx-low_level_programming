#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen_recursion - string length
 * @s: string
 * Return: pointer
 */




int _strlen_recursion(char *s)
{

	int i = 0;

	if (*s != '\0')
	{
		++i;
		_strlen_recursion(s + 1);
	}
	
	return (i);

}
