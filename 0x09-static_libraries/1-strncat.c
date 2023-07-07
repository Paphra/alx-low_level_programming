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

	while (*dest != '\0')
		dest++;
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (_dest);
}
