#include <stdio.h>

/**
 * print_array - func
 *
 * @a: pointer to int
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *a);
		if (i < n - 1)
		{
			printf(", ");
		}
		a++;
	}
	printf("\n");
}

