#include "main.h"

/**
 * i_div - check whether a nmber is divisible by another
 * @n: the number
 * @div: divisor
 * Return: 1 if true, else 0
 */
int is_div(int n, int div)
{
	if (div == 1)
		return (0);
	if (n % div == 0)
		return (1);
	return is_div(n, div - 1);
}

/**
 * is_prime_number - checks if the interger is prime or not
 * @n: the integer
 * Return: 1 if true else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (!is_div(n, n - 1));
}
