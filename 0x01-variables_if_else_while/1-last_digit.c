#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * print if a random number's last digit is greater than 5 or less than 6 or is 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("The last digit of %d is %d and is greater than 5\n", n);
	}
	else if (n > 0)
	{
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n);
	}
	else
	{
		printf("The last digit od=f %d is %d and is zero\n", n);
	}
	return (0);
}
