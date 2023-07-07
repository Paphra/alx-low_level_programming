#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: the number of args
 * @argv: the array of args
 * Return: 0 - success,
 * - 1 for error due to no args
 */
int main(int argc, char **argv)
{
	int num1, num2;
	int prod = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	prod = num1 * num2;
	printf("%d\n", prod);

	return (0);
}
