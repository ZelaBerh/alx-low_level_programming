#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name from a given name.
 * @name: string that we need to display.
 * @f: function that is going to be called from our function.
 * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
f(name);
}
