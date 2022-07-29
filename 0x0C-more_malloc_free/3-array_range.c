#include <stdlib.h>

/**
 * array_range - func
 * @min: int
 * @max: int
 * Return: int
 */
int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(min) * (max - min + 1));
	if (p == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		p[i - min] = i;

	return (p);
}
