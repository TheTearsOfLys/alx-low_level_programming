#include "main.h"

/**
 * print_alphabet_x10 - prints 10x the alphabet
 *
 * Return: void.
 */

void main(void)
{
	int i = 1;
	int alphabet = 97;

	while (i < 11)
	{
	for (alphabet = 97; alphabet < 123; alphabet++)
	{
		_putchar(alphabet);
	}
	i++;
	}
	_putchar('\n);
}
	
