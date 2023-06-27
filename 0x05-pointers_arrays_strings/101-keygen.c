#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point to random password generator
 * Return: 0 - success
 */
int main(void)
{
	srand(time(NULL));

	int i;
	int idx;
	char pass[11];
	int num;

	const char alphan[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	num = sizeof(alphan) - 1;

	for (i = 0; i < 10; i++)
	{
		idx = rand() % num;
		pass[i] = alphan[idx];
	}
	pass[10] = '\0';
	printf("%s", pass);

	return (0);
}
