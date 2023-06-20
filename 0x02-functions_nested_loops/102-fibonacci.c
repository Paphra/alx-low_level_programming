#include <stdio.h>

/**
 * main - prints the fibonacci sequences
 *
 * Description: The first 50 Fibonnaci numbers starting from 1 and 2
 *
 * Return: 0 always success;
 */
int main(void)
{
	long seq[50];
	int i, j;

	seq[0] = 1;
	seq[1] = 2;

	for (i = 2; i < 50; i++)
		seq[i] = seq[i - 1] + seq[i - 2];

	for (j = 0; j < 50; j++)
	{
		printf("%ld", seq[j]);
		if (j < 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
