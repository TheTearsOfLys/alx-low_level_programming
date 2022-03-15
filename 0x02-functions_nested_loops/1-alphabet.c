#include "main.h"

/**
 * main - Print lowercase alphabets
 *
 * Return: void.
 */

void print_alphabet(void)
{
	int lowercaseAlphabet = 97;

	for (lowercaseAlphabet = 97; lowercaseAlphabet <= 122; lowercaseAlphabet++)
	{
		_putchar(lowercaseAlphabet);
	}
	_putchar('\n');
}
