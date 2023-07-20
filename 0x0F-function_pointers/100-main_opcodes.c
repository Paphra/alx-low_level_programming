#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 - success
 * - else 1 if @argc != 2, and 2 if @argv[1] < 0
 */
int main(int argc, char *argv[])
{
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	
	if (num_bytes > 0)
		opcodes(num_bytes);

	return (0);
}

/**
 * opcodes - prints opcodes
 * @num_bytes: number of bytes
 * Return: nothing
 */
void opcodes(int num_bytes)
{
	int i;
	unsigned char *ptr = (unsigned char *) opcodes;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", ptr[i]);
		if (i < num_bytes - 1)
			printf(" ");
	}
	printf("\n");
}
