#include "main.h"

/**
 * _strcat - func
 *
 * @src: pointer to char
 * @dest: pointer to char
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	char *ch;

	ch = dest;
	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (ch);
}

