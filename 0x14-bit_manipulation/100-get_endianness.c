#include "main.h"

/**
 * get_endianness - checkes the endianness
 * Return: 0 if big endian, else 1 for little endian
 */
int get_endianness(void)
{
	unsigned int x;
	int result;
	char *c;

	c = (char *)&x;
	result = (int)*c;

	return (result);
}
