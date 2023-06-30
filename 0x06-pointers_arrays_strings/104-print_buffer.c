#include "main.h"

/**
 * print_buffer - print buffer to n bytes
 * @b: pointer to the buffer
 * @n: upto @n bytes
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size < 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		for (j = 28; j => 0; j -= 4)
			_putchar(hex_digits[(i >> j) & 0xF]);
		_putchar (' ');

		for (j = i; j < i + 10; j++)
		{
			if (i < size)
			{
				_putchar(hex_digits[(b[j] >> 4) & 0xF]);
				_putchar(hex_digits[b[i] & 0xF]);
			} else
			{
				_putchar(' ');
				_putchar(' ');
			}
			if (j % 2 != 0)
				_putchar(' ');
		}
		for (j = i; j < i + 10 && j < size; j++)
		{
			if (isprint(b[j]))
				_putchar(b[j]);
			else
				_putchar('.');
		}
		_putchar('\n');
	}
}
