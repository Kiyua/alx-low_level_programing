#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - print opcodes
 * @c: char pointer
 * @n: int
 */
void print_opcodes(char *c, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
		printf("%.2hhx ", c[i]);

	printf("%.2hhx\n", c[n - 1]);
}

/**
 * main - func
 * @argc: int
 * @argv: pointer
 * Return: status
 */
int main(int argc, char **argv)
{
	int arg;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	arg = atoi(argv[1]);
	if (argc < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes((char *)&main, arg);
	return (0);
}
