#include "main.h"

/**
 * reverse_array - reverse an array of integers
 * @a: the array of integers
 * @n: the number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int cpy[200];

	for (i = 0; i < n; i++)
		cpy[i] = a[i];
	for (i = 0; i < n; i++)
		a[i] = cpy[n - i - 1];
}
