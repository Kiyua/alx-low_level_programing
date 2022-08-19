#include "main.h"
#include <stddef.h>

/**
 * flip_bits - func
 *
 * @n: unsigned long int
 * @m: unsigned long int
 *
 * Return: unsigned long int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor = n ^ m;

	while (xor > 0)
	{
		count += (xor % 2);
		xor /= 2;
	}

	return (count);
}
