#include <stdio.h>

/**
 * main - print sum of even
 *
 * Return: returns 0
*/
int main(void)
{
	long n0, n1, fibo, sum;

	n0 = 1;
	n1 = 1;
	sum = 0;
	fibo = 0;
	while (fibo < 4000000)
	{
		fibo = n0 + n1;
		n0 = n1;
		n1 = fibo;
		if (fibo % 2 == 0)
		{
			sum = sum + fibo;
		}
	}
	printf("%ld\n", sum);
	return (0);
}

