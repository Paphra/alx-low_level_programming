#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number
 * Return: the factorial (@n!) or -1 for error of negative factorial
 */
int factorial (int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
