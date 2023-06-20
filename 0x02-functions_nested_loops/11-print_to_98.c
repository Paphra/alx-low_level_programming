#include "main.h"

/**
 * print_to_98 - print all natural numbers from a given one to 98
 * @n: the starting point
 *
 * Description: Print all natural numbers starting from a given number @n
 *
 * Return: void
 */
void print_to_98(int n)
{
	int cur, limit, i, j;

	cur = n;
	limit = 99;
	if (cur > 98)
		limit = 97;
	do {
		i = cur / 10;
		j = cur % 10;
		if (cur < 0)
		{
			i = -i;
			j = -j;
			_putchar('-');
		}
		if (i != 0)
		{
			if (i > 9)
			{
				_putchar('0' + (i / 10));
				_putchar('0' + (i % 10));
			} else
			{
				_putchar('0' + i);
			}
		}
		_putchar('0' + j);
		if (cur != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		if (cur > limit)
			cur--;
		else
			cur++;
	} while (cur != limit);
	_putchar('\n');
}
