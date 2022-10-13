#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns sums of arguments
 * @n: number of arguments
 * 
 * Return: sum
 * 
 */


int sum_them_all(const unsigned int n, ...)
{

va_list nums;
va_start(nums, n);

unsigned int i;
int sum = 0;

for (i = 0; i < n; i++)
{
	sum += va_arg(nums, int);
	if (n == 0)
	{
		return (0);
	}
}

va_end(nums);

return (sum);

}
