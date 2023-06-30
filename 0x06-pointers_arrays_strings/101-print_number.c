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

	div = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n / div >= 10)
		div *= 10;
	while (div > 0)
	{
		digit = n / div;
		_putchar('0' + digit);
		n %= div;
		div /= 10;
	}
}
