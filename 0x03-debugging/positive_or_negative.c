#include <stdio.h>

/**
 * positive_or_negative - Entry point
 * 
 * n@: int
 * print if a random number is positive or negative or zero
 * Return: Always 0 (Success)
 */
void positive_or_negative(int n)
{
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
}
