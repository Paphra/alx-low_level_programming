#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: the number from which to locate the bit
 * @index: the index from which the bit to get is located
 * Return: value of the bit at index, else -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index >= sizeof(n) * 8)
		return (-1);
	bit = (n >> index) & 1;

	return (bit);
}
