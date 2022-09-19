#include "main.h"

/**
* puts2 - print every other
* Description: every other one
* @str: pointer to int
* Return: void
*/

void puts2(char *str)
{

char *ptr;
int i;

ptr = str;

for (i = 0; ptr[i] != '\0'; i = i + 2)
{
_putchar(ptr[i]);
if (ptr[i] == 'H')
	break;
}
_putchar('\n');

}
