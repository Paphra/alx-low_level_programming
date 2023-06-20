#include "main.h"

/**
 * print_alphabet - print the alphabet in lower case
 *
 * Return: void
 */
void print_alphabet(void)
{
	char letter;

	letter = 'a';
	do {
		_putchar(letter);
		letter++;
	} while (letter <= 'z');

	_putchar('\n');
}
