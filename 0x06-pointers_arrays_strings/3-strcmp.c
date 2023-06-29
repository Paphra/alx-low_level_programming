#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 - if @s1 and @s2 are equal
 *     - positive if @s1 > @s2
 *     - negative if @s1 < @s2
 */
int _strcmp(char *s1, char *s2)
{
	int result;

	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	result = *s1 - *s2;
	return (result);
}
