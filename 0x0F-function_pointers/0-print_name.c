#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to the function that adds words
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
