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
	int list[50];
	int i, j;

	list[0] = 1;
	list[1] = 2;

	for (i = 2; i < 50; i++)
		list[i] = list[i - 1] + list[i - 2];

	for (j = 0; j < 50; j++)
	{
		printf("%d", list[j]);
		if (j < 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
