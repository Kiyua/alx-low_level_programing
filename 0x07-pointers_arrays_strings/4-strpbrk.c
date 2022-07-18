#include "main.h"

/**
 * _strpbrk - func
 *
 * @s: char pointer
 * @accept: char pointer
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	char *ch;

	while (*s != '\0')
	{
		ch = accept;
		while (*ch != '\0')
		{
			if (*ch == *s)
			{
				return (s);
			}
			ch++;
		}
		s++;
	}
	return ('\0');
}
