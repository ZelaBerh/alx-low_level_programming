#include "main.h"

/**
* print_array - print n arrays
* @a: array
* @n: number
* Return: void
*/


void print_array(int *a, int n)
{

int i;

if (n >= 1)
{

for (i = 0; i <= n; i++)
{
if (i < n)
{
printf("%d, ", a[i]);
}

else
{
printf("%d", a[i]);
}

}

}
else
{
	printf("\n");
}
}
