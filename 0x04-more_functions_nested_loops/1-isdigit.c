#include "main.h"

/**
 * _isdigit - digit
 *
 * @c: takes c input
 *
 * Return: Always 1 or 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57 )
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
