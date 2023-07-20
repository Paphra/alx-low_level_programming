#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - prints strings
 * @separator: the sep char
 * @n: number of arguments
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list params;
	char *arg;

	va_start(params, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(params, char*);
		if (arg == NULL)
			printf("(nil)");
		else
			printf("%s", arg);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
