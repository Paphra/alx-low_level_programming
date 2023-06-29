#include "main.h"

/**
 * string_toupper - change all lowercase letters of a string to uppercase
 * @str: the string pointer
 * Return: the pointer to the string
 */
char *string_toupper(char *str)
{
	char *_str = str;
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			for (i = 0; i < 26; i++)
			{
				if (*str == lower[i])
					*str = upper[i];
			}
		}
		str++;
	}
	return (_str);
}
