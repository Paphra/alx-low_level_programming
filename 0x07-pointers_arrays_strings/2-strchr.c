#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to search in
 * @c: the character to locate
 * Return: pointer to the character of NULL
 */
char *_strchr(char *s, char c)
{
	char *ret = 0;

	while (*s != '\0')
	{
		if (*s == c)
		{
			ret = s;
			break;
		}
		s++;
	}
	return  (ret);
}
