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
	int i, j;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			for (i = 0; i < 26; i++)
			{
				for (j = 0; j < 26; j++)
				{
					if (i == j && *str == lower[i])
						*str = upper[j];
				}
			}
		}
		str++;
	}
	return (_str);
}
