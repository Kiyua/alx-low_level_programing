#include "main.h"

/**
 * _strlen - func
 *
 * @c: pointer to char
 * Return: count
 */
int _strlen(char *c)
{
	int count = 0;

	while (*c != '\0')
	{
		count++;
		c++;
	}

	return (count);
}

