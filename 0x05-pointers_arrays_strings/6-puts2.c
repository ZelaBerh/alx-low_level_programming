#include "main.h"

/**
* _puts2 - print every other
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
}
_putchar('\n');

}
