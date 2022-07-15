#include "main.h"

/**
 * _strncpy - func
 *
 * @src: pointer to char
 * @dest: pointer to char
 * @n: int
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ch;
	int i;

	i = 0;
	ch = dest;
	while (i < n)
	{
		*dest = *src;
		dest++;
		if (*src != '\0')
		{
			src++;
		}
		i++;
	}

	return (ch);
}

