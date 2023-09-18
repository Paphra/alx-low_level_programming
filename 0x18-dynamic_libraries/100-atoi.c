#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: the string that contains the number
 * Return: the integer from conversion
 */
int _atoi(char *s)
{
	unsigned int result = 0;
	int sign = 1;

	while (*s != '\0')
	{
		if (*s == '-')
			sign *= -1;
		if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
		} else
		{
			if (result > 0)
				break;
		}
		s++;
	}

	return (result * sign);
}
