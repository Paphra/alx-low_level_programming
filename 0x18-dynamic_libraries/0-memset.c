#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the string buffer
 * @b: the constant byte
 * @n: the positions of the buffer to be filled
 * Return: pointer to the buffer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
