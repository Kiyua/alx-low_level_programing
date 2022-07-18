#include "main.h"

/**
 * _memset - func
 * @s: char pointer
 * @b: char
 * @n: int
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ch;

	ch = s;
	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}

	return ch;
}
