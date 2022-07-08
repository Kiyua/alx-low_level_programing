#include "main.h"

/**
 * _isupper - return 1 if char is uppercase, 0 otherwise
 *
 * @c: int
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

