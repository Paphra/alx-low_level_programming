#include "main.h"

/**
 * _strncpy - copy string to another destination
 * @dest: destination to where the string should be copied
 * @src: source of the string
 * @n: up to @n bytes
 * Return: *dest pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *_dest = dest;
	char *_src = src;

	while (src < _src + n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	while (src < _src + n)
	{
		*dest = '\0';
		dest++;
		src++;
	}

	return (_dest);
}
