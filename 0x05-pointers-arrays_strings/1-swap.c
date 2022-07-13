#include "main.h"

/**
 * swap_int - func
 *
 * @a: pointer to int
 * @b: pointer to int
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

