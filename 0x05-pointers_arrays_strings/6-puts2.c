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
int count = 0;

ptr = str;

while (*str != '\0')
{
count++;
str++;
}

for (i = 0; ptr[i] != '\0'; i = i + 2)
{
if (count >= 2 && ptr[i] == 'H')
	break;
_putchar(ptr[i]);

}
_putchar('\n');

}
