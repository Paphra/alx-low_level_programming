#include "main.h"

/**
 * puts2 - print ever other character of the string
 * @str: the string to do the operation on
 * Return: void
 */
void puts2(char *str)
{
	while (*str)
	{
		if (*str == '\0')
			break;
		_putchar(*str);
		str++;
		if (*str == '\0')
			break;
		str++;
	}
	_putchar('\n');
}
