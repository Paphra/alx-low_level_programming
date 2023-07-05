#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	char *start = s;

	if (*s != '\0')
		_print_rev_recursion(s + 1);
	s--;
	if (*s != '\0')
		_putchar(*s);
	if (start >= s)
		return;
	*s = '\0';
	_print_rev_recursion(s);
}
