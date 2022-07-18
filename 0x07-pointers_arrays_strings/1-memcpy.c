#include "main.h"

/**
 * _memcpy - func
 * @dest: char pointer
 * @src: char pointer
 * @n: int
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *ch;

	ch = dest;
	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (ch);
}
