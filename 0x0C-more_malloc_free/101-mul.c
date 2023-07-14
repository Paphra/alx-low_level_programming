#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector, array of arguments in string form
 *
 * Return: 0 - success
 * - exit with 98 with error
 */
int main(int argc, char **argv)
{
	unsigned long int num1, num2, prod;

	if (argc != 3)
		_error();
	if (_digits(argv[1]) == 0 || _digits(argv[2]) == 0)
		_error();
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%lu\n", prod);

	return (0);
}

/**
 * _error - print error and exit
 * Return: void;
 */
void _error(void)
{
	_puts("Error\n");
	exit(98);
}

/**
 * _puts - print string
 * @str: the string
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}

/**
 * _digits - check whether a string only contains digits
 * @str: the string
 * Return: 1 - only digits
 * - 0 - with alphas
 */
int _digits(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}
