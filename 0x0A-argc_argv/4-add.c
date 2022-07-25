#include <stdio.h>
#include <stdlib.h>

/**
 * main - func
 *
 * @argc: int
 * @argv: pointer
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		char *d;

		d = argv[i];
		while (*d != '\0')
		{
			if (*d < '0' || *d > '9')
			{
				printf("Error\n");
				return (1);
			}
			d++;
		}

		sum = sum + atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
