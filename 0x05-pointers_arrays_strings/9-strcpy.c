#include "main.h"

/**
 * _strcpy - func
 *
 * @src: pointer to char
 * @dest: pointer to char
 * Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	char *ch;

	ch = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (ch);
}

