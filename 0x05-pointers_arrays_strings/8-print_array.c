#include "main.h"
#include <stdio.h>

/**
 * print_array - print the n elements of an array
 * @a: the array
 * @n: the number of elements to orint
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
