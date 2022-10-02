#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: (0)
 */


int main(int argc, char *argv[])
{
int i;
int mul = 1;

if (argc >= 3)
{
	printf("Error\n");
	return (1);
}
else if (argv[1] != NULL || argv[2] != NULL)
{
	for (i = 1; i < 3; i++)
		{
			mul = mul * atoi(argv[i]);
		}
	printf("%d\n", mul);
}
return (0);
}
