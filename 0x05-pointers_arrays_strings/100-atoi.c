#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: the string that contains the number
 * Return: the integer from conversion
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int result = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			s++;
			if (*s >= '0' && *s <= '9')
				sign = -1;
			s--;
		}
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
