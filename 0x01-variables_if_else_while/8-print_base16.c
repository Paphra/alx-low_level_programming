#include <stdio.h>

/**
 * main - Print all the numbers of base 16 in lowercase
 *
 * Return: 0 - success
 */
int main(void)
{
	int num;

	for (num = 0; num < 16; num++)
	{
		if (num < 10)
			putchar('0' + num);
		else
			putchar('a' + (num - 10));
	}

	putchar('\n');
	return (0);
}
