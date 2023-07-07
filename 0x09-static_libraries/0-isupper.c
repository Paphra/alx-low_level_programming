#include "main.h"

/**
 * _isupper - checks a character whether it is upper or not
 * @c: character in integer form
 * Return: 1 - if uppercase
 *	0 - if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
