#include "main.h"

/**
 * print_times_table - print the @n times table
 * @n: the times of times
 *
 * Description: Prints the @n times table starting with 0
 *
 * Return: void
 */
void print_times_table(int n)
{
	int row, col, res;

	if (n <= 15 && n >= 0)
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				res = row * col;
				if ((res / 10) == 0)
				{
					if (col != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
				} else
				{
					if ((res / 10) > 9)
					{
						_putchar('0' + ((res / 10) / 10));
						_putchar('0' + ((res / 10) % 10));
					} else
					{
						_putchar(' ');
						_putchar('0' + (res / 10));
					}
				}
				_putchar('0' + (res % 10));
				if (col != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
