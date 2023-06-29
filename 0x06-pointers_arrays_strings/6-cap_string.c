#include "main.h"

/**
 * _islower - check whether a char is not lowercase
 * @c: the char
 * Return: 0 - if not lowercase, 1 - if lowercase;
 */
int _islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

/**
 * _toupper - change a char to upercase
 * @c: the char
 * Return: the capilized char
 */
char _toupper(char c)
{
	char u[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char l[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (c == l[i])
			break;
	}
	return (u[i]);
}

/**
 * _issep - check whether a char is one of the separators
 * @c: the char
 * Return: 0 - if not a separator, 1 - if it is one of them
 */
int _issep(char c)
{
	int i;
	char sep[] = {
		' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '{'
	};

	for (i = 0; i < 13; i++)
	{
		if (c == sep[i])
			return (1);
	}
	return (0);
}

/**
 * cap_string - capitalize all words of a string
 * @str: the string that contains words to capitalize;
 * Return: the pointer to the original string
 */
char *cap_string(char *str)
{
	char *_str = str;
	char prev_char = *str;

	if (_islower(prev_char))
		*str = _toupper(prev_char);
	str++;
	do {
		if (_islower(*str) && _issep(prev_char))
			*str = _toupper(*str);
		prev_char = *str;
		str++;
	} while (*str != '\0');
	return (_str);
}
