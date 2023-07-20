#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - sums all the arguments
 * @n: number of arguments
 * Return: sum of the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list params;
	int sum = 0;

	va_start(params, n);
	for (i = 0; i < n; i++)
		sum += va_arg(params, int);
	return (sum);
}
