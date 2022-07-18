#include "main.h"

/**
 * print_chessboard - func
 *
 * @a: char pointer
 */
void print_chessboard(char (*a)[8])
{
	int i;

	for (i = 0; i < 8; i++)
	{
		int j;
		char *arr;

		arr = a[i];
		for (j = 0; j < 8; j++)
		{
			_putchar(*arr);
			arr++;
		}
		_putchar('\n');
	}
}
