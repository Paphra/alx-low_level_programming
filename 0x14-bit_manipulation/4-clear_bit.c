#include "main.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0
 * @n: pointer to the number that contains the bits
 * @index: teh index of the bit to manipulate
 * Return: 1 if it worked, else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(*n) * 8)
		return (-1);

	mask = 1UL << index;
	mask = ~mask;
	*n = *n & mask;

	return (1);
}
