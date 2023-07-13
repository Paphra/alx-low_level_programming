#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: starting point of the array elements
 * @max: last element of the array
 * Return: pointer to the created aray
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, sz;

	if (min > max)
		return (NULL);
	sz = max - min + 1;

	ptr = (int *)malloc(sizeof(int) * sz);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < sz; i++)
		ptr[i] = min++;
	return (ptr);
}
