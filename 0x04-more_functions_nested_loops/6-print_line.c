#include "main.h"

/**
 * print_line - prints lines
 *
 * @n: int
 * Return: 0
 */
void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

