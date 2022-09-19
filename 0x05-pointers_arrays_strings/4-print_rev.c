#include "main.h"

/**
* print_rev - print string in reverse
* @s: pointer to int
* Return: void
*/


void print_rev(char *s)
{
char *ptr;
int j;
/*char str[100];*/
int count = 0;

ptr = s;
/*
for (i = 0; ptr[i] != '\0'; i++)
{
str[i] = ptr[i]; 
}
*/
while (*ptr != '\0')
{
count++;
ptr++;
}

for ( j = count; j >= 0; j--)
{
_putchar(*ptr[j]);
}

_putchar('\n');

}
