#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - func
 * @s1: char
 * @s2: char
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	unsigned int i, size1, size2;

	size1 = 0;
	size2 = 0;
	if (s1 != NULL)
		size1 = strlen(s1);
	if (s2 != NULL)
		size2 = strlen(s2);

	arr = malloc((size1 + size2 + 1) * sizeof(*arr));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		arr[i] = s1[i];

	for (i = 0; i < size2; i++)
		arr[size1 + i] = s2[i];

	return (arr);
}

