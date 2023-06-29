#include "main.h"

/**
 * leet - encode a string into 1337
 * @str: the string to be encoded
 * Return: the pointer to the original location
 */
char *leet(char *str)
{
	int i;
	char *_str = str;
	char maps[] = {
		'a', 'A', '4',
		'e', 'E', '3',
		'o', 'O', '0',
		't', 'T', '7',
		'l', 'L', '1'
	};

	while (*str != '\0')
	{
		for (i = 0; i < 15; i = i + 3)
		{
			if (*str == maps[i] || *str == maps[i + 1])
				*str = maps[i + 2];
		}
		str++;
	}
	return (_str);
}
