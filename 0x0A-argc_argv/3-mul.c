#include <stdio.h>
#include <stdlib.h>
/**
 * main - print product of two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: (0)
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	int mul = 0;

	if (argv[1] == NULL || argv[2] == NULL)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
