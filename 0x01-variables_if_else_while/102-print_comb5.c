#include <stdio.h>

/**
 * main - Entry point
 *
 * print alphabets a to z
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c, d;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = a; c <= '9'; c++)
			{
				for (d = b; d <= '9'; d++)
				{
					if (a != c || b != d)
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);
						if (a != '9' || b != '8' || c != '9' || d != '9')
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
