#include "function_pointers.h"

/**
 * int_index - func
 * @array: int
 * @size: int
 * @cmp: func
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, comp;

	for (i = 0; i < size; i++)
	{
		comp = cmp(array[i]);
		if (comp != 0)
			return (i);
	}

	return (-1);
}
