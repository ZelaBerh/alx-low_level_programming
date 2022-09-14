#include "main.h"

/**
 * _isalpha - lowercase or uppercase
 *
 * @c: takes c input
 *
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else{
		return (0);
	}
}
