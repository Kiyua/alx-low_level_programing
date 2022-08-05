#include "3-calc.h"
#include <stdio.h>

/**
 * main - main
 * @argc: int
 * @argv: char
 * Return: int
 */
int main(int argc, char *argv[])
{
	int op1, op2, res;
	char *op;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op1 = atoi(argv[1]);
	op2 = atoi(argv[3]);
	op = argv[2];

	op_func = get_op_func(op);
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' || *op == '%') && op2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	res = op_func(op1, op2);
	printf("%d\n", res);
	return (0);
}
