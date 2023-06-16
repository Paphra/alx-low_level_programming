#include <stdio.h>

/**
 * main - Print all possible combinations of single digit numbers
 *
 * Return: 0 - success
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar('0' + number);
		if (number < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
