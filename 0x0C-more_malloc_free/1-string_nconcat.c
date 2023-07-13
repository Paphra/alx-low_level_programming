#include "main.h"
#include <stdlib.h>

/**
 * _sln - string length
 * @s: string
 * Return: string length
 */
int _sln(char *s)
{
	int ln = 0;

	if (s == NULL || *s == '\0')
		return (0);
	while (*s != '\0')
	{
		ln++;
		s++;
	}
	return (ln);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * @n: firstn - bytes of s2
 * Return: pointer to new string
 * - else NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *ptr;
	char *s1cp = s1;
	char *s2cp = s2;
	unsigned int ln1 = 0, ln2 = 0, ttln = 0;

	ln1 = _sln(s1cp);
	ln2 = _sln(s2cp);
	ttln = ln1;
	if (n >= ln2)
		ttln += ln2;
	else
	{
		ttln += n;
	}

	ptr = malloc(sizeof(char) * ttln);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ln1; i++)
		ptr[i] = s1[i];
	for (j = ln1; j < ttln; j++)
		ptr[j] = s2[j - ln1];
	ptr[j] = '\0';

	return (ptr);
}
