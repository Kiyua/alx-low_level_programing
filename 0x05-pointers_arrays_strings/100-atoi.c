#include "main.h"
#include <limits.h>

/**
 * _atoi - func
 *
 * @s: char
 * Return: int
 */
int _atoi(char *s)
{
	int n, sign, max;

	max = INT_MAX / 10;
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
			if (n > max || (n == max && *s >= '8'))
			{
				if (sign == -1)
				{
					return (INT_MIN);
				}
				return (INT_MAX);
			}
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
