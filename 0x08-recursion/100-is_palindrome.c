#include "main.h"

/**
 * _strlen - get string length
 * @s: the string
 * Return: length of string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * _helper - tests the palindrome nature
 * @s: the string
 * @start: start index
 * @end: end index
 * Return: 1, if palindrome, else 0
 */
int _helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string
 * Return: 1 if it is a palindrome, else 0
 */
int is_palindrome(char *s)
{
	int len = 0;

	len = _strlen(s);
	if (len == 0)
		return (1);

	return (_helper(s, 0, len - 1));
}
