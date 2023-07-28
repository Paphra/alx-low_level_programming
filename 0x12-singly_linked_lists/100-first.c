#include <stdio.h>

void __attribute__ ((constructor)) first();

/**
 * first - function that is called before the main function
 * Return: nothing
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
