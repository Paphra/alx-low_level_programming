#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: base string to add to, it's pointer
 * @src: the string to add to @dest, it's pointer
 * @n: upto @n bytes from the @src
 * Description: joining two strings
 * Return: destination pointer of the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *_dest = dest;
	char *_src = src;

	while (*dest != '\0')
		dest++;
	do {
		*dest = *src;
		dest++;
		src++;
	} while (src < _src + n && *src != '\0');

	*dest = '\0';

	return (_dest);
}
