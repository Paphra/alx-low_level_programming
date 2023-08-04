#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number which contains the bits to change
 * @index: the index whose bit is to set
 * Return: 1 if it worked, else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(*n) * 8)
		return (-1);
	mask = 1UL << index;
	*n = *n | mask;

	return (1);
}
