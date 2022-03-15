#include "main.h"

/**
 * print_alphabet_x10 - prints 10x the alphabet
 *
 * Return: void.
 */

void print_alphabet_x10(void)
{
	int i = 0; 
	int alphabet;

	while (i < 10)
	{
	for (alphabet = 97; alphabet <= 122; alphabet++)
	{
		_putchar(alphabet);
	}
	i++;
	}
	_putchar('\n');
}
	
