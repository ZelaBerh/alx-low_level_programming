#include <unistd.h>

int _putchar(char a)
{
	return(write(1,&a,1));
}
/*
void print_alphabet(void)
{
	char text[26] = "abcdefghijklmnoprstuvwxyz";
	int i = 0;

	while (i < 27)
	{
		_putchar(text[i]);
		i++;
	}
	_putchar('\n');
}
*/