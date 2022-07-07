#include "main.h"

/**
 * times_table - prints 9s times table
 *
 */
void times_table(void)
{
	int x, y, multiple, d1, d2;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			multiple = x * y;
			d1 = multiple / 10;
			d2 = multiple % 10;
			if (d1 > 0)
			{
				_putchar('0' + d1);
			}
			else if (y > 0)
			{
				_putchar(' ');
			}
			_putchar('0' + d2);
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

