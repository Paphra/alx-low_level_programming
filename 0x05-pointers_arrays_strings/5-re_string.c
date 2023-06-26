#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: the string to print in reverse
 * Return: void
 */
void print_rev(char *s)
{
	char *str = s;

	while (*str != '\0')
		str++;
	str--;
	while (str >= s)
	{
		_putchar(*str);
		str--;
	}
	_putchar('\n');
}
