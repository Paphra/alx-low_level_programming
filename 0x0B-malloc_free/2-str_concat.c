#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the newly allocated space
 * - NULL if fails
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, tt_len;
	unsigned int i, j;
	char *result;
	char *_s1 = s1;
	char *_s2 = s2;

	len1 = _strlen(_s1);
	len2 = _strlen(_s2);

	len2++;
	tt_len = len1 + len2;

	result = malloc(sizeof(char) * tt_len);

	if (result != NULL)
	{
		for (i = 0; i < len1; i++)
			result[i] = s1[i];
		if (s2 == NULL)
		{
			result[i] = '\0';
		} else
		{
			for (j = i; j < tt_len; j++)
				result[j] = s2[j - i];
		}
	}

	return (result);
}

/**
 * _strlen - find the length ofastring
 * @s: string to get length of
 *
 * Return: string lengh
 */
int _strlen(char *s)
{
	unsigned int len = 0;

	if (s != NULL)
	{
		while (*s != '\0')
		{
			len++;
			s++;
		}
	}
	return (len);
}
