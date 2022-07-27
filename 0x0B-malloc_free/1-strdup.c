#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - func
 * @str: char
 * Return: char
 */
char *_strdup(char *str)
{
	char *arr;
	unsigned int i, size;

	if (str == NULL)
		return (NULL);

	size = strlen(str);
	arr = malloc((size + 1) * sizeof(*arr));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = str[i];

	return (arr);
}

