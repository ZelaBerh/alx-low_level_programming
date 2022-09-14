#include "main.h"

/**
 * _abs - absolute value
 *
 * @n: takes n input
 *
 * Return: Always 0.
 */


int _abs(int n)
{
	if (n <= 0)
	{
		return (n/(-1));
	}
	else
	{
		return (n);
	}
}
