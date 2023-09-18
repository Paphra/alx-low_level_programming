#include "main.h"

/**
 * _isdigit - checks a character if it is a digit
 * @c: the integer representation of the character
 * Return: 1 if @c is a digit
 *	0 - otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
