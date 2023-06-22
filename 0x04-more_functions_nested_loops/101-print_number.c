#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: the integer to print
 * Return: void
 */
void print_number(int n)
{
	int abs;
	int reversed;
	int digit;

	abs = n;
	if (abs == 0)
	{
		_putchar('0');
	} else
	{
		if (abs < 0)
		{
			_putchar('-');
			abs = -abs;
		}

		reversed = 0;
		while (abs != 0)
		{
			digit = abs % 10;
			reversed = reversed * 10 + digit;
			abs /= 10;
		}

		while (reversed != 0)
		{
			digit = reversed % 10;
			_putchar('0' + digit);
			reversed /= 10;
		}
	}
}
