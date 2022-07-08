#include "main.h"

/**
 * print_diagonal - prints lines
 *
 * @n: int
 * Return: 0
 */
void print_diagonal(int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		int d;

		for (d = 0; d < c; d++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');

	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}

