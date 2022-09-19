#include "main.h"

/**
* puts_half - print half
* @str: pointer to int
* Return: void
*/

void puts_half(char *str)
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

for (i = 0; i <= count/2; i++)
{
_putchar(ptr[i]);
}
_putchar('\n');

}
