#include "main.h"

/**
 * _puts - func
 *
 * @c: pointer to char
 */
void _puts(char *c)
{
	while (*c != '\0')
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');
}

