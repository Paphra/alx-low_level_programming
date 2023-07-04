#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: the array that contains the arrangement of a chessboard
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	unsigned long int i, j;

	for (i = 0; i < sizeof(a); i++)
	{
		for (j = 0; j < sizeof(a[i]); j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
