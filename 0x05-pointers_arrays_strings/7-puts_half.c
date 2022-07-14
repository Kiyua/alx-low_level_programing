#include "main.h"

/**
 * puts_half - func
 *
 * @c: pointer to char
 */
void puts_half(char *c)
{
	int i, count;
	char *ch;

	count = 0;
	ch  = c;
	while (*ch != '\0')
	{
		ch++;
		count++;
	}

	for (i = 0; i < count; i++)
	{
		if (i >= count / 2)
		{
			_putchar(*c);
		}
		c++;
	}
	_putchar('\n');
}

