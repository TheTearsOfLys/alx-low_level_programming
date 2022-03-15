#include "main.h"

/**
 * main - Print lowercase alphabets
 *
 * Return: void.
 */

void print_alphabet(void)
{
	char lowercaseAlphabet = "a";

	for (lowercaseAlphabet = "a"; lowercaseAlphabet <= "z"; lowercaseAlphabet++)
	{
		_putchar(lowercaseAlphabet);
	}
	_putchar('\n');
}
