#include <stdlib.h>

/**
 * malloc_checked - func
 * @b: unsigned int
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(sizeof(p) * b);
	if (p == NULL)
	{
		return ((void *) 98);
	}
	return ((void *) p);
}
