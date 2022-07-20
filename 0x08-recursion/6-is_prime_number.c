#include "main.h"

/**
 * _prime - func
 * @n: int
 * @x: int
 *
 * Return: int
 */
int _prime(int n, int x)
{
	if (n % x == 0)
		return (0);
	if (x > (n / 2))
		return (1);
	return (_prime(n, x + 2));
}

/**
 * is_prime_number - func
 * @n: int
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n % 2 == 0)
		return (0);
	return (_prime(n, 3));
}
