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
	char *_needle = needle;

	while (*haystack != '\0')
	{
		_needle = needle;
		while (*_needle != '\0')
		{
			if (*_needle == *haystack)
			{
				if (ret == 0)
					ret = haystack;
			} else
			{
				if (ret != 0)
					ret = 0;
				break;
			}
			haystack++;
			_needle++;
		}
		if (ret != 0)
			break;
		haystack++;
	}
	return (ret);
}
