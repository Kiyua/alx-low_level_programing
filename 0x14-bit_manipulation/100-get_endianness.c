#include "main.h"

/**
 * get_endianness - func
 *
 * Return: int
 */
int get_endianness(void)
{

	unsigned int x = 0x3210;
	char *c = (char *) &x;

	if (*c == 0x10)
		return (1);
	return (0);
}
