#include "main.h"

/**
 * rot13 - func
 *
 * @c: char
 * Return: char
 */
char *rot13(char *c)
{
	char *ch;

	ch = c;
	while (*c != '\0')
	{
		if ((*c >= 'a' && *c <= 'm') || (*c >= 'A' && *c <= 'M'))
		{
			*c = *c + 13;
		}
		else if ((*c >= 'n' && *c <= 'z') || (*c >= 'N' && *c <= 'Z'))
		{
			*c = *c - 13;
		}
		c++;
	}
	return (ch);
}
