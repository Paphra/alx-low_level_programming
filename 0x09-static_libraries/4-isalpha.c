#include "main.h"

/**
 * _isalpha - check for alphabetic chars
 * @c: the integer representation of a character
 *
 * Description: Checks for alphabetic characters supplied as c in integer form
 *	No case discrimination
 *
 * Return: 1 if is alphabetic, 0otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
