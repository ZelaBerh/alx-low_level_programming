#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - Returns numbers separated by a char
 * @n: number of paramters
 * @separator: goes between the arguments
 * Return: print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

va_list args;
unsigned int i;

va_start(args, n);
for (i = 0; i < n; i++)
{
	if (i == (n - 1))
	{
		printf("%d", va_arg(args, int));
		break;
	}
	printf("%d", va_arg(args, int));
	printf("%s", separator);
}
va_end(args);
printf("\n");
}
