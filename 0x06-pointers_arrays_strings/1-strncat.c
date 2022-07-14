#include "main.h"

/**
 * _strncat - func
 *
 * @src: pointer to char
 * @dest: pointer to char
 * @n: int
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ch;
	int i;

	ch = dest;
	while (*dest != '\0')
	{
		dest++;
	}

	i = 0;
	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	*dest = '\0';
	return (ch);
}

