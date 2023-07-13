#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memomrey for an array using malloc
 * @nmemb:number of elements
 * @size:the size of the array elemets
 * Return: pointer to void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int ttsz, i;
	void *ptr;
	char *bptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ttsz = nmemb * size;
	ptr = malloc(ttsz);
	if (ptr == NULL)
		return (NULL);

	bptr = (char *)ptr;
	for (i = 0; i < ttsz; i++)
		bptr[i] = 0;
	return (ptr);
}
