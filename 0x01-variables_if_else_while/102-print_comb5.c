#include <stdio.h>

/**
 * main - Print all possible combinations of two two-digit numbers
 *
 * Return: 0 - success
 */
int main(void)
{
	int i;
	int j;
	int d1i;
	int d2i;
	int d1j;
	int d2j;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			d1i = i / 10;
			d2i = i % 10;
			d1j = j / 10;
			d2j = j % 10;

			putchar('0' + d1i);
			putchar('0' + d2i);
			putchar(' ');
			putchar('0' + d1j);
			putchar('0' + d2j);

			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}

	}

	putchar('\n');
	return (0);
}
