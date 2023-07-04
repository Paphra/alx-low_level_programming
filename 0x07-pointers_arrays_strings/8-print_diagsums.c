#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: the square matrix array
 * @size: size of the square matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	long int sumi, sumj;

	sumi = 0;
	sumj = 0;

	for (i = 0; i < size; i++)
	{
		sumi += a[i * size + i];
		sumj += a[(i + 1) * size - (i + 1)];
	}
	printf("%ld, %ld\n", sumi, sumj);
}
