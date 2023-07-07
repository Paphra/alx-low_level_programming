#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the program followed by a new line
 * @argc: the count of the arguments to the program
 * @argv: the pointer to the array of the string arguments
 * Return: 0 - success, anything else for error
 */
int main(__attribute__((unused)) int argc, char **argv)
{
	printf("%s\n", argv[0]);

	return (0);
}
