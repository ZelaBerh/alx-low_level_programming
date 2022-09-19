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

if (count % 2 == 0)
{
for (i = count/2; i <= count; i++)
{
_putchar(ptr[i]);
}
_putchar('\n');
}
else
{
for (i = (count-1)/2; i <= count; i++)
{
_putchar(ptr[i]);
}
_putchar('\n');
}

}
