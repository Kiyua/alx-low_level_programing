#include "main.h"

/**
 * _isdigit - return 1 if char is a digit, 0 otherwise
 *
 * @c: int
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

