#include <stdio.h>

/**
 * main - prints the fibonacci sequences
 *
 * Description: The fib sums
 *
 * Return: 0 always success;
 */
int main(void)
{
	long seq[50];
	int i, j;
	long sum;

	seq[0] = 1;
	seq[1] = 2;
	sum = 0;

	for (i = 2; i < 50; i++)
		seq[i] = seq[i - 1] + seq[i - 2];

	for (j = 0; j < 50; j++)
	{
		if (seq[j] <= 4000000)
		{
			if ((seq[j] % 2) == 0)
				sum += seq[j];
		} else
		{
			break;
		}
	}

	printf("%ld\n", sum);
	return (0);
}
