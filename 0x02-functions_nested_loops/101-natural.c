#include <stdio.h>

/**
 * main - sum of multiples of
 * Description: returns multiples of 3 and 5 sum
 * Result: always 0 void sum
 */

int main(void)
{

	int i, j, x = 0;
	int num[1024];
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			num[x] = i;
			x++;
		}
	}

	for (j = 0; j <= x; j++)
	{
		sum = sum + num[j];
	}

	printf("%d\n", sum);

	return (0);
}
