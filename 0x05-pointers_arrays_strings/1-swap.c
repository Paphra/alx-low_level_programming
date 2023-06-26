#include "main.h"

/**
 * swap_int - swap integer values betwen two points
 * @a: first inter pointer
 * @b: second integer pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int loc_a;
	int loc_b;

	loc_a = *a;
	loc_b = *b;

	*a = loc_b;
	*b = loc_a;
}
