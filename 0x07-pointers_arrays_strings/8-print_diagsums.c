#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - func
 *
 * @a: int pointer
 * @size: int
 */
void print_diagsums(int *a, int size)
{
	int i, j, leftDiagSum, rightDiagSum;

	leftDiagSum = 0;
	rightDiagSum = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				leftDiagSum = leftDiagSum + *a;
			}
			if (i == (size - 1 - j))
			{
				rightDiagSum = rightDiagSum + *a;
			}
			a++;
		}
	}

	printf("%d, %d\n", leftDiagSum, rightDiagSum);
}
