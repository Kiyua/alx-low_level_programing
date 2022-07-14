#include "main.h"

/**
 * print_rev - func
 *
 * @c: pointer to char
 */
void print_rev(char *c)
{
	int i, count;

	count = 0;
	while (*c != '\0')
	{
		c++;
		count++;
	}
	
	c--;
	for (i = count; i >= 0; i--)
	{
		_putchar(*c);
		c--;
	}
	_putchar('\0');
	_putchar('\n');
}

