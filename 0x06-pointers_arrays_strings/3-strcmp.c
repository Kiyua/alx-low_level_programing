#include "main.h"

/**
 * _strcmp - func
 *
 * @s1: pointer to char
 * @s2: pointer to char
 *
 * Return: pointer
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

