#include <stdio.h>

/**
 * main - prints first fifty fibonacci numbers
 *
 * Return: returns 0
 */
int main(void)
{
	int n;
	long n0, n1, fibo;

	n0 = 1;
	n1 = 1;
	for (n = 1; n <= 50; n++)
	{
		if (n < 2)
		{
			printf("1, ");
		}
		else
		{
			fibo = n0 + n1;
			printf("%ld", fibo);
			n0 = n1;
			n1 = fibo;
			if (n < 50)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
	}
	return (0);
}

