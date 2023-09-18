#include "main.h"

/**
 * _strspn - gets the lenght of a prefix substring
 * @s: the string to check
 * @accept: the substring
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	char *_s = s;
	unsigned int len = 0;

	while (*accept != '\n')
	{
		_s = s;
		while (*_s != '\0' && *_s >= 'A' && *_s <= 'z')
		{
			if (*_s == *accept)
				len++;
			_s++;
		}
		accept++;
	}

	return (len);
}
