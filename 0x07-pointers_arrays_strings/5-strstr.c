#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to search from
 * @needle: the substring to search
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *ret = 0;
	char *_nee = needle;
	char *_hay = haystack;

	while (*haystack != '\0')
	{
		_hay = haystack;
		_nee = needle;
		while (*_nee != '\0' && *_hay == *_nee)
		{
			if (ret == 0)
				ret = haystack;
			_hay++;
			_nee++;
		}
		if (*_nee == '\0' && ret != 0)
			break;
		haystack++;
	}
	return (ret);
}
