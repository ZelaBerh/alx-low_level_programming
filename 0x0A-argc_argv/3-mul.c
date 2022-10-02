#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: (0)
 */


int main(int argc, char *argv)
{
int i;
int sum = 0;

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
sum += argv[i];
}
printf("%d", sum);
return (0);
}
else
{
printf("Error");
return (1);
}
}
