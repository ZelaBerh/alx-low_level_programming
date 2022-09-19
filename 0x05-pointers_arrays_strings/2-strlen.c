#include "main.h"

/**
* _strlen - string length
* @s: pointer to int
* Return: void
*/

int _strlen(char *s)
{
int count = 0;
while (*s != '\0')
{
count++;
s++;
}
return (count);
}
