#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the dog memory
 * @d: the pointer to the dog_t dog
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
