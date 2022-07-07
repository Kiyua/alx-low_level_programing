#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: int
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int d;

	if (n < 0)
	{
		n = n * -1;
	}
	d = n % 10;
	_putchar('0' + d);
	return (d);
}
