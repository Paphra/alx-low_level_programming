#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it
 * @size: the size of the array
 * @c: the character to initialize the array
 * 
 * Return: the pointer to the array
 * - NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (arr);
	else
	{
		for (i = 0; i < size; i++)
			arr[i] = c;
	}

	return (arr);

}
