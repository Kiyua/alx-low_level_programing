#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - func
 * @n: int
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int total;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0, total = 0; i < n; i++)
		total = total + va_arg(args, int);
	va_end(args);

	return (total);
}
