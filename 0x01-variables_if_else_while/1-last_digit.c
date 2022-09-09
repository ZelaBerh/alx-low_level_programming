#include <stdlib.h>
#include <time.h>
#include <math.h>
/* more headers goes there */

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
    char greater[] = "and is greater than 5";
    char less[] = "and is less than 6 and not 0";
    char zero[] = "and is 0";
    
    last_digit = n%10;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
    if (last_digit > 5)
    {
        printf("The last digit of %d is %d %s", n, last_digit, greater);
    }
    else if (last_digit < 6 && last_digit != 0)
    {
        printf("The last digit of %d is %d %s", n, last_digit, less);
    }
    else
    {
        printf("The last digit of %d is %d %s", n, last_digit, zero);
    }
    
	return (0);
}