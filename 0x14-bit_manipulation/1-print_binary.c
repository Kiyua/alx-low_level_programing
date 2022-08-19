#include "main.h"

/**
 * print_binary - func
 *
 * @n: unsigned long int
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n / 2);
		_putchar('0' + (n % 2));
	}
	else
		_putchar('0' + n);
}
