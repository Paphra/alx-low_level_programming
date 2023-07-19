#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - does simple calculations
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 - success
 * else exit with:
 * - 98 if @argc != 4
 * - 99 if operator not part of the simple ops
 * - 100 if mod or div by 0
 */
int main(int argc, char **argv)
{
	int num1, num2, i;
	char *op;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	if ((*op == '/' || *op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	op_func = get_op_func(op);
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", op_func(num1, num2));

	return (0);
}
