#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print strings with separator
 * @n: arguments count
 * @separator: separator string
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *string;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);
		if (string == NULL)
			string = "(nil)";
		if (i == (n - 1))
		{
			printf("%s", string);
			break;
		}
		else
		{
			if (separator == NULL)
			{
				printf("%s", string);
			}
			else
			{
				printf("%s", string);
				printf("%s", separator);
			}
		}
	}
	va_end(args);
	printf("\n");
}
