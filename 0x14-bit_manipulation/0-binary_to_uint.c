#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - func
 *
 * @b: char pointer
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);

	while (*b != '\0')
	{
		switch (*b)
		{
			case '1':
				num = (num * 2) + 1;
				break;
			case '0':
				num = num * 2;
				break;
			default:
				return (0);
		}
		b++;
	}

	return (num);
}
