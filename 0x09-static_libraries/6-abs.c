#include "main.h"

/**
 * _abs - find the absolute value of a number
 * @num: the number of any sign
 *
 * Description: Finds the absolute value of any signed number
 *
 * Return: the absolute value of the number given
 */
int _abs(int num)
{
	int result;

	if (num < 0)
		result = -num;
	else
		result = num;

	return (result);
}
