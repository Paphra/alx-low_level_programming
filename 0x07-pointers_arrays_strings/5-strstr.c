#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to search from
 * @needle: the substring to search
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *_nee = needle;
	char *_hay = haystack;

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		_hay = haystack;
		_nee = needle;
		while (*_nee != '\0' && *_hay == *_nee)
		{
			_hay++;
			_nee++;
		}
		if (*_nee == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
