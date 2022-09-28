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

	if (*s != '\0')
	{
		return (1 + _strlen_recursion((s + 1)));
	}
	else
	{
		return (0);
	}

}
