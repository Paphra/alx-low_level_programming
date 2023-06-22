#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	int num;

	num = 0;
	while (num <= 9)
	{
		_putchar('0' + num);
		num++;
	}
	_putchar('\n');
}
