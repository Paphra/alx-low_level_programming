#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * @n: number of times \ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int count;
	int spaces;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			for (spaces = 0; spaces < count; spaces++)
				_putchar(' ');
			
			_putchar('\\');
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
