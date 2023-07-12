#include "main.h"
#include <stdlib.h>

/**
 * _wcount - word count
 * @s: the string to count words
 * Return: word count
 */
int _wcount(char *s)
{
	int count = 0;
	char prev;

	do {
		if (*s == ' ' && prev != ' ')
			count++;
		prev = *s;
		s++;
	} while (*s != '\0');
	count++;

	return (count);
}

/**
 * _ccount - char count
 * @s: string to count chars
 * @count: current count
 * Return: the char count
 */
int _ccount(char *s, int count)
{
	if (*s == ' ' && count > 0)
	{
		return (count);
	}
	if (*s == '\0')
		return (count);
	s++;
	count++;
	return (_ccount(s, count));
}

/**
 * strtow - splits a string into words
 * @str: pointer to the string
 *
 * Return: pointer to the 2d array
 */
char **strtow(char *str)
{
	char **arr;
	int i, j;
	int words = 0;
	int chars = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	words = _wcount(str);

	arr = (char **)malloc(sizeof(char *) * words);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < words; i++)
	{
		chars = _ccount(str, 0);
		arr[i] = (char *)malloc(sizeof(char) * chars);
		if (arr[i] == NULL)
		{
			return (NULL);
		}

		j = 0;

		while (*str != ' ' || *str != '\0')
		{
			arr[i][j] = *str;
			str++;
			j++;
		}
	}

	return (arr);
}
