#include "main.h"

/**
 * print_triangle - prints triangles
 *
 * @size: int
 * Return: 0
 */
void print_triangle(int size)
{
	int c, d;

	for (c = 0; c < size; c++)
	{
		for (d = 0; d < size - c - 1; d++)
		{
			_putchar(' ');
		}
		for (d = size - c - 1; d < size; d++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

