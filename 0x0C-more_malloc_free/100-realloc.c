#include "main.h"
#include <stdlib.h>

/**
 * _realloc - re-allocates a memory block usng malloc and free
 * @ptr: pointer to he previous block
 * @old_size: old sizeof the previous block
 * @new_size: new size to allocate
 * Return: pointer to the newallocation
 * - else NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr;
	unsigned int min_size, i;
	char *ntmp;
	char *tmp = (char *) ptr;

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);
	if (old_size < new_size)
		min_size = old_size;
	else
		min_size = new_size;
	ntmp = (char *)nptr;
	for (i = 0; i < min_size; i++)
		ntmp[i] = tmp[i];
	free(ptr);

	return (nptr);
}
