#include "main.h"

/**
 * helper - helping to make the square root recursion
 * @n: the number
 * @x: the first guess
 * Return: square root
 */
int helper(int n, int x)
{
	if (x * x == n)
		return (x);
	if (x * x > n)
		return (-1);

	return (helper(n, x + 1));
}

/**
 * _sqrt_recursion - returns the natural root of a number
 * @n: the number
 * Return: the natural square root, else -1 if no natural sqaure root
 */
int _sqrt_recursion(int n)
{
	int x = 0;

	if (n < 0)
		return (-1);
	return (helper(n, x));
}
