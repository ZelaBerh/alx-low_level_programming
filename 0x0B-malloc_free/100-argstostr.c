#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments to a program
 * @ac: argc - number of arguments
 * @av: argv - array of arguments
 * Return: pointer to new string
 */

char *argstostr(int ac, char **av)
{
	int length, i, b;
	unsigned int j;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	length = 0;
	for (i = 0; i < ac; i++)
	{
		length += strlen(av[i]) + 1;
	}

	str = malloc(sizeof(char) * length + 1);
	if (str == NULL)
		return (NULL);

	b = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
			str[b] = av[i][j];
			b++;
		}
		str[b] = '\n';
		b++;
	}
	str[b] = '\0';
	return (str);
}
