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
	int i;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (max - min); i++)
		ptr[i] = min + i;
	return (ptr);
}
