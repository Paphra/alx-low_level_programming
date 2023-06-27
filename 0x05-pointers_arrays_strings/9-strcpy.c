#include "main.h"

/**
 * _strcpy - copy string to another destination
 * @dest: destination to where the string should be copied
 * @src: source of the string
 * Return: *dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	char *original = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (original);
}
