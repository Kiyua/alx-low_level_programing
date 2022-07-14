#include "main.h"

/**
 * _atoi - func
 *
 * @s: char
 * Return: int
 */
int _atoi(char *s)
{
	int n, sign;

	n = 0;
	sign = 1;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign = -sign;
		}
		else if (*s >= '0' && *s <= '9')
		{
			n = (n * 10) + (*s - '0');
		}
		else if (n > 0)
		{
			break;
		}
		s++;
	}

	return (sign * n);
}
