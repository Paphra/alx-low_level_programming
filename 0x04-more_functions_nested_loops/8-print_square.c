#include "main.h"

/**
 * print_square - Print a square of # chars
 * @size: the size of the square
 * Return: void
 */
void print_square(int size)
{
	int row;
	int col;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size; col++)
				_putchar('#');
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
