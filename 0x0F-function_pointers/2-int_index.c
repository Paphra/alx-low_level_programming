#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: size of the array
 * @cmp: the pointer to the function that compares
 * Return: index of the integer
 * - -1 if no element matches and if @size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}

	}
	return (-1);
}
