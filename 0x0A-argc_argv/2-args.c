#include <stdio.h>

/**
 * main - prints arguments passed into it
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: (0)
 */


int main(int argc, __attribute__((unused)) char **argv)
{
	int i;
	
	for( i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
