#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the x value
 * @y: the power
 * Return: the result of the power else -1 for @y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
