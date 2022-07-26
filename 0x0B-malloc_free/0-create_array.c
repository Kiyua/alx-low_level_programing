#include "main.h"
#include <stdlib.h>

/**
 * create_array - func
 * @size: unsigned int
 * @c: char
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size * sizeof(c));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}

