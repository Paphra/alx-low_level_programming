#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to be searched
 * @accept: the string containing the bytes to be searched from @s
 * Return: the pointer to any of the bytes found
 */
char *_strpbrk(char *s, char *accept)
{
	char *ret = 0;
	char *_acc = accept;

	while (*s != '\0')
	{
		_acc = accept;
		while (*_acc != '\0')
		{
			if (*_acc == *s)
			{
				ret = s;
				break;
			}
			_acc++;
		}
		if (ret != 0)
			break;
		s++;
	}

	return (ret);

}
