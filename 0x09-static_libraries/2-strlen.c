#include "main.h"

/**
 * _strlen - return the length of the string
 * @s: the string for which the length to be got
 * Return: the length of the string
 */
int _strlen(char *s)
{
	char *ptr = s;

	while (*ptr != '\0')
		ptr++;

	return (ptr - s);
}
