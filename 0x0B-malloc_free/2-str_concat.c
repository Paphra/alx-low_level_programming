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
	unsigned int i,j;
	char *result;
	char *_s1 = s1;
	char *_s2 = s2;

	len1 = 0;
	len2 = 0;

	while (*_s1 != '\0' && s1 != NULL)
	{
		len1++;
		_s1++;
	}
	while (*_s2 != '\0' && s2 != NULL)
	{
		len2++;
		_s2++;
	}
	len2++;
	tt_len = len1 + len2;

	result = malloc(sizeof(char) * tt_len);

	if (result != NULL)
	{
		for (i = 0; i < len1; i++)
			result[i] = s1[i];
		for (j = i; j < tt_len; j++)
			result[j] = s2[j - i];
	}

	return (result);
}
