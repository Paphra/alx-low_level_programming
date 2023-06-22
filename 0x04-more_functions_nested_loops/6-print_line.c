#include "main.h"

/**
 * print_line - print a straight line of a given number of characters
 * @n: the number of _ chars to print
 * Return: void
 */
void print_line(int n)
{
	int count;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
			_putchar('_');
	}

	_putchar('\n');
}
