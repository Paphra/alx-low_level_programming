#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog
 * - NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, nln, oln;
	dog_t *_dog;

	_dog = (dog_t *) malloc(sizeof(dog_t));
	if (_dog == NULL)
		return (NULL);
	nln = _sln(name);
	_dog->name = (char *) malloc(nln);
	if (_dog->name == NULL)
	{
		free(_dog);
		return (NULL);
	}
	for (i = 0; i < nln; i++)
		_dog->name[i] = name[i];

	_dog->age = age;

	oln = _sln(owner);
	_dog->owner = (char *) malloc(oln);
	if (_dog->owner == NULL)
	{
		free(_dog->name);
		free(_dog);
		return (NULL);
	}
	for (i = 0; i < oln; i++)
		_dog->owner[i] = owner[i];

	return (_dog);
}

/**
 * _sln - string length
 * @str: string
 * Return: the string length
 */
int _sln(char *str)
{
	int l = 0;

	while (str[l] != '\0')
		l++;
	l++;
	return (l);
}
