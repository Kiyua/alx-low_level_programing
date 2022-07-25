#include <stdio.h>

/**
 * main - func
 *
 * @argc: int
 * @argv: pointer
 * Return: int
 */

int main(int argc, char *argv[])
{
	argv++;
	printf("%d\n", argc - 1);
	return (0);
}
