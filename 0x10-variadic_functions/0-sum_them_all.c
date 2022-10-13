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
unsigned int i, sum = 0;

va_start(nums, n);

for (i = 0; i < n; i++)
	sum += va_arg(nums, int);

va_end(nums);

return (sum);
}
