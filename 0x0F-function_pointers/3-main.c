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
	int op1, op2;
	char *op;

	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}
	op1 = atoi(argv[1]);
	op2 = atoi(argv[3]);
	op = argv[2];

	if (op1 && op2 && (*op == '+' || *op == '-' || *op == '*'
		|| *op == '/' || *op == '%'))
	{
		int (*op_func)(int, int), res;

		if ((*op == '/' || *op == '%') && op2 == 0)
		{
			printf("Error\n");
			exit(98);
		}

		op_func = get_op_func(op);
		res = op_func(op1, op2);
		printf("%d\n", res);
		return (0);
	}

	printf("Error\n");
	exit(98);
}
