#include "main.h"

/**
 * _sqrt - func
 * @n: int
 * @x: int
 *
 * Return: int
 */
int _sqrt(int n, int x)
{
	if (x * x == n)
		return (x);
	if (x > (n / 2))
		return (-1);
	return (_sqrt(n, x + 1));
}

/**
 * _sqrt_recursion - func
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
