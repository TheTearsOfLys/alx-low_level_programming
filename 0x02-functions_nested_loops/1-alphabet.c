#include "main.h"

/**
 * print_alphabet - Print lowercase alphabets
 * Description: Print alphabets in lowercase
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
