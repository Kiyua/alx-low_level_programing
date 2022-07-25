#include <stdio.h>
#include <stdlib.h>

/**
 * main - func
 *
 * @argc: int
 * @argv: pointer
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int num, change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = 0;
	num = atoi(argv[1]);
	
	if (num > 0)
	{
		change = change + (num / 25);
		num = num % 25;

		change = change + (num / 10);
		num = num % 10;

		change = change + (num / 5);
		num = num % 5;

		change = change + (num / 2);
		num = num % 2;

		change = change + num;
	}
	printf("%d\n", change);
	return (0);
}
