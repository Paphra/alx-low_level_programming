#include "dog.h"
#include <stdio.h>

#define EMPTY "(nil)"

/**
 * print_dog - prints a struct dog
 * @d: type of struct dog
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name == NULL ? EMPTY : d->name);
	if (d->age)
		printf("Age: %f\n", d->age);
	else
		printf("Age: %s\n", EMPTY);
	printf("Owner: %s\n", d->owner == NULL ? EMPTY : d->owner);
}
