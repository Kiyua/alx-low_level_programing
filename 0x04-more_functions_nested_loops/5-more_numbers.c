#include "main.h"

/**
 * more_numbers - prints digits
 *
 * Return: 0
 */
void more_numbers(void)
{
	int x;
	char c;

	for (x = 0; x < 10; x++)
	{
		for (c = 0; c <= 14; c++)
		{
			int d;

			d = c % 10;
			if (c >= 10)
			{
				_putchar('1');
			}
			_putchar('0' + d);
		}
		_putchar('\n');
	}
}

