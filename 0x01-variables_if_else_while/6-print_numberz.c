#include <stdio.h>

/**
 * main - Print all single digit numbers from 0 - no char and only putchar
 *
 * Return: 0 - success
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		putchar('0' + number);

	putchar('\n');
	return (0);
}
