#include "main.h"

/**
 * _strspn - func
 *
 * @s: char pointer
 * @accept: pointer
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;

	count = 0;
	while (*accept != '\0')
	{
		char *ch;

		ch = s;
		while (*ch != '\0')
		{
			if (*ch == *accept)
			{
				count++;
				break;
			}
			ch++;
		}
		accept++;
	}
	return (count);
}
