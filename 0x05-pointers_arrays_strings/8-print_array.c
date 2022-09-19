#include "main.h"

/**
* print_array - print n arrays
* @a: array
* @b: number
* Return: void
*/


void print_array(int *a, int n)
{

int i;

for ( i = 0; i <= n; i++)
{
if ( i != n)
{
printf("%d, ", a[i]);
}

else
{
printf("%d", a[i]);
}

}

}
