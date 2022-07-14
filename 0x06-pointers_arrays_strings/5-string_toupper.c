#include "main.h"

/**
 * string_toupper - func
 *
 * @c: char
 * Return: char
 */
char *string_toupper(char *c)
{
	char *upper;

	upper = c;
	while (*c != '\0')
	{
		if (*c >= 'a' && *c <= 'z')
		{
			*c = *c + 'A' - 'a';
		}
		c++;
	}
	return (upper);
}
