#include "main.h"
#include <stddef.h>

/**
 * get_bit - func
 *
 * @n: unsigned long int
 * @index: unsigned int
 *
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if ((size_t) index > sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
