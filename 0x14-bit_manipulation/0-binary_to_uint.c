#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string that contains 0' and 1's
 * Return: the result of the coversion
 * - else 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if  (*b != '0' && *b != '1')
			return (0);
		result <<= 1;
		if (*b == '1')
			result += 1;
		b++;
	}
	return (result);
}
