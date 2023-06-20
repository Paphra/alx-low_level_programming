#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int count;
	char letter;

	for (count = 0; count < 10; count++)
	{
		letter = 'a';
		do {
			_putchar(letter);
			letter++;
		} while (letter <= 'z');

		_putchar('\n');
	}
}
