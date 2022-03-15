#include "main.h"

/**
 * main - Print lowercase alphabets
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char lowercaseAlphabet = "a";

	for (lowercaseAlphabet = "a"; lowercaseAlphabet <= "z"; lowercaseAlphabet++)
	{
		putchar(lowercaseAlphabet);
	}
	putchar('\n');
}
