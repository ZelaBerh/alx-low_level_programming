#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: determines the last digit
 *
 * Return: 0
 */

int main(void)
{
    int n, last_digit;
    char greater[50] = "and is greater than 5";
    char less[50] = "and is less than 6 and not 0";
    char zero[50] = "and is 0";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    last_digit = n%10;
	
    if (last_digit > 5)
    {
        printf("Last digit of %d is %d %s\n", n, last_digit, greater);
    }
    else if (last_digit < 6 && last_digit != 0)
    {
        printf("Last digit of %d is %d %s\n", n, last_digit, less);
    }
    else
    {
        printf("Last digit of %d is %d %s\n", n, last_digit, zero);
    }
    
    return (0);
}