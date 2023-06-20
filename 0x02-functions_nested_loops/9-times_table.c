#include "main.h"

/**
 * times_table - print the 9 times table
 *
 * Description: Prints the 9 times table starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int row, col;
	int res;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			res = row * col;
			if ((res / 10) == 0)
			{
				if (col != 0)
					_putchar(' ');
			} else
			{
				_putchar('0' + (res / 10));
			}
			_putchar('0' + (res % 10));
			if (col != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
