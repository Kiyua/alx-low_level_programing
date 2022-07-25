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
		int num;

		num = atoi(argv[i]);
		if (num == 0 && *argv[i] != '0')
		{
			printf("Error\n");
			return (1);
		}

		sum = sum + atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
