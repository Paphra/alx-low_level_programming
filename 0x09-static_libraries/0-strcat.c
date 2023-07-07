#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: base string to add to, it's pointer
 * @src: the string to add to @dest, it's pointer
 * Description: joining two strings
 * Return: destination pointer of the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *start_dest = dest;

	while (*dest != '\0')
		dest++;
	do {
		*dest = *src;
		dest++;
		src++;
	} while (*src != '\0');

	*dest = '\0';

	return (start_dest);
}
