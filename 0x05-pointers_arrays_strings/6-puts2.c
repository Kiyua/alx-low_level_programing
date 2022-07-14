#include "main.h"

/**
 * puts2 - func
 *
 * @c: pointer to char
 */
void puts2(char *c)
{
	int i;

	i = 0;
	while (*c != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*c);
		}
		i++;
		c++;
	}
	_putchar('\n');
}

