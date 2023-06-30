#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: the string to encode
 * Return: the encoded string pointer
 */
char *rot13(char *str)
{
	char *_str = str;
	char *ptr;
	int i;

	while (*str != '\0')
	{
		ptr = str;
		i = 0;
		while ((*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= 'a' && *ptr <= 'z'))
		{
			if ((*ptr >= 'A' && *ptr <= 'M') || (*ptr >= 'a' && *ptr <= 'm'))
				*ptr += 13;
			else
				*ptr -= 13;
			ptr++;
			i++;
		}
		str += i;
	}
		
	return (_str);
}
