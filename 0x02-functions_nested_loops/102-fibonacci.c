#include <stdio.h>

/**
 * main - prints first fifty fibonacci numbers
 *
 * Return: returns 0
 */
int main(void)
{
	int n;
	long n1, n2, fibo;

	n1 = 1;
	n2 = 1;
	for (n = 1; n <= 50; n++)
	{
		if (n <= 2)
		{
			printf("1, ");
		}
		else
		{
			fibo = n1 + n2;
			printf("%ld", fibo);
			n1 = n2;
			n2 = fibo;
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

