#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	int sum;
	int first, second;
	int count;

	sum = 0;
	first = 0;
	second = 1;
	count = 0;

	while (count < 49)
	{
		sum = first + second;
		printf("%d, ", sum);
		first = second;
		second = sum;

		count++;
	}
	sum = first + second;
	printf("%d\n", sum);

	return (0);
}
