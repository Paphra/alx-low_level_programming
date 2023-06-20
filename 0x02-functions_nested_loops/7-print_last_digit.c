#include "main.h"

/**
 * print_last_digit - Print last digit of a given number
 * @number: The given number (integer)
 *
 * Description: Prints the last digit of any given number
 *
 * Return: value of the last digit
 */
int print_last_digit(int number)
{
	int last;

	last = number % 10;
	if (last < 0)
		last = -last;

	_putchar('0' + last);

	return (last);
}
