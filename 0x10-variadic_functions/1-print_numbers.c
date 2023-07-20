#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers separated by a separator
 * @separator: the separator symbol to use
 * @n: number of numbers
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list params;
	int arg;

	va_start(params, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(params, int);
		printf("%d", arg);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
