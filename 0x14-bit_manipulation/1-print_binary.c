#include "main.h"

/**
 * print_iter - func
 * @n: unisgned long int
 */
void print_iter(unsigned long int n)
{
	if (n > 0)
	{
		print_iter(n / 2);
		_putchar('0' + (n % 2));
	}
}

/**
 * print_binary - func
 *
 * @n: unsigned long int
 */
void print_binary(unsigned long int n)
{
	if (n > 0)
		print_iter(n);
	else
		_putchar('0');
}
