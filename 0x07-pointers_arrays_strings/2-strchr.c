#include "main.h"

/**
 * _strchr - func
 *
 * @s: char pointer
 * @c: char
 * Return: char
 */
char *_strchr(char *s, char c)
{
	char *ch;

	ch = s;
	while (*ch != '\0')
	{
		if (*ch == c)
		{
			return (ch);
		}
		ch++;
	}
	return ('\0');
}
