#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int div[5] = {25, 10, 5, 2, 1};
	int num = atoi(argv[1]);
	int counter = 0;
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	while (num != 0)
	{
		if (num >= div[i])
		{
			if (num % div[i] == 0)
			{
				num = num - div[i];
				counter++;
				i = 0;
			}
			else
			{
				i++;
			}
		}
		else
		{
			i++;
		}
	}
	printf("%d\n", counter);
	return (0);
}
