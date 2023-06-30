#include "main.h"

/**
 * print_number - print an integer
 * @n: the integer
 * Return: void
 */
void print_number(int n)
{
	int div;
	int digit;
	int neg = 0;

	div = 1;

	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	while (n / div >= 10)
		div *= 10;
	if (neg)
		_putchar(45);
	while (div > 0)
	{
		digit = n / div;
		_putchar('0' + digit);
		n %= div;
		div /= 10;
	}
}
