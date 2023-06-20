#include "main.h"

/**
 * jack_bauer - print every minute of the day
 *
 * Return: 0 always
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
			_putchar(':');
			_putchar('0' + (j / 10));
			_putchar('0' + (j % 10));

			if (i < 23 || j < 59)
				_putchar('\n');
		}
	}

	_putchar('\n');

}
