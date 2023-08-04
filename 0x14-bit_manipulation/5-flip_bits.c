#include "main.h"

/**
 * flip_bits - get the number of bits required to flip to to change numbers
 * @n: the number from
 * @m: the number to
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	unsigned int count = 0;

	x = n ^ m;
	while (x > 0)
	{
		count += x & 1;
		x >>= 1;
	}

	return (count);
}
