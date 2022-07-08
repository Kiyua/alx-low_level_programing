#include "main.h"

/**
 * print_most_numbers - prints digits
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	char c;

	for (c = 0; c <= 9; c++)
	{
		if (c != 2 && c != 4)
		{
			_putchar('0' + c);
		}
	}
	_putchar('\n');
}

