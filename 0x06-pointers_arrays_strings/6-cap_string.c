#include "main.h"

/**
 * cap_string - func
 *
 * @c: char
 * Return: char
 */
char *cap_string(char *c)
{
	char *ch;
	int prevAlpha;

	ch = c;
	prevAlpha = 0;
	while (*c != '\0')
	{
		if (*c == ',' || *c == ';' || *c == '.' || *c == '!' || *c == '?'
			|| *c == '"' || *c == '(' || *c == ')' || *c == '{' || *c == '}'
			|| *c == ' ' || *c == '\t' || *c == '\n')
		{
			prevAlpha = 0;
		}
		else
		{
			if (*c >= 'a' && *c <= 'z' && !prevAlpha)
			{
				*c = *c + 'A' - 'a';
			}
			prevAlpha = 1;
		}
		c++;
	}
	return (ch);
}
