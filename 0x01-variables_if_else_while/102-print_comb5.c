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
	int k;
	int l;

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			for (k = j; k < 10; k++)
			{
				for (l = k; l < 10; l++)
				{
					if (k == 0)
						l = k + 1;
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('0' + l);
					if (i != 9 && j != 8)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
