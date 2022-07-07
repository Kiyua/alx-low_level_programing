#include <stdio.h>

/**
 * main - main
 *
 * Return: returns 0
 */
int main(void)
{
	int x, sum;

	for (x = 0; x < 1024; x = x + 3)
	{
		sum = sum + x;
	}
	for (x = 0; x < 1024; x = x + 5)
	{
		sum = sum + x;
	}
	printf("%d\n", sum);
	return (0);
}

