#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: the string
 * Description: if the length is odd, print (length -1) / 2
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	char *ptr = str;
	int start;
	int i;

	while (*ptr != '\0')
	{
		len++;
		ptr++;
	}
	len++;
	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len - 1) / 2;

	for (i = start; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}

