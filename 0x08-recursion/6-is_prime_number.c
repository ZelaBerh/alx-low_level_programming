#include "main.h"

/**
 * check_int - checks if it is divisible by number
 * @num: number
 * @x: integer
 * Return: integer
 */

int check_int(int num, int x)
{
	if (num == x)
		return (1);
	if (num % x == 0)
		return (0);
	else if (num % x != 0)
		return (check_int(num, x + 1));
	return (0);
}

/**
 * is_prime_number -returns 1 if it is prime and 0 if not
 * @n: integer
 * Return: integer
 */

int is_prime_number(int n)
{
	int start;

	start = 2;

	if (n <= 0)
		return (0);
	else if (n == 1)
		return (0);
	else
		return (check_int(n, start));
}
